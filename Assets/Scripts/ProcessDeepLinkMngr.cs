using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.Networking;
using TMPro;

public class ProcessDeepLinkMngr : MonoBehaviour
{
    public string debugTestingUrl;
    public static ProcessDeepLinkMngr Instance { get; private set; }
    public string deeplinkURL, replacedUrl, deepLinkingJsontext;
    public int reportId,user_Id;
    //public ApiResponse productCodes = new ApiResponse();
    public JsonApliTemplateRef_OverTheRoof overTheRoofApi = new JsonApliTemplateRef_OverTheRoof();
    public JsonApliTemplateRef_OverTheHead overTheHeadApi = new JsonApliTemplateRef_OverTheHead();
    public JsonApliTemplateRef_OnTheWallCeilingFloor ontTheWallCeilingFloorApi = new JsonApliTemplateRef_OnTheWallCeilingFloor();

    //public HarnessCaryForwardData _harnessCaryForwardDataScriptable;
    //public ProductCodeData _ProductCodeDataScriptable;
    public TextMeshProUGUI productCodeTextDebug;
    public bool mannual;
    private void Awake()
    {
        mannual = true;
        if (Instance == null)
        {
            Instance = this;
            Application.deepLinkActivated += onDeepLinkActivated;
            if (!string.IsNullOrEmpty(Application.absoluteURL))
            {
                // Cold start and Application.absoluteURL not null so process Deep Link.
                onDeepLinkActivated(Application.absoluteURL);
            }
            // Initialize DeepLink Manager global variable.
            else deeplinkURL = "[none]";
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    [ContextMenu("call")]
    public void TestingDeepLinking()
    {
        onDeepLinkActivated(debugTestingUrl);
    }

    private void onDeepLinkActivated(string url)
    {
        mannual = false;
        // Update DeepLink Manager global variable, so URL can be accessed from anywhere.
        deeplinkURL = url;
        int lastSlashIndex = url.LastIndexOf('/');
        // Extract the substring after the last "/"
        string reportIdString = url.Substring(lastSlashIndex - 4,4);

        int lastIndex = url.LastIndexOf('=');
        string userId = url.Substring(lastIndex +1);
        user_Id = int.Parse(userId);
        //Debug.Log(userId);
        //reportId = 0;
        // Convert the extracted substring to an integer
        int.TryParse(reportIdString, out reportId);

        

        //replacedUrl = url.Replace("arrestoar://", "https://uatapi.arresto.in/");
        //replacedUrl = url.Replace("EcArresto://", "https://api.arresto.in/");
        replacedUrl = url.Replace("arrestoec://", "https://uatapi.arresto.in/");
        StartCoroutine(FatchindJsonFromUrl(replacedUrl));


    }

    IEnumerator FatchindJsonFromUrl(string jsonUrl)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(jsonUrl))
        {
            yield return webRequest.SendWebRequest();

            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Failed to fetch JSON file: " + webRequest.error);
                yield break;
            }

            deepLinkingJsontext = webRequest.downloadHandler.text;

            //productCodes = JsonUtility.FromJson<ApiResponse>(deepLinkingJsontext);
            overTheRoofApi = JsonUtility.FromJson<JsonApliTemplateRef_OverTheRoof>(deepLinkingJsontext);

            if (overTheRoofApi.Module == "Over The Roof Horizontal")
            {
                //mannual = true;
                SceneManager.LoadScene(6);
            }

            if (overTheRoofApi.Module == "Over The Head Horizontal")
            {
                SceneManager.LoadScene(5);

            }
            //Debug.Log(jsonText);
        }

        //void GetProductItemFrommCollection(List<HarnessSorting> harnessSortings)
        //{
        //    var uppercaseCodename = productCodes.data.data[0].product_code.ToUpper();

        //    foreach (var item in harnessSortings)
        //    {
        //        //Debug.Log(item.itemProductCodeName + " " + gameData.gameObjects[0].itemProductCodeName);
        //        if (item.itemProductCodeName == uppercaseCodename)
        //        {
        //            //_harnessCaryForwardDataScriptable.productItemScriptableIndex = item.itemCollectionId;

        //            //SceneManag.Instance.Load_AR_Scene();
        //            break;
        //        }
        //    }
        //}

        


    }


#if PLATFORM_STANDALONE
    public void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

#endif



}

[System.Serializable]
public class ProductData
{
    public int product_id;
    public int category_id;
    public string product_code;
    public string product_type;
}

[System.Serializable]
public class UserData
{
    public int id;
    public string name;
    public string email;
    public string mobile_country_code;
    public string mobile;
    public string profile_image;
}

[System.Serializable]
public class UserProfile
{
    public int id;
    public int user_id;
    public string weight; // Use the appropriate data type for weight
    public List<ProductData> data;
    public UserData user;
}

[System.Serializable]
public class ApiResponse
{
    public string status;
    public string message;
    public UserProfile data;
}
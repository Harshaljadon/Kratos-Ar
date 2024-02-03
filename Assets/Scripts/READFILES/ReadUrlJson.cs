using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;

public class ReadUrlJson : MonoBehaviour
{
    public JsonApliTemplateRef_OverTheRoof jsonApliTemplateRef ;
    [SerializeField] string url;
    [SerializeField] string jsonText;
    [SerializeField] GameLoader gameLoader;
    //[SerializeField] ProcessDeepLinkMngr processDeepLinkMngr;
    // Start is called before the first frame update
    IEnumerator  Start()
    {
        yield return new WaitForSeconds(.1f);
        //processDeepLinkMngr = FindObjectOfType<ProcessDeepLinkMngr>();
        try
        {
            if (!ProcessDeepLinkMngr.Instance.mannual)
            {
                jsonApliTemplateRef = ProcessDeepLinkMngr.Instance.overTheRoofApi;
                RunJson();
            }
        }
        catch (System.Exception ex)
        {
            Debug.Log(ex);
        }

        //StartCoroutine(FetechingData());
    }

    IEnumerator FetechingData()
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            yield return webRequest.SendWebRequest();
            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Failed to fetch JSON file: " + webRequest.error);
                yield break;
            }

            jsonText = webRequest.downloadHandler.text;
            jsonApliTemplateRef = JsonUtility.FromJson<JsonApliTemplateRef_OverTheRoof>(jsonText);
        RunJson();
        }
    }


    [ContextMenu("run")]
    void DebugTestingJsonrun()
    {
        StartCoroutine(FetechingData());

    }

    void RunJson()
    {
        gameLoader.ExecuteJsonTask(jsonApliTemplateRef);
    }

    //// Update is called once per frame
    //void Update()
    //{
        
    //}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using RestSharp;
using UnityEngine.UI;
using AR2;
public class TakePictureFromMultipleCameras : MonoBehaviour
{
    [SerializeField]
    string uploadUrl = "https://uatapi.arresto.in/api/client/250/ar/media_uploads";
    [SerializeField]
    string[] fixLineName;
    [SerializeField]
    int resWidth;
    [SerializeField]
    int resHeight;

    [SerializeField]
    int cropWeidth, cropHeight, reportIdCurrent, userId;
    [SerializeField]
    int rawImageAssignSnapShotCount;
    public static int m_Name;
    public HashSet<int> usedIds = new HashSet<int>();
    float xPos, yPos;
    //float xOffsetRangeInput, yOffsetRangeInput, xSpace, ySpace, offsetX, offsetY;

    public Vector2 referenceResolution = new Vector2(1080, 2160);
    public Vector2 currentResolution;


    // Define the crop area size for the reference resolution
    public Vector2 cropAreaSize = new Vector2(700f, 405f);
    public Vector2 dynamicCropSize;


    public RawImage[] rawImage;

    public GameObject[] multiCam;
    public GameObject[] fixeLineAndWorkerCam;
    //public OverRoofSystem overRoofSys;
    public WireRopeSystem wireRopeSystem;

    public RectTransform rectTransform;

    void Start()
    {
        m_Name = 0;
        resWidth = (int)multiCam[0].GetComponent<Camera>().pixelWidth;
        resHeight = (int)multiCam[0].GetComponent<Camera>().pixelHeight;

        dynamicCropSize = CalculateCropAreaSize();

        try
        {
            reportIdCurrent = ProcessDeepLinkMngr.Instance.reportId;
            userId = ProcessDeepLinkMngr.Instance.user_Id;
            if (!ProcessDeepLinkMngr.Instance.mannual)
            {
            Invoke(nameof(STartProcessToTakeImage), .2f);
            }

        }
        catch (Exception ex)
        {
            Debug.Log(ex);
        }

    }


    void  Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            rawImageAssignSnapShotCount = 0;
            for (int i = 0; i < 4; i++)
            {
                multiCam[i].SetActive(true);

            }
            if (wireRopeSystem.corners > 0)
            {
                for (int i = 4; i < 6; i++)
                {
                    multiCam[i].SetActive(true);

                }
            }
            if (wireRopeSystem.intermidateCounts[0] > 0)
            {
                for (int i = 6; i < 8; i++)
                {

                    multiCam[i].SetActive(true);
                }
            }

            StartCoroutine(Testing());

            //rawImageAssignSnapShotCount = 0;
        }
        if (Input.GetKeyDown(KeyCode.P))
        {
            STartProcessToTakeImage();
            //StartCoroutine(TakePicOfEachComponentAtDifferentAngle());
        }
    }

    IEnumerator Testing()
    {
        foreach (GameObject go in multiCam)
        {

            if (!go.activeInHierarchy)
            {
                continue;
            }
            yield return new WaitForSeconds(1f);
            Camera cam = go.GetComponent<Camera>();
            RenderTexture rt = new RenderTexture(resWidth, resHeight, 24, RenderTextureFormat.Default, RenderTextureReadWrite.sRGB);

            cam.targetTexture = rt;
            cam.Render();
            RenderTexture.active = rt;
            //RenderTexture.active = cam.targetTexture;
            Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);

            screenShot.ReadPixels(new Rect(cam.pixelRect), 0, 0);

            screenShot.Apply();
            screenShot = Crop(screenShot); //cam.GetComponent<LifeLineCatoryType>()
            rawImage[rawImageAssignSnapShotCount].texture = screenShot;
            rawImageAssignSnapShotCount++;
            go.SetActive(false);

        }
    }

    // Calculate the crop area size based on the current resolution
    private Vector2 CalculateCropAreaSize()
    {
        float widthRatio = Screen.width / referenceResolution.x;
        float heightRatio = Screen.height / referenceResolution.y;

        float dynamicWidth = cropAreaSize.x * widthRatio;
        float dynamicHeight = cropAreaSize.y * heightRatio;
        cropWeidth = (int)dynamicWidth;
        cropHeight = (int)dynamicHeight;
        //return new Vector2(dynamicWidth, dynamicHeight);
        rectTransform.sizeDelta = new Vector2(dynamicWidth, dynamicHeight);

        return new Vector2(dynamicWidth, dynamicHeight);
    }


    public static string ScreenShotName(int width, int height)
    {
        m_Name++;
        var path = string.Format("{0}/screenshots/screen_{1}x{2}.png", Application.dataPath, width, height); //, System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss")
        return path;
    }

    void STartProcessToTakeImage()
    {
        rawImageAssignSnapShotCount = 0;


        StartCoroutine(TakePicOfEachComponentAtDifferentAngle());
        try
        {

        ProcessDeepLinkMngr.Instance.mannual = true;
        }
        catch (Exception ex)
        {
            Debug.Log(ex);
        }

    }


    IEnumerator TakePicOfEachComponentAtDifferentAngle()
    {
        foreach (var item in fixeLineAndWorkerCam)
        {

            item.SetActive(true);
            yield return new WaitForSeconds(1f);
            Camera cam = item.GetComponent<Camera>();
            RenderTexture rt = new RenderTexture(resWidth, resHeight, 24, RenderTextureFormat.Default, RenderTextureReadWrite.sRGB);

            cam.targetTexture = rt;
            cam.Render();
            RenderTexture.active = rt;
            //RenderTexture.active = cam.targetTexture;
            Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);

            screenShot.ReadPixels(new Rect(cam.pixelRect), 0, 0);

            screenShot.Apply();
            item.gameObject.SetActive(false);
            SentImageToServer(screenShot);
            rawImageAssignSnapShotCount++;
        }
        var size = multiCam.Length;
        //foreach (GameObject go in multiCam)
        for (int i = 0; i < size; i++)   
        {
            switch (i)
            {
                case 6:
                case 7:
                    // corner
                    if (wireRopeSystem.corners > 0)
                    {
                        multiCam[i].SetActive(true);
                    }
                    else
                    {
                        continue;
                    }
                    break;
                case 5:
                case 4:
                    // intermediate
                    if (wireRopeSystem.intermidateCounts[0] > 0)
                    {
                        multiCam[i].SetActive(true);
                    }
                    else
                    {
                        continue;
                    }
                    break;
                default:
                    multiCam[i].SetActive(true);
                    break;
            }
            yield return new WaitForSeconds(1f);
            Camera cam = multiCam[i].GetComponent<Camera>();
            RenderTexture rt = new RenderTexture(resWidth, resHeight, 24, RenderTextureFormat.Default, RenderTextureReadWrite.sRGB);

            cam.targetTexture = rt;
            cam.Render();
            RenderTexture.active = rt;
            //RenderTexture.active = cam.targetTexture;
            Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);

            screenShot.ReadPixels(new Rect(cam.pixelRect), 0, 0);

            screenShot.Apply();
            screenShot = Crop(screenShot); //cam.GetComponent<LifeLineCatoryType>()
            //rawImage[rawImageAssignSnapShotCount].texture = screenShot;
            SentImageToServer(screenShot);
            rawImageAssignSnapShotCount++;
            //Debug.Log(request.Body);
            //rt.Release();
            multiCam[i].SetActive(false);

        }
    }


    void SentImageToServer(Texture2D screenShot)
    {
        byte[] bytes = screenShot.EncodeToPNG();
   
            var bit64 = Convert.ToBase64String(bytes);

            RestClient client = new RestClient(uploadUrl); //https://api.arresto.in/api/client/250/ar/media_uploads //https://api.arresto.in/api/client/250/ar/media_uploads
            //Debug.Log(client);
            RestRequest request = new RestRequest(Method.POST);
            var productUrl = "https://uatapi.arresto.in/api/client/250/ar/media_uploads"; //"https://api.arresto.in/api/client/250/ar/media_uploads";//

            var uniqId = GenerateUniqueID().ToString();

            // Get the current UTC time
            DateTime currentTime = DateTime.UtcNow;

            // Calculate the Unix timestamp by subtracting the Unix epoch (January 1, 1970)
            TimeSpan timeSpan = currentTime - new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);

            // Get the total seconds and convert it to a long integer
            long unixTimestamp = (long)timeSpan.TotalSeconds;

            string fileNamePasse = unixTimestamp.ToString();
            var puidPass = uniqId.ToString();

            request.AddParameter("productUrl", productUrl);
            request.AddParameter("file_str", bit64);
            request.AddParameter("filename", fileNamePasse);
            request.AddParameter("puid", puidPass);
            request.AddParameter("ref_type", "EC report");
            request.AddParameter("ref_id", reportIdCurrent);
            request.AddParameter("user_id", userId);
            request.AddParameter("media_title", fixLineName[rawImageAssignSnapShotCount]);

            //Debug.Log(request.AddParameter("file_str", bit64).Body  );
            client.ExecuteAsync(request);
    }




    Texture2D Crop(Texture2D sourceTexture) //RectTransform cropRectTransform
    {
       

        // Get the current resolution
        currentResolution = new Vector2(Screen.width, Screen.height);

        xPos = Mathf.Clamp((currentResolution.x - cropWeidth) / 2f , 0, currentResolution.x - cropWeidth ); 
        yPos = Mathf.Clamp((currentResolution.y - cropHeight) / 2f , 0, currentResolution.y - cropHeight ); 

        var newPixels = sourceTexture.GetPixels((int)xPos, (int)yPos, (int)dynamicCropSize.x, (int)dynamicCropSize.y);
        Texture2D newTexture = new Texture2D(cropWeidth, cropHeight);
        newTexture.SetPixels(newPixels);
        newTexture.Apply();


       return newTexture;
    }

    int GenerateUniqueID()
    {
        int randomId;

        do
        {
            randomId = UnityEngine.Random.Range(100, 100000);
        } while (usedIds.Contains(randomId));

        usedIds.Add(randomId);
        return randomId;
    }
}

[System.Serializable]
public enum LifeLineCatagory
{
    extrimityA,extrimityB,intermediate,corner
}


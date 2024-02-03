using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using RestSharp;
using UnityEngine.UI;

public class OnenableSnapShot : MonoBehaviour
{

    int resWidth;
    int resHeight;
    public static int m_Name;

    public HashSet<int> usedIds = new HashSet<int>();


    public RawImage rawImage;

    void OnEnable()
    {
        StartCoroutine(TakeSnapShot());
    }

    IEnumerator  TakeSnapShot()
    {
        yield return new WaitForSeconds(.2f);

        //Debug.Log("calls2");
        //go.SetActive(true);
        //yield return new WaitForEndOfFrame();
        Camera cam = this.GetComponent<Camera>();
        resWidth = (int)cam.pixelWidth;
        resHeight = (int)cam.pixelHeight;
        RenderTexture rt = new RenderTexture(resWidth, resHeight, 24, RenderTextureFormat.Default, RenderTextureReadWrite.sRGB);
        //rt.antiAliasing = 4;
        cam.targetTexture = rt;
        cam.Render();
        RenderTexture.active = rt;
        Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
        //RenderTexture.active = cam.targetTexture;
        screenShot.ReadPixels(new Rect(cam.pixelRect), 0, 0);
        screenShot.Apply();
        rawImage.texture = screenShot;


        //byte[] bytes = screenShot.EncodeToPNG();
        //string filename = ScreenShotName(resWidth, resHeight);
        //System.IO.File.WriteAllBytes(filename, bytes);
        //var bit64 = Convert.ToBase64String(bytes);

        //RestClient client = new RestClient("https://api.arresto.in/api/client/250/ar/media_uploads"); //https://api.arresto.in/api/client/250/ar/media_uploads
        //RestRequest request = new RestRequest(Method.POST);
        //var productUrl = "https://api.arresto.in/api/client/250/ar/media_uploads";//

        //var uniqId = GenerateUniqueID().ToString();

        //// Get the current UTC time
        //DateTime currentTime = DateTime.UtcNow;

        //// Calculate the Unix timestamp by subtracting the Unix epoch (January 1, 1970)
        //TimeSpan timeSpan = currentTime - new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);

        //// Get the total seconds and convert it to a long integer
        //long unixTimestamp = (long)timeSpan.TotalSeconds;

        //string fileNamePasse = unixTimestamp + ".png";
        //var puidPass = uniqId.ToString();

        //request.AddParameter("productUrl", productUrl);
        //request.AddParameter("file_str", bit64);
        //request.AddParameter("filename", fileNamePasse);
        //request.AddParameter("puid", puidPass);

        //client.ExecuteAsync(request);
        rt.Release();

        //go.SetActive(false);
    }


}

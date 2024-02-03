using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
//using UnityEngine.AddressableAssets;
//using UnityEngine.ResourceManagement.AsyncOperations;


using TMPro;
using System.Collections;

namespace AR2
{
    public class UIManager : MonoBehaviour
    {
        public CanvasGroup canvasGroup;
        
        public RectTransform overHeadButton;
        public RectTransform overRoofButton;
        public RectTransform confinedSpaceButton;
        public RectTransform verticalButton;
        public RectTransform harnessButton;
        [SerializeField]
        RectTransform targetPosRef;

        [SerializeField]
        VerticalLayoutGroup verticalLayoutGroup;
        [SerializeField]
        TextMeshProUGUI loadingRef;
        [SerializeField] TextMeshProUGUI needInternet;
        public Material armMat;
        
        private string sceneName;
        float m_time = 0.3f;
        [SerializeField] private int index;
        [SerializeField]
        float width;
        [SerializeField]
        bool testingLoad;
        public void TapOnStart()
        {
            sceneName = "Choose";
            //LoadScene();
            SceneManager.LoadScene(1);
        }


        private void Start()
        {
            //needInternet.gameObject.SetActive(false);

            if (SceneManager.GetActiveScene().name == "Choose")
            {
                if (loadingRef != null)
                {
                    loadingRef.gameObject.SetActive(false);
                }
                //Addressables.InitializeAsync();
                //if (armMat)
                //{
                //    armMat.mainTexture = null;
                //}

                canvasGroup.alpha = 0;

                canvasGroup.DOFade(1, 0.5f);
                overHeadButton.transform.localScale = Vector3.zero;
                overRoofButton.transform.localScale = Vector3.zero;
                confinedSpaceButton.transform.localScale = Vector3.zero;
                verticalButton.transform.localScale = Vector3.zero;
                harnessButton.transform.localScale = Vector3.zero;

                overHeadButton.DOScale(Vector3.one, 0.5f);
                overRoofButton.DOScale(Vector3.one, 0.5f);
                confinedSpaceButton.DOScale(Vector3.one, 0.5f);
                verticalButton.DOScale(Vector3.one, 0.5f);
                harnessButton.DOScale(Vector3.one, 0.5f);
            }
            
        }



        public void OnOverHead()
        {
            AnimateAndLoad(overHeadButton);
            sceneName = "Over-Head";
            //index = ((int)Module.Overhead);
            // Invoke(nameof(LoadScene), m_time * 2);
        }

        public void OnOverRoof()
        {
            //SceneManager.LoadScene("over-the-roof");
            
            AnimateAndLoad(overRoofButton);
            sceneName = "over-the-roof";
            //index = (int)Module.Overtheroof;
            // Invoke(nameof(LoadScene), m_time * 2);
            
        }

        public void OnConfinedSpace()
        {
            AnimateAndLoad(confinedSpaceButton);
            //sceneName = "ConfinedSpace";
            sceneName = "ConfinedSpace";
            //index = (int)Module.Confinesspace;

            // Invoke(nameof(LoadScene), m_time * 2);

        }

        public void OnVertical()
        {
            AnimateAndLoad(verticalButton);
            sceneName = "Vertical";
            //index = (int)Module.Cvertical;

            // Invoke(nameof(LoadScene), m_time * 2);
        }
        public void OnHarness()
        {
            AnimateAndLoad(harnessButton);
            sceneName = "OnTheWall&Celling";
            // Invoke(nameof(LoadScene), m_time * 2);
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                SceneManager.LoadScene(0);
            }

            if (Input.GetKeyDown(KeyCode.Space))
            {
                Application.Quit();
            }
        }
        //AsyncOperationHandle handler;

        private void LoadScene()
        {
            //SceneManager.LoadSceneAsync(sceneName).completed += delegate(AsyncOperation operation) { };
            //Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Additive, true).Completed += UIManager_Completed;
            //StartCoroutine(nameof(CheckDownloadProgress));
            CheckDownloadProgress();            //CheckDownloadSize();
        }

        //IEnumerator CheckDownloadProgress()
        public void CheckDownloadProgress()
        {
            //var checkinternectConnection = GetInternetConnectResponse.Instance.ConnectedInternet;
            //handler = Addressables.DownloadDependenciesAsync(sceneName, false);
            // Check the download size

            //internet but not downloaded
            //if (checkinternectConnection)
            //float progress = 0;
            //while (handler.Status == AsyncOperationStatus.None)
            //{
            //    //float percentageComplete = handler.GetDownloadStatus().Percent;
            //    //loadingRef.gameObject.SetActive(true);
            //    //if (percentageComplete > progress * 1.1f) // Report at most every 10% or so
            //    //{
            //    //    progress = percentageComplete; // More accurate %
            //    //    float p = percentageComplete * 100;
            //    //    string val = MathF.Round(p, 2).ToString();
            //    //    loadingRef.gameObject.SetActive(true);
            //    //    loadingRef.SetText("Loading: " + $"<mspace={width}em>{val}");
            //    //}
            //    yield return null;
            //}
            //if (true)
            //{


            //}
            // no internet but downloaded

            //else if (!checkinternectConnection )
            //{
            //    needInternet.gameObject.SetActive(false);
            //    Addressables.Release(handler);
                //Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Single, true);
            SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Single);
            //    yield return null;
            //}
            //// no internet but not downloaded

            //else if (!checkinternectConnection )
            //{
            //    //AsyncOperationHandle<long> getDownloadSize = Addressables.GetDownloadSizeAsync(sceneName);
            //    //yield return getDownloadSize;
            //    needInternet.gameObject.SetActive(true);
            //    yield return new  WaitForSeconds(3);
            //    //Addressables.Release(getDownloadSize);
            //    Addressables.Release(handler);
            //    SceneManager.LoadScene(1);
            //}
            if (testingLoad)
            {

                //Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Single, true);
                SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Single);
            }

            //SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Single);
            //if (handler.Status == AsyncOperationStatus.Succeeded)
            //{
            //    handler.Completed += UIManager_Completed;
            //}

        }

        //private void UIManager_Completed(AsyncOperationHandle obj)
        //{
        //        Addressables.Release(handler);
        //    //AppSettings.LoadScene(index, LoadSceneMode.Single);
        //    Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Single, true);

            
        //}


        //SceneInstance m_LoadedScene;

        /*private void UIManager_Completed(AsyncOperationHandle<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> obj)
        {

            if (obj.Status == AsyncOperationStatus.Succeeded)
            {
                Addressables.UnloadSceneAsync(m_LoadedScene);
            }
        }*/



        // Use this for initialization
        void AnimateAndLoad(RectTransform itemToAnimate)
        {
            StartCoroutine(WaitForAdjustAnchorPoint(itemToAnimate));


            // itemToAnimate.localPosition = new Vector3(0, 0, 0);
            // itemToAnimate.sizeDelta = new Vector2(itemToAnimate.parent.GetComponent<RectTransform>().rect.width, itemToAnimate.parent.GetComponent<RectTransform>().rect.height);


            // PingPong(itemToAnimate, Vector3.one, (Vector3.one * 1.025f));
        }

        IEnumerator WaitForAdjustAnchorPoint(RectTransform itemToAnimate)
        {
            verticalLayoutGroup.enabled = false;


            //itemToAnimate.anchor
            //yield return new WaitForSeconds(1);
            var localPos = itemToAnimate.position;
            itemToAnimate.anchorMin = new Vector2(.5f, .5f);
            itemToAnimate.anchorMax = new Vector2(.5f, .5f);    
            itemToAnimate.pivot = new Vector2(.5f, .5f);
            itemToAnimate.position = localPos;
            yield return new WaitForSeconds(.1f);

            // Disable Button
            itemToAnimate.GetComponent<Button>().enabled = false;

            var targetRect = itemToAnimate.parent.parent.GetComponent<RectTransform>().rect;

            Int32 childCount = itemToAnimate.childCount;
            byte childs = (byte)itemToAnimate.parent.childCount;

            itemToAnimate.transform.SetSiblingIndex(childs);
            targetPosRef.SetParent(verticalLayoutGroup.GetComponent<RectTransform>());

            //Vector3 targetPosition = Vector3.zero;
            Vector3 targetPosition = targetPosRef.anchoredPosition;
            Vector2 targetSize = new Vector2(targetRect.width, targetRect.width);

            ScaleAndFill(itemToAnimate, targetPosition, targetSize, m_time);

        }


        private void ScaleAndFill(RectTransform rectTransform, Vector3 targetPosition, Vector2 targetSize, float time)
        {
            rectTransform.DOSizeDelta(targetSize, time);
            rectTransform.DOAnchorPos(targetPosition, time).OnComplete(LoadScene);
            float value = rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier;

            DOTween.To(() => rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier, x =>
            {
                rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier = x;
            }, 10, time);



            rectTransform.GetComponent<Image>().pixelsPerUnitMultiplier = value;
        }
        

        private void PingPong(Transform transform, Vector3 from, Vector3 to)
        {
            transform.DOScale(to, m_time).OnComplete(() => PingPong(transform,to, from));
        }
        
    }
}
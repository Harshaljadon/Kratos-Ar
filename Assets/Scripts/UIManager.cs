using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations; 


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
        TextMeshProUGUI loadingRef;
        [SerializeField] TextMeshProUGUI needInternet;
        public Material armMat;
        
        private string sceneName;
        float m_time = 0.3f;
        [SerializeField] private int index;
        [SerializeField]
        float width;
        public void TapOnStart()
        {
            sceneName = "Choose";
            //LoadScene();
            SceneManager.LoadScene(1);
        }


        private void Start()
        {
            needInternet.gameObject.SetActive(false);

            if (SceneManager.GetActiveScene().name == "Choose")
            {
                if (loadingRef != null)
                {
                    loadingRef.gameObject.SetActive(false);
                }
                //Addressables.InitializeAsync();
                if (armMat)
                {
                    armMat.mainTexture = null;
                }

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
            sceneName = "OVERHEAD";
            //index = ((int)Module.Overhead);
            // Invoke(nameof(LoadScene), m_time * 2);
        }

        public void OnOverRoof()
        {
            //SceneManager.LoadScene("over-the-roof");
            
            AnimateAndLoad(overRoofButton);
            sceneName = "OVERTHEROOF";
            //index = (int)Module.Overtheroof;
            // Invoke(nameof(LoadScene), m_time * 2);
            
        }

        public void OnConfinedSpace()
        {
            AnimateAndLoad(confinedSpaceButton);
            sceneName = "CONFINEDSPACE";
            //index = (int)Module.Confinesspace;

            // Invoke(nameof(LoadScene), m_time * 2);

        }

        public void OnVertical()
        {
            AnimateAndLoad(verticalButton);
            sceneName = "VERTICAL";
            //index = (int)Module.Cvertical;

            // Invoke(nameof(LoadScene), m_time * 2);
        }
        public void OnHarness()
        {
            AnimateAndLoad(harnessButton);
            sceneName = "MainScene";
            // Invoke(nameof(LoadScene), m_time * 2);
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                SceneManager.LoadScene(0);
            }
        }
        AsyncOperationHandle handler;

        private void LoadScene()
        {
            //SceneManager.LoadSceneAsync(sceneName).completed += delegate(AsyncOperation operation) { };
            //Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Additive, true).Completed += UIManager_Completed;
            StartCoroutine(nameof(CheckDownloadProgress));
            //CheckDownloadSize();
        }

        IEnumerator CheckDownloadProgress()
        {
            var checkinternectConnection = GetInternetConnectResponse.Instance.ConnectedInternet;
            handler = Addressables.DownloadDependenciesAsync(sceneName, false);
            // Check the download size

            //internet but not downloaded
            if (checkinternectConnection)
            {
            float progress = 0;
                while (handler.Status == AsyncOperationStatus.None)
                {
                    float percentageComplete = handler.GetDownloadStatus().Percent;
                    loadingRef.gameObject.SetActive(true);
                    if (percentageComplete > progress * 1.1f) // Report at most every 10% or so
                    {
                        progress = percentageComplete; // More accurate %
                        float p = percentageComplete * 100;
                        string val = MathF.Round(p, 2).ToString();
                        loadingRef.gameObject.SetActive(true);
                        loadingRef.SetText("Loading: "+ $"<mspace={width}em>{val}");
                    }
                    yield return null;
                 }

            }
            // no internet but downloaded

            else if (!checkinternectConnection )
            {
                needInternet.gameObject.SetActive(false);
                Addressables.Release(handler);
                Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Single, true);
                yield return null;
            }
            // no internet but not downloaded

            else if (!checkinternectConnection )
            {
                //AsyncOperationHandle<long> getDownloadSize = Addressables.GetDownloadSizeAsync(sceneName);
                //yield return getDownloadSize;
                needInternet.gameObject.SetActive(true);
                yield return new  WaitForSeconds(3);
                //Addressables.Release(getDownloadSize);
                Addressables.Release(handler);
                SceneManager.LoadScene(1);
            }
            if (handler.Status == AsyncOperationStatus.Succeeded)
            {
                handler.Completed += UIManager_Completed;
            }

        }

        private void UIManager_Completed(AsyncOperationHandle obj)
        {
                Addressables.Release(handler);
            //AppSettings.LoadScene(index, LoadSceneMode.Single);
            Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Single, true);

            
        }


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
            // Disable Button
            itemToAnimate.GetComponent<Button>().enabled = false;
            
            var targetRect = itemToAnimate.parent.GetComponent<RectTransform>().rect;

            Int32 childCount = itemToAnimate.childCount;
            byte childs = (byte)itemToAnimate.parent.childCount;

            itemToAnimate.transform.SetSiblingIndex(childs);


            Vector3 targetPosition = Vector3.zero;
            Vector2 targetSize = new Vector2(targetRect.width, targetRect.height);
            
            ScaleAndFill(itemToAnimate, targetPosition, targetSize, m_time);
            
            // itemToAnimate.localPosition = new Vector3(0, 0, 0);
            // itemToAnimate.sizeDelta = new Vector2(itemToAnimate.parent.GetComponent<RectTransform>().rect.width, itemToAnimate.parent.GetComponent<RectTransform>().rect.height);


            // PingPong(itemToAnimate, Vector3.one, (Vector3.one * 1.025f));
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
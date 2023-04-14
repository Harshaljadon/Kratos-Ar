using System.Collections;
using UnityEngine;
using TMPro;
using DG.Tweening;

namespace AR2
{
    public class VerticalSystemUI : UiManagerBase
    {
        public VerticalSystem verticalSystem;
        public ArPlaceObject arPlaceObject;
        public ARController arController;
        public RectTransform rootUiPanel;
        public RectTransform intermidatePanel;
        public TMP_Text headingText;
        public RectTransform topPanel;
        public RectTransform controlsPanel;

        public GameObject cameraShotPanel;

        public TMP_Text[] intermidiateTexts;

        private bool isIntermidiateSelected = false;
        private bool isArON = false;

        public IndustryObject industryObject;

        public GameObject arObject;
        private Vector3 arObjectDefaultPosition;
        private Vector3 arObjectDefaultRotation;
        private Vector3 arObjectDefaultscale;
        
        public MobilemaxCamera cameraControls;
        public ScreenShotHandler screenShotHandler;
        
        private CanvasGroup canvasGroup;

        private int vehicleIndex = 0;


        private Vector3 defaultScale = Vector3.one;
        private Vector3 arScale = Vector3.one * 0.25f;

        private void Awake()
        {
            canvasGroup = GetComponent<CanvasGroup>();
            if(InfoText != null)
                InfoText.SetActive(false);

            defaultScale = industryObject.transform.root.localScale;
        }

        private void Start()
        {

            // arController.transform.position = nonArTranforms.position;
            // arController.transform.rotation = nonArTranforms.rotation;
            
            arController.SetNonArLocation();
            
            canvasGroup.alpha = 0;

            canvasGroup.DOFade(1, 0.5f);
            
            // headingText.text = "Please Enter Intermediate details";
            SetIntermidiateVisiblity(isIntermidiateSelected);
            UpdateIntermidiateText();
            cameraShotPanel.SetActive(false);
            
            intermidatePanel.gameObject.SetActive(false);

            arObjectDefaultPosition = arObject.transform.position;
            arObjectDefaultRotation = arObject.transform.rotation.eulerAngles;
            arObjectDefaultscale = arObject.transform.localScale;
            
            cameraControls.arMode = isArON;
        }

        public void ToggleIntermidiate()
        {
            isIntermidiateSelected = !isIntermidiateSelected;
            SetIntermidiateVisiblity(isIntermidiateSelected);
        }

        private void SetIntermidiateVisiblity(bool visibility)
        {
            intermidatePanel.gameObject.SetActive(visibility);

            if (intermidatePanel.gameObject.activeSelf)
            {
                headingText.text = "Please Enter Intermediate details";
            }

            topPanel.gameObject.SetActive(visibility);
        }

        public void IncreaseIntermidiate(int onSegment)
        {
            verticalSystem.IncreaseIntermediate(onSegment);
            UpdateIntermidiateText();
        }
        public void DecreaseIntermidiate(int onSegment)
        {
            verticalSystem.DecreaseIntermediate(onSegment);
            UpdateIntermidiateText();
        }

        void UpdateIntermidiateText()
        {
            for (int i = 0; i < intermidiateTexts.Length; i++)
            {
                intermidiateTexts[i].text = verticalSystem.intermediateIndex.ToString();
            }
        }

        public void TakeARShot()
        {
            industryObject.HideAllObjects();

            StartCoroutine(SetArBackground());
            Invoke(nameof(EnableUIafterShot), 0.05f);
            HideUI(false);
        }

        private IEnumerator SetArBackground()
        {
            yield return new WaitForEndOfFrame();
            SaveScreenShot();
        }


        void EnableUIafterShot()
        {
            cameraShotPanel.SetActive(true);

            // show everything
            industryObject.ShowObjects();
            // then hide all unessary object
            industryObject.HideObjects();

            ShowUI();

        }

        public void OnBackPressed()
        {
            // close ar session if On
            if(isArON)
            {
                OnArPressed();
            }

            // level choose scene
            UnityEngine.SceneManagement.SceneManager.LoadScene(1);
        }

        

        public void OnArPressed()
        {
            isArON = !isArON;

            cameraControls.arMode = isArON;

            FindObjectOfType<TouchControls>().isArMode = isArON;
            
            SetArMode(isArON);

            intermidatePanel.gameObject.SetActive(false);
            topPanel.gameObject.SetActive(false);
            isIntermidiateSelected = false;
            
            if (isArON)
            {
                cameraShotPanel.SetActive(true);
                industryObject.HideAllObjects();

                industryObject.transform.root.localScale = arScale;
                
                topPanel.gameObject.SetActive(false);
                controlsPanel.gameObject.SetActive(false);
                intermidatePanel.gameObject.SetActive(false);
                
                arPlaceObject.b_ArMode = true;
                arPlaceObject.OnArActivate();

            }
            else
            {
                cameraShotPanel.SetActive(false);
                industryObject.ShowObjects();
                arPlaceObject.b_ArMode = false;
                arPlaceObject.OnArDeActivate();
                
                industryObject.transform.root.localScale = defaultScale;
                controlsPanel.gameObject.SetActive(true);

                arObject.transform.position = arObjectDefaultPosition;
                arObject.transform.rotation = Quaternion.Euler(arObjectDefaultRotation);
                arObject.transform.localScale = arObjectDefaultscale;

            }

        }

        private void SetArMode(bool newMode)
        {
            arController.SetArMode(newMode);
        }

        public override void ShowUI()
        {
            //
            rootUiPanel.gameObject.SetActive(true);
            if(InfoText != null)
                InfoText.SetActive(false);
        }
        
        public override void HideUI(bool addInfoText)
        {
            base.HideUI(addInfoText);
            rootUiPanel.gameObject.SetActive(false);
            SetIntermidiateVisiblity(false);
        }
        
        public void SaveScreenShot()
        {
            HideUI(true);
            
            screenShotHandler.TakeScreenShotwithDelay(0f);
            Invoke(nameof(EnableUIafterShot), 0.025f);
            
        }
    }
}
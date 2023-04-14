using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

namespace AR2
{
    public class OverHeadSystemUI : UiManagerBase
    {
        public OverHeadSystem OverHeadSystem;
        public ArPlaceObject arPlaceObject;
        public ARController arController;
        public RectTransform rootUiPanel;
        public RectTransform intermidatePanel;
        public TMP_Text headingText;
        public RectTransform topPanel;
        public RectTransform controlsPanel;

        public GameObject cameraShotPanel;
        //public MeshRenderer ARPlaneMesh;

        public TMP_Text[] intermidiateTexts;

        private bool isIntermidiateSelected = false;
        private bool isArON = false;

        public Image arButton;
        public Image intermidiateButton;

        public IndustryObject industryObject;

        public GameObject arObject;
        private Vector3 arObjectDefaultPosition;
        private Vector3 arObjectDefaultRotation;
        private Vector3 arObjectDefaultscale;
        
        public RectTransform vehiclePanel;
        public Image vehicleImageHolder;
        public List<Sprite> vehicleSprites;

        
        public MobilemaxCamera cameraControls;
        public ScreenShotHandler screenShotHandler;

        // public Transform arTransforms;
        // public Transform nonArTranforms;

        // public Vector3 arObjStartPos;
        // public Vector3 arObjStartRot;
        
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
            
            // ARPlaneMesh.gameObject.SetActive(false);
            // ARPlaneMesh.material.mainTexture = null;

            if (vehiclePanel != null)
            {
                vehiclePanel.gameObject.SetActive(false);
            }
            
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

            if(isIntermidiateSelected && vehiclePanel != null)
            {
                vehiclePanel.gameObject.SetActive(false);
            }
        }

        private void SetIntermidiateVisiblity(bool visibility)
        {
            intermidatePanel.gameObject.SetActive(visibility);

            if (intermidatePanel.gameObject.activeSelf)
            {
                headingText.text = "Please Enter Intermediate details";
            }
            
            if (vehiclePanel != null)
            {
                vehiclePanel.gameObject.SetActive(false);
            }
            
            topPanel.gameObject.SetActive(visibility);
        }

        public void IncreaseIntermidiate(int onSegment)
        {
            OverHeadSystem.IncreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
        }
        public void DecreaseIntermidiate(int onSegment)
        {
            OverHeadSystem.DecreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
        }

        void UpdateIntermidiateText()
        {
            for (int i = 0; i < intermidiateTexts.Length; i++)
            {
                intermidiateTexts[i].text = OverHeadSystem.intermidateCounts[i].ToString();
            }
        }

        public void TakeARShot()
        {
            industryObject.HideAllObjects();

            // ARPlaneMesh.gameObject.SetActive(false);
            vehiclePanel.gameObject.SetActive(false);

            StartCoroutine(SetArBackground());
            Invoke(nameof(EnableUIafterShot), 0.05f);
            HideUI(false);
        }

        private IEnumerator SetArBackground()
        {
            yield return new WaitForEndOfFrame();
            
            SaveScreenShot();
            //
            // var texture = ScreenCapture.CaptureScreenshotAsTexture();
            //
            // Camera cam = Camera.main;
            // float pos = (cam.nearClipPlane + 300f);
            // ARPlaneMesh.transform.position = cam.transform.position + cam.transform.forward * pos;
            // //ARPlaneMesh.transform.LookAt(cam.transform);
            // float h = (Mathf.Tan(cam.fieldOfView * Mathf.Deg2Rad * 0.5f) * pos * 2f) * cam.aspect / 10.0f;
            // float w = h * Screen.height / Screen.width;
            //
            // // plane is rotated thats why x(width) and z(height) are used
            // ARPlaneMesh.transform.localScale = new Vector3(h * 1.5f, 1, w * 1.5f);
            // ARPlaneMesh.material.mainTexture = texture;
        }


        void EnableUIafterShot()
        {
            //arPanel.gameObject.SetActive(true);
            cameraShotPanel.SetActive(true);

            // show everything
            industryObject.ShowObjects();
            // then hide all unessary object
            industryObject.HideObjects();

            ShowUI();

            // ARPlaneMesh.gameObject.SetActive(true);

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

            if(vehiclePanel)
                vehiclePanel.gameObject.SetActive(false);

            intermidatePanel.gameObject.SetActive(false);
            topPanel.gameObject.SetActive(false);
            isIntermidiateSelected = false;
            
            if (isArON)
            {
                // arButton.color = selectedColor;
                cameraShotPanel.SetActive(true);
                industryObject.HideAllObjects();

                industryObject.transform.root.localScale = arScale;
                
                topPanel.gameObject.SetActive(false);
                controlsPanel.gameObject.SetActive(false);
                intermidatePanel.gameObject.SetActive(false);
                
                arPlaceObject.b_ArMode = true;
                arPlaceObject.OnArActivate();
                // arPlaceObject.ObjectToPlace = OverHeadSystem.gameObject;

            }
            else
            {
                // arButton.color = Color.white;
                cameraShotPanel.SetActive(false);
                industryObject.ShowObjects();
                arPlaceObject.b_ArMode = false;
                arPlaceObject.OnArDeActivate();
                
                industryObject.transform.root.localScale = defaultScale;

                // ARPlaneMesh.gameObject.SetActive(false);
                // topPanel.gameObject.SetActive(true);
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

        public void ToggleVehiclePanel()
        {
            vehiclePanel.gameObject.SetActive(!vehiclePanel.gameObject.activeSelf);
            topPanel.gameObject.SetActive(vehiclePanel.gameObject.activeSelf);
            
            if (vehiclePanel.gameObject.activeSelf)
            {
                intermidatePanel.gameObject.SetActive(false);
                headingText.text = "Please select Vehicle Type";
            }

            isIntermidiateSelected = false;
        }


        public void NextVehicle()
        {
            vehicleIndex++;

            if(vehicleIndex >= vehicleSprites.Count)
            {
                vehicleIndex = vehicleSprites.Count - 1;
            }

            OverHeadSystem.SetVehicle(vehicleIndex);
            vehicleImageHolder.sprite = vehicleSprites[vehicleIndex];

            //anchorIndex = overRoofSystem.GetAchorIndex();
            //SetAchorImage(anchorIndex);
        }

        public void PreviousVehicle()
        {
            vehicleIndex--;
            if (vehicleIndex < vehicleSprites.Count)
            {
                vehicleIndex = 0;
            }

            OverHeadSystem.SetVehicle(vehicleIndex);
            vehicleImageHolder.sprite = vehicleSprites[vehicleIndex];
        }
        
        public void SaveScreenShot()
        {
            HideUI(true);
            
            screenShotHandler.TakeScreenShotwithDelay(0f);
            Invoke(nameof(EnableUIafterShot), 0.025f);
            
        }
        
        public void OpenImage()
        {
            OverHeadSystem.LoadImageFromGallery();
        }
    }
}



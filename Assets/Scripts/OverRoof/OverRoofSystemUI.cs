using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

namespace AR2
{

    public class OverRoofSystemUI : UiManagerBase
    {
        public enum UiState
        {
            roof,
            anchor,
            segment,
            intermidiate,
            cameraShot,
            AR
        }

        public OverRoofSystem overRoofSystem;
        public ARController arController;

        public RectTransform uiRootPanel;

        public RectTransform roofPanel;
        public RectTransform anchorPanel;
        public RectTransform segmentPanel;
        public RectTransform intermidatePanel;

        public RectTransform topPanel;
        public RectTransform bottomPanel;

        public TMP_Text headingText;

        public TMP_Text lengthText;
        public TMP_Text widthText;

        public TMP_Text cornersText;

        public RectTransform segment1Panel;
        public RectTransform segment2Panel;
        public RectTransform segment3Panel;
        public TMP_Text segment1Text;
        public TMP_Text segment2Text;
        public TMP_Text segment3Text;

        public RectTransform[] intermidiatePanels;
        public TMP_Text[] intermidiateTexts;

        public List<Sprite> anchorSprites = new List<Sprite>();

        public Image achorImage;

        public Image roofButton;
        public Image anchorButton;
        public Image segmentButton;
        public Image intermidiateButton;
        public Image arButton;


        public GameObject cameraShotPanel;
        public IndustryObject industryObject;
        public ArPlaceObject arPlaceObject;

        public TouchControls arControls;
        public MobilemaxCamera cameraControls;
        public ScreenShotHandler screenShotHandler;
        
        private UiState uiState;
        private bool isArON = false;

        int anchorIndex = 0;

        private CanvasGroup canvasGroup;
        
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
            canvasGroup.alpha = 0;

            canvasGroup.DOFade(1, 0.5f);

            lengthText.text = overRoofSystem.RoofLength.ToString();
            widthText.text =  overRoofSystem.RoofWidth.ToString();

            cameraShotPanel.SetActive(false);

            uiState = UiState.roof;
            OnUiStateChange();

            arControls.isArMode = isArON;
            cameraControls.arMode = isArON;
        }

        public void SetCorners(int change)
        {
            overRoofSystem.SetCorners(change);
            cornersText.text = (overRoofSystem.corners).ToString(); 
            SetSegmentUiVisibility();
        }

        void SetSegmentUiVisibility() // also used for intermidiate
        {
            switch (overRoofSystem.corners)
            {
                case 0:
                    {
                        segment1Panel.gameObject.SetActive(true);
                        segment2Panel.gameObject.SetActive(false);
                        segment3Panel.gameObject.SetActive(false);

                        intermidiatePanels[0].gameObject.SetActive(true);
                        intermidiatePanels[1].gameObject.SetActive(false);
                        intermidiatePanels[2].gameObject.SetActive(false);

                    }
                    break;

                case 1:
                    {
                        segment1Panel.gameObject.SetActive(true);
                        segment2Panel.gameObject.SetActive(true);
                        segment3Panel.gameObject.SetActive(false);

                        intermidiatePanels[0].gameObject.SetActive(true);
                        intermidiatePanels[1].gameObject.SetActive(true);
                        intermidiatePanels[2].gameObject.SetActive(false);
                    }
                    break;

                case 2:
                    {
                        segment1Panel.gameObject.SetActive(true);
                        segment2Panel.gameObject.SetActive(true);
                        segment3Panel.gameObject.SetActive(true);

                        intermidiatePanels[0].gameObject.SetActive(true);
                        intermidiatePanels[1].gameObject.SetActive(true);
                        intermidiatePanels[2].gameObject.SetActive(true);
                    }
                    break;
                default:
                    break;
            }
        }

        public void IncSegmentLength(int SegNumber)
        {
            overRoofSystem.ApplySegmentChange(SegNumber, 1);
            SetSegmentText();
        }

        public void DecSegmentLength(int SegNumber)
        {
            overRoofSystem.ApplySegmentChange(SegNumber, -1); // -1 reresent to reduce
            SetSegmentText();
        }

        void SetSegmentText()
        {
            segment1Text.text = overRoofSystem.segment1Length.ToString();
            segment2Text.text = overRoofSystem.segment2Length.ToString();
            segment3Text.text = overRoofSystem.segment3Length.ToString();
        }

        public void IncreseRoofLength()
        {
            overRoofSystem.IncreseRoofLength();
            lengthText.text = overRoofSystem.RoofLength.ToString();
        }

        public void DecreseRoofLength()
        {
            overRoofSystem.DecreseRoofLength();
            lengthText.text = overRoofSystem.RoofLength.ToString();
        }

        public void IncreseRoofWidth()
        {
            overRoofSystem.IncreseRoofWidth();
            widthText.text = overRoofSystem.RoofWidth.ToString();
        }

        public void DecreseRoofWidth()
        {
            overRoofSystem.DecreseRoofWidth();
            widthText.text = overRoofSystem.RoofWidth.ToString();
        }

        public void NextAnchor()
        {
            overRoofSystem.SetAnchor(true);
            anchorIndex = overRoofSystem.GetAchorIndex();
            SetAchorImage(anchorIndex);
        }

        public void PreviousAnchor()
        {
            overRoofSystem.SetAnchor(false);
            anchorIndex = overRoofSystem.GetAchorIndex();
            SetAchorImage(anchorIndex);
        }

        public void OnBackButtonPressed()
        {
            // close ar session if On
            if (isArON)
            {
                isArON = false;
                arController.SetArMode(isArON);
            }

            // level choose scene
            UnityEngine.SceneManagement.SceneManager.LoadScene(1);
        }


        public void OnRoofButtonPressed()
        {
            uiState = UiState.roof;
            OnUiStateChange();
        }

        public void OnAnchorButtonPressed()
        {
            uiState = UiState.anchor;
            OnUiStateChange();
        }

        public void OnSegmentButtonPressed()
        {
            uiState = UiState.segment;
            OnUiStateChange();
        }
        public void OnIntermidiatesButtonPressed()
        {
            uiState = UiState.intermidiate;
            OnUiStateChange();
        }
        public void OnArButtonPressed()
        {
            isArON = !isArON;
            
            cameraControls.arMode = isArON;
            arControls.isArMode = isArON;
            
            SetArMode(isArON);
            
            if(isArON)
            {
                // use ar camera to take screenshot
                uiState = UiState.cameraShot;
                OnUiStateChange();
                
                industryObject.transform.root.localScale = arScale; 
                
                industryObject.HideAllObjects();
                industryObject.OnArActive();
                industryObject.HideAllObjects();
                
                arPlaceObject.b_ArMode = true;
                
                arPlaceObject.OnArActivate();
            }
            else
            {
                industryObject.transform.root.localScale = defaultScale; 
                
                
                industryObject.ShowObjects();
                industryObject.OnArDeactivate();
                
                
                arPlaceObject.b_ArMode = false;
                arPlaceObject.OnArDeActivate();
                
                uiState = UiState.roof;
                OnUiStateChange();
            }
           
        }

        public void TakeARShot()
        {
            //arPanel.gameObject.SetActive(false);
            
            // overRoofSystem.roofPlane.gameObject.SetActive(false);
            
            StartCoroutine(SetArBackground());
            Invoke(nameof(EnableUIafterShot), 0.05f);
            HideUI(false);

        }

        private IEnumerator SetArBackground()
        {
            yield return new WaitForEndOfFrame();
            SaveScreenShot();

            // ARPlaneMesh.gameObject.SetActive(false);
            //
            // var texture = ScreenCapture.CaptureScreenshotAsTexture();
            //
            // Camera cam = Camera.main;
            // float pos = (cam.nearClipPlane + 300f);
            //
            // ARPlaneMesh.transform.position = cam.transform.position + cam.transform.forward * pos;
            // //ARPlaneMesh.transform.LookAt(cam.transform);
            // float h = (Mathf.Tan(cam.fieldOfView * Mathf.Deg2Rad * 0.5f) * pos * 2f) * cam.aspect / 10.0f;
            // float w = h * Screen.height / Screen.width;
            //
            // // plane is rotated thats why x(width) and z(height) are used
            // ARPlaneMesh.transform.localScale = new Vector3(h * 1.5f, 1, w * 1.5f);
            //
            // ARPlaneMesh.material.mainTexture = texture;
        }


        void EnableUIafterShot()
        {
            //arPanel.gameObject.SetActive(true);
            cameraShotPanel.SetActive(true);

            // // show everything
            // industryObject.ShowObjects();
            // // then hide all unnecessary object
            // industryObject.HideObjects();

            ShowUI();

            uiState = UiState.AR;
            OnUiStateChange();


            // if (overRoofSystem.roofPlane.material.mainTexture)
            // {
            //     overRoofSystem.roofPlane.gameObject.SetActive(true);
            // }
        }


        public void SaveScreenShot()
        {
            HideUI(true);
            screenShotHandler.TakeScreenShotwithDelay(0f);
            Invoke(nameof(EnableUIafterShot), 0.025f);
        }
        
        private void SetArMode(bool newMode)
        {
            arController.SetArMode(newMode);
        }

        private void SetAchorImage(int index)
        {
            achorImage.sprite = anchorSprites[index];
        }

        private void OnUiStateChange()
        {
            switch (uiState)
            {
                case UiState.roof:
                    {
                        roofPanel.gameObject.SetActive(!roofPanel.gameObject.activeSelf);
                        
                        topPanel.gameObject.SetActive(roofPanel.gameObject.activeSelf);
                        
                        bottomPanel.gameObject.SetActive(true);
                        
                        anchorPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        overRoofSystem.HideImagePanel();

                        if (roofPanel.gameObject.activeSelf)
                        {
                            // roofButton.color = selectedColor;                       
                            lengthText.text = overRoofSystem.RoofLength.ToString();
                            widthText.text = overRoofSystem.RoofWidth.ToString();
                            headingText.text = "Please Enter Roof Dimensions";
                        }

                    }
                    break;

                case UiState.anchor:
                    {
                        anchorPanel.gameObject.SetActive(!anchorPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(anchorPanel.gameObject.activeSelf);
                        
                        bottomPanel.gameObject.SetActive(true);
                        
                        
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        
                        overRoofSystem.HideImagePanel();

                        if (anchorPanel.gameObject.activeSelf)
                        {
                            headingText.text = "Please Select Anchor Type";
                        }

                        SetAchorImage(anchorIndex);
                    }
                    break;

                case UiState.segment:
                    {
                        segmentPanel.gameObject.SetActive(!segmentPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(segmentPanel.gameObject.activeSelf);
                        
                        bottomPanel.gameObject.SetActive(true);

                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        
                        overRoofSystem.HideImagePanel();

                        if (segmentPanel.gameObject.activeSelf)
                        {
                            SetSegmentText();
                            SetSegmentUiVisibility();
                            cornersText.text = (overRoofSystem.corners ).ToString();
                            headingText.text = "Please Enter Segment details";

                            // segmentButton.color = selectedColor;
                        }

                    }
                    break;
                case UiState.intermidiate:
                    {
                        intermidatePanel.gameObject.SetActive(!intermidatePanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(intermidatePanel.gameObject.activeSelf);
                        
                        bottomPanel.gameObject.SetActive(true);
                        
                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        
                        overRoofSystem.HideImagePanel();

                        if(intermidatePanel.gameObject.activeSelf)
                        {
                            headingText.text = "Please Enter Intermediate details";
                            // intermidiateButton.color = selectedColor;
                        }                        
                    }
                    break;
                case UiState.cameraShot:
                    {
                        cameraShotPanel.gameObject.SetActive(true);
                        
                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);

                        bottomPanel.gameObject.SetActive(false);
                        topPanel.gameObject.SetActive(false);
                        
                        // change to AR view mode
                        if (cameraShotPanel.gameObject.activeSelf)
                        {
                            headingText.text = "Please take a picture";
                            // arButton.color = selectedColor;
                        }
                    }
                    break;
                case UiState.AR:
                    {
                        cameraShotPanel.gameObject.SetActive(true);
                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        
                        bottomPanel.gameObject.SetActive(false);
                        topPanel.gameObject.SetActive(false);
                        
                        headingText.text = "Please place the object";
                        // arButton.color = selectedColor;
                    }
                    break;
                default:
                    break;
            }
        }

        private void ResetButtonColor()
        {
            roofButton.color = Color.white;
            segmentButton.color = Color.white;
            anchorButton.color = Color.white;
            intermidiateButton.color = Color.white;
            arButton.color = Color.white;
        }

        public void IncreaseIntermidiate(int onSegment)
        {
            overRoofSystem.IncreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
        }
        public void DecreaseIntermidiate(int onSegment)
        {
            overRoofSystem.DecreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
        }

        void UpdateIntermidiateText()
        {
            for (int i = 0; i < intermidiateTexts.Length; i++)
            {
                intermidiateTexts[i].text = overRoofSystem.intermidateCounts[i].ToString();
            }
        }

        public override void ShowUI()
        {
            // show ui based on current uiState
            OnUiStateChange();
            topPanel.gameObject.SetActive(true);
            bottomPanel.gameObject.SetActive(true);
            uiRootPanel.gameObject.SetActive(true);
            
            if(InfoText != null)
                InfoText.SetActive(false);
            //gizmoHandler.EnableGizmos();
        }

        public override void HideUI(bool addInfotext)
        {
            base.HideUI(addInfotext);
            uiRootPanel.gameObject.SetActive(false);
            //gizmoHandler.DisableGizmos();
        }

        public void OpenImage()
        {
            overRoofSystem.LoadImageFromGallery();
        }
        
    }
}

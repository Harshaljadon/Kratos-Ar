using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using UnityEngine.SceneManagement;
//using UnityEngine.AddressableAssets;

namespace AR2
{

    public class OverRoofSystemUI : WireRopeSystemUI
    {
        #region Component
        [Header("Component Ref")]
        [SerializeField]
        GameLoader gameLoader;

        public OverRoofSystem overRoofSystem;
        public ARController arController;
        public GameObject cameraShotPanel;
        public IndustryObject industryObject;
        public ArPlaceObject arPlaceObject;
        public TouchControls arControls;
        public MobilemaxCamera cameraControls;
        public ScreenShotHandler screenShotHandler;

        public RectTransform uiRootPanel;
        public RectTransform roofPanel;
        public RectTransform anchorPanel;
        public RectTransform segmentPanel;
        public RectTransform intermidatePanel;
        public RectTransform shockAborberPanel;
        public RectTransform tensionerPanel;
        public RectTransform tensionalPanelCount;
        public RectTransform cableTerminationPanel;
        public RectTransform cableTerminationButtonPanel;
        public RectTransform segment1Panel;
        public RectTransform segment2Panel;
        public RectTransform segment3Panel;
        public RectTransform topPanel;
        public RectTransform bottomPanel;
        public RectTransform[] intermidiatePanels;

        public TMP_Text headingText;
        public TMP_Text lengthText;
        public TMP_Text widthText;
        public TMP_Text cornersText;
        public TMP_Text segment1Text;
        public TMP_Text segment2Text;
        public TMP_Text segment3Text;
        public TMP_Text anchorCode_Text;
        public TMP_Text[] intermidiateTexts;
        [SerializeField] TMP_Text shockAborberTypeText;
        [SerializeField] TMP_Text shockAborberTypeCountText;
        [SerializeField] TMP_Text tensionerTypeText;
        [SerializeField] TMP_Text tensionerTypeCountText;
        [SerializeField] TMP_Text cableTerminationpointA;
        [SerializeField] TMP_Text cableTerminationpointB;
        //public List<Sprite> anchorSprites = new List<Sprite>();

        public Image achorImage;
        public Image roofButton;
        public Image anchorButton;
        public Image segmentButton;
        public Image intermidiateButton;
        public Image arButton;

        private CanvasGroup canvasGroup;
        #endregion

        #region Feild
        [Header("Feild")]

        private UiState uiState;
        public UiState UiState
        {
            get
            {
                return uiState;
            }
        }
        public bool isArON = false;

        int shockAbsorberCount = 2,tensionerCount = 1, cableTerminationCountPointA, cableTerminationCountPointB = 2, tensinerTypeCount, anchorIndex;



        public int CableTerminationIndexA
        {
            get { return cableTerminationCountPointA; }
        }

        public int CableTerminationIndexB
        {
            get { return cableTerminationCountPointB; }
        }

        public int AnchorIndex
        {
            get { return anchorIndex; }
            
        }

        
        private Vector3 defaultScale = Vector3.one;
        private Vector3 arScale = Vector3.one * 0.25f;

   
        [SerializeField] List<string> CableTerminationName;
        [SerializeField] List<string> PostName;
        [SerializeField] List<string> TensionerName;
        #endregion

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

            //uiState = UiState.roof;
            //OnUiStateChange();

            arControls.isArMode = isArON;
            cameraControls.arMode = isArON;

            shockAborberTypeCountText.text = "Count : " + shockAbsorberCount.ToString();
            tensionerTypeCountText.text = "Count : " + tensionerCount.ToString();
            tensionerTypeText.text = "PN 4000(03)";

        }

        public override void SetCorners(int change)
        {
            gameLoader.currentCornerNumber += change;
            if (gameLoader.currentCornerNumber >= 2)
            {
                gameLoader.currentCornerNumber = 2;
            }
            else if(gameLoader.currentCornerNumber < 0)
            {

                gameLoader.currentCornerNumber = 0;
            }
            overRoofSystem.SetCorners(change);
            cornersText.text = "Corners : " + (overRoofSystem.corners).ToString(); 
            SetSegmentUiVisibility();
        }

        #region segment

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

        public override void IncSegmentLength(int SegNumber)
        {
            overRoofSystem.ApplySegmentChange(SegNumber, 1);
            SetSegmentText();
            switch (SegNumber)
            {
                case 0:
                    gameLoader.currentS1Length = overRoofSystem.segment1Length;
                    break;
                case 1:
                    gameLoader.currentS2Length = overRoofSystem.segment2Length;
                    break;
                case 2:
                    gameLoader.currentS3Length = overRoofSystem.segment3Length;
                    break;
   
            }
        }

        public override void DecSegmentLength(int SegNumber)
        {
            overRoofSystem.ApplySegmentChange(SegNumber, -1); // -1 reresent to reduce
            SetSegmentText();

            switch (SegNumber)
            {
                case 0:
                    gameLoader.currentS1Length = overRoofSystem.segment1Length;
                    break;
                case 1:
                    gameLoader.currentS2Length = overRoofSystem.segment2Length;
                    break;
                case 2:
                    gameLoader.currentS3Length = overRoofSystem.segment3Length;
                    break;

            }
        }

        void SetSegmentText()
        {
            segment1Text.text = "Segment1: " + overRoofSystem.segment1Length.ToString();
            segment2Text.text = "Segment2: " + overRoofSystem.segment2Length.ToString();
            segment3Text.text = "Segment3: " + overRoofSystem.segment3Length.ToString();
        }

        #endregion

        #region roof size

        // access via button in canvas which is segment button increate decrease length

        public override void AdjustRoofSize()
        {
            //Debug.Log("checking");
            overRoofSystem.UpdateBuildingroof();
        }
        #region old roof size adjust function
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
        #endregion

        #endregion

        #region Tensioner

        public override void IncDecTensioner(int vale)
        {
            // forward
            if (vale == 1)
            {
                if (tensionerCount < 2)
                {
                    tensionerCount++;

                }
            }
            // backward
            else if (vale == -1)
            {
                if (tensionerCount > 1)
                {
                    tensionerCount--;

                }
            }

            tensionerTypeCountText.text = "Count : " + tensionerCount.ToString();
            overRoofSystem.TensionerQuantityUpdate(tensionerCount);
        }


        public override void ChangeTensionerType(int vale)
        {
            if (vale == 0)
            {
                tensinerTypeCount++;
                if (tensinerTypeCount >1)
                {
                    tensinerTypeCount = 2;
                    cableTerminationButtonPanel.gameObject.SetActive(true);
                //tensionerTypeText.text = "PN 7000(05)";
                    cableTerminationCountPointA = 0;
                    cableTerminationCountPointB = 2;
                    tensionalPanelCount.gameObject.SetActive(false);
                }
                else
                {
                    tensionalPanelCount.gameObject.SetActive(true);
                    cableTerminationButtonPanel.gameObject.SetActive(false);

                //tensionerTypeText.text = "PN 4000(03) SL";
                }
                //overRoofSystem.TensionerTypeUpdate(0);
            }
            else if (vale == 1)
            {
                    tensionalPanelCount.gameObject.SetActive(true);
                cableTerminationButtonPanel.gameObject.SetActive(false);
                tensinerTypeCount--;
                if (tensinerTypeCount < 0)
                {
                    tensinerTypeCount = 0;

                }
                //tensionerTypeText.text = "PN 4000(03)";

            }
            tensionerTypeText.text = TensionerName[tensinerTypeCount];
            //Debug.Log(tensinerTypeCount);
                overRoofSystem.TensionerTypeUpdate(tensinerTypeCount);
        }
        #endregion

        #region Cable Termination
        public override void ChangeCableTerminationPointA(int ValuePassedPointA)
        {
            if (ValuePassedPointA ==0)
            {
                cableTerminationCountPointA++;
                if (cableTerminationCountPointA >1)
                {
                    cableTerminationCountPointA = 1;
                }
            }
            else
            {
                cableTerminationCountPointA--;
                if (cableTerminationCountPointA <0)
                {
                    cableTerminationCountPointA = 0;
                }

            }

            overRoofSystem.UpdateCableTermination((byte)cableTerminationCountPointA, 0);
            if (cableTerminationCountPointA == 0)
            {
            cableTerminationpointA.text =   CableTerminationName[cableTerminationCountPointA +3] + " at Extremity 1";

            }
            else
            {
            cableTerminationpointA.text =   CableTerminationName[cableTerminationCountPointA +2] + " at Extremity 1";

            }
        }

        public override void ChangeCableTerminationPointB(int ValuePassedPointB)
        {
            if (ValuePassedPointB == 0)
            {
                cableTerminationCountPointB++;
                if (cableTerminationCountPointB > 3)
                {
                    cableTerminationCountPointB = 3;
                }
            }
            else
            {
                cableTerminationCountPointB--;
                if (cableTerminationCountPointB < 0)
                {
                    cableTerminationCountPointB = 0;
                }

            }
            overRoofSystem.UpdateCableTermination((byte)cableTerminationCountPointB, 1);
            cableTerminationpointB.text = CableTerminationName[cableTerminationCountPointB] + " at Extremity 2 ";

        }
        #endregion

        #region ShockAbs

        public override void IncreaseDecreadeShockAbsorber(int value)
        {
            // forward
            if (value == 1)
            {
                //Debug.Log("enter");

                if (shockAbsorberCount < 2)
                {
                    shockAbsorberCount++;

                }
            }
            // backward
            else if(value == -1)
            {
                if (shockAbsorberCount > 0)
                {
                    shockAbsorberCount--;

                }
            }

            shockAborberTypeCountText.text = "Count : " + shockAbsorberCount.ToString();

            overRoofSystem.OnOffShoockAbsorber(shockAbsorberCount);
        }




        public override void ChangeShockAborberType(int vale)
        {
            
            if (vale == 0)
            {
                shockAborberTypeText.text = "Non Cover Shock Absorber";
                overRoofSystem.ShockAborberType(0);
            }
            else if (vale == 1)
            {
                shockAborberTypeText.text = "Cover Shock Absorber";
                overRoofSystem.ShockAborberType(1);

            }
        }

        #endregion

        #region Change Anchor
        /// <summary>
        /// change anchor type by passing value
        /// </summary>
        /// <param name="id">id = 1 is next and id = -1 is previous </param>
        public override void NextBackAnchor(int id)
        {
            base.NextBackAnchor(id);
            //switch (id)
            //{
            //    case 1:
            //        NextAnchor();
            //        break;
            //    case -1:
            //        PreviousAnchor();
            //        break;
            //}
        }

        protected override void NextAnchor()
        {
            gameLoader.currentAnchorIndex++;
            if (gameLoader.currentAnchorIndex >= gameLoader.anchorSizename -1 )
            {
                gameLoader.currentAnchorIndex = gameLoader.anchorSizename -1;
            }
            overRoofSystem.SetAnchor(true);
            anchorIndex = overRoofSystem.GetAchorIndex();
            SetAchorImage(anchorIndex);
        }

        protected override void PreviousAnchor()
        {
            gameLoader.currentAnchorIndex--;
            if (gameLoader.currentAnchorIndex < 0)
            {
                gameLoader.currentAnchorIndex = 0;
            }
            overRoofSystem.SetAnchor(false);
            anchorIndex = overRoofSystem.GetAchorIndex();
            SetAchorImage(anchorIndex);
        }
        #endregion

        #region intermediate
        public override void IncreaseIntermidiate(int onSegment)
        {
            overRoofSystem.IncreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
            switch (onSegment)
            {
                case 0:
                    gameLoader.currecntS1Inter = overRoofSystem.intermidateCounts[0];
                    break;
                case 1:
                    gameLoader.currecntS2Inter = overRoofSystem.intermidateCounts[1];
                    break;
                case 2:
                    gameLoader.currecntS3Inter = overRoofSystem.intermidateCounts[2];
                    break;
            }
        }
        public override void DecreaseIntermidiate(int onSegment)
        {
            overRoofSystem.DecreaseIntermidiate(onSegment);
            UpdateIntermidiateText();

            switch (onSegment)
            {
                case 0:
                    gameLoader.currecntS1Inter = overRoofSystem.intermidateCounts[0];
                    break;
                case 1:
                    gameLoader.currecntS2Inter = overRoofSystem.intermidateCounts[1];
                    break;
                case 2:
                    gameLoader.currecntS3Inter = overRoofSystem.intermidateCounts[2];
                    break;
            }
        }

        void UpdateIntermidiateText()
        {
            for (int i = 0; i < intermidiateTexts.Length; i++)
            {
                intermidiateTexts[i].text = $"Segment{i + 1} : " + overRoofSystem.intermidateCounts[i].ToString();
                //intermidiateTexts[i].text = $"Intermidiate{i+1} : " + overRoofSystem.intermidateCounts[i].ToString();
            }
        }
        #endregion
        public void OnBackButtonPressed()
        {
            // close ar session if On
            if (isArON)
            {
                isArON = false;
                arController.SetArMode(isArON);
            }

            // level choose scene
            SceneManager.LoadScene(1);
            //Addressables.LoadSceneAsync("Choose", LoadSceneMode.Single);

        }

        #region bottom button preesed
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

        public void OnShockAborberButtonPressed()
        {
            uiState = UiState.shockAbsorber;
            OnUiStateChange();
        }

        public void OnTensionerButtonPressed()
        {
            uiState = UiState.tensioner;
            OnUiStateChange();
        }

        public void OnCableTerminationPanelButtonePressed()
        {
            uiState = UiState.cableTermination;
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

                topPanel.gameObject.SetActive(true);

                industryObject.ShowObjects();
                industryObject.OnArDeactivate();
                
                
                arPlaceObject.b_ArMode = false;
                arPlaceObject.OnArDeActivate();
                
                uiState = UiState.roof;
                OnUiStateChange();
            }
           
        }
        #endregion

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
            anchorCode_Text.text = PostName[index];
            //achorImage.sprite = anchorSprites[index];
        }

        private void OnUiStateChange()
        {
            switch (uiState)
            {
                case UiState.roof:
                    {
                        //roofPanel.gameObject.SetActive(!roofPanel.gameObject.activeSelf);
                        
                        //topPanel.gameObject.SetActive(roofPanel.gameObject.activeSelf);
                        
                        bottomPanel.gameObject.SetActive(true);
                        
                        anchorPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        shockAborberPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);

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
                        //topPanel.gameObject.SetActive(anchorPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(true);


                        bottomPanel.gameObject.SetActive(true);
                        
                        
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        shockAborberPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);

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
                        //topPanel.gameObject.SetActive(segmentPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(true);


                        bottomPanel.gameObject.SetActive(true);

                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        shockAborberPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);


                        overRoofSystem.HideImagePanel();

                        if (segmentPanel.gameObject.activeSelf)
                        {
                            SetSegmentText();
                            SetSegmentUiVisibility();
                            cornersText.text = "Corners : " + (overRoofSystem.corners ).ToString();
                            headingText.text = "Please Enter Segment details";

                            // segmentButton.color = selectedColor;
                        }

                    }
                    break;
                case UiState.intermidiate:
                    {
                        intermidatePanel.gameObject.SetActive(!intermidatePanel.gameObject.activeSelf);
                        //topPanel.gameObject.SetActive(intermidatePanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(true);


                        bottomPanel.gameObject.SetActive(true);

                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        shockAborberPanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);



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
                        cableTerminationPanel.gameObject.SetActive(false);


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

                        topPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(true);
                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        
                        bottomPanel.gameObject.SetActive(false);
                        topPanel.gameObject.SetActive(false);
                        
                        headingText.text = "Please place the object";
                        shockAborberPanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);

                        // arButton.color = selectedColor;
                    }
                    break;
                case UiState.shockAbsorber:
                    {
                        shockAborberPanel.gameObject.SetActive(!shockAborberPanel.gameObject.activeSelf);
                        //topPanel.gameObject.SetActive(shockAborberPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(true);

                        bottomPanel.gameObject.SetActive(true);

                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);



                        overRoofSystem.HideImagePanel();

                        if (shockAborberPanel.gameObject.activeSelf)
                        {
                            headingText.text = "Please Enter ShockAbsorber details";
                            // intermidiateButton.color = selectedColor;
                        }
                    }
                    break;
                case UiState.tensioner:
                    {
                        tensionerPanel.gameObject.SetActive(!tensionerPanel.gameObject.activeSelf);
                        //topPanel.gameObject.SetActive(tensionerPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(true);

                        bottomPanel.gameObject.SetActive(true);

                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        shockAborberPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        cableTerminationPanel.gameObject.SetActive(false);


                        overRoofSystem.HideImagePanel();

                        if (tensionerPanel.gameObject.activeSelf)
                        {
                            headingText.text = "Please Enter Tensioner details";
                            // intermidiateButton.color = selectedColor;
                        }
                    }
                    break;
                case UiState.cableTermination:
                    {
                        cableTerminationPanel.gameObject.SetActive(!cableTerminationPanel.gameObject.activeInHierarchy);
                        //topPanel.gameObject.SetActive(cableTerminationPanel.gameObject.activeSelf);
                        topPanel.gameObject.SetActive(true);

                        bottomPanel.gameObject.SetActive(true);

                        anchorPanel.gameObject.SetActive(false);
                        roofPanel.gameObject.SetActive(false);
                        segmentPanel.gameObject.SetActive(false);
                        cameraShotPanel.gameObject.SetActive(false);
                        shockAborberPanel.gameObject.SetActive(false);
                        intermidatePanel.gameObject.SetActive(false);
                        tensionerPanel.gameObject.SetActive(false);
                        overRoofSystem.HideImagePanel();

                        if (cableTerminationPanel.gameObject.activeSelf)
                        {
                            headingText.text = "Please Enter Cable Termination details";
                        }

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
[System.Serializable]
public enum UiState
{
    roof,
    anchor,
    segment,
    intermidiate,
    cameraShot,
    AR,
    shockAbsorber,
    tensioner,
    cableTermination
}
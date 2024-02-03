using System;
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
    public class OverHeadSystemUI : WireRopeSystemUI
    {
        public event Action<int> changeIntermediateBasePlateEvent;

        #region enum
        public enum UiState
        {
            anchor,
            intermidiate,
            shockAbsorber,
            tensioner,
            cableTermination,
            vehiclePanel,
            position,
            AR,
            wireSize,
            carriageBody,
            none
        }
        [Header("states")]
        [SerializeField]
        protected UiState uiState = UiState.anchor;
        [SerializeField]
        protected UiState previousUiState = UiState.none;
        public RectTransform[] allPanels;
        #endregion

        #region Component
        [Space(2)]
        [Header("Component")]
        public OverHeadSystem OverHeadSystem;
        public ArPlaceObject arPlaceObject;
        public ARController arController;
        public IndustryObject industryObject;
        public MobilemaxCamera cameraControls;
        public ScreenShotHandler screenShotHandler;
        private CanvasGroup canvasGroup;
        public VisualizeSelectionComponent visualizeSelectionComponent;
        #endregion

        #region Object ref
        [Space(2)]
        [Header("Object ref")]

        public TMP_Text[] intermidiateTexts;
        public TMP_Text headingText;

        [SerializeField] TMP_Text shockAborberTypeText;
        [SerializeField] TMP_Text shockAborberTypeCountText;
        [SerializeField] TMP_Text tensionerTypeText;
        [SerializeField] TMP_Text tensionerTypeCountText;
        [SerializeField] TMP_Text anchorNameText;
        [SerializeField] TMP_Text cableTerminationpointA;
        [SerializeField] TMP_Text cableTerminationpointB;
        [SerializeField] TMP_Text basePlateNameText;
        [SerializeField] TMP_Text carriageBodyNameText;
        public RectTransform intermidatePanel, rootUiPanel, topPanel, controlsPanel, cableTerminationButtonPanel, tensionalPanelCount, vehiclePanel, carriageBodyButton;

        public GameObject arObject, cameraShotPanel, intermediateBrakeiElemtpanelRef;

        public Image vehicleImageHolder;
        public List<Sprite> vehicleSprites;
        #endregion

        #region Feild
        [Space(2)]
        [Header("Feild")]
        private bool isIntermidiateSelected = false;
        public bool isArON = false;

        private Vector3 defaultScale = Vector3.one;
        private Vector3 arScale = Vector3.one * 0.25f;
        private Vector3 arObjectDefaultPosition, arObjectDefaultRotation, arObjectDefaultscale;

        private int vehicleIndex = 0, shockAbsorberCount = 2, tensionerCount = 1, tensinerTypeCount, cableTerminationCountPointA, cableTerminationCountPointB, currentCarriageBodyindex;
        [SerializeField] int anchorIndex;

        [SerializeField] int nameIndex;

        public int AnchorIndex { get => anchorIndex; set { anchorIndex = value; UpdateAnchorName(); } }

        [SerializeField] List<string> cableTerminationName;
        [SerializeField] List<string> anchorNameList;
        [SerializeField] List<string> basePlateNameList;
        [SerializeField] List<string> carriageBodyNameList;
        //public int AnchorIndex { get => anchorIndex; set { anchorIndex = value; ChangesInUiWhenAnchorCHange(); } }
        #endregion

        protected virtual void ChangesInUiWhenAnchorCHange()
        {

        }

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
            //SetIntermidiateVisiblity(isIntermidiateSelected);
            //UpdateIntermidiateText();
            cameraShotPanel.SetActive(false);
            tensionerTypeCountText.text = "Count : " + tensionerCount.ToString();
            //tensionerTypeText.text = "Swageless";

            // ARPlaneMesh.gameObject.SetActive(false);
            // ARPlaneMesh.material.mainTexture = null;

            //if (vehiclePanel != null)
            //{
            //    vehiclePanel.gameObject.SetActive(false);
            //}

            //intermidatePanel.gameObject.SetActive(false);

            HideAllPanel();

            arObjectDefaultPosition = arObject.transform.position;
            arObjectDefaultRotation = arObject.transform.rotation.eulerAngles;
            arObjectDefaultscale = arObject.transform.localScale;
            
            cameraControls.arMode = isArON;
        }



        public override void UiUpdatePanel()
        {
            if (uiState != previousUiState)
            {
            HideAllPanel();

            }

            if (uiState != UiState.AR)
            {
                var id = (int)uiState;
                var toggleOnOff =  allPanels[id].gameObject.activeInHierarchy ? false : true; //uiState == previousUiState &&
                topPanel.gameObject.SetActive(true);
                allPanels[id].gameObject.SetActive(toggleOnOff);


            }


            switch (uiState)
            {
                case UiState.anchor:
                    {
                        headingText.text = "Please Enter Anchor details";

                        break;
                    }
                case UiState.intermidiate:
                    {

                        headingText.text = "Please Enter Intermediate details";
                        break;
                    }
                case UiState.shockAbsorber:
                    {
                       
                        headingText.text = "Please Enter Shock Absorber details";
                        break;
                    }
                case UiState.tensioner:
                    {
                        
                        headingText.text = "Please Enter Tensioner details";
                        break;
                    }
                case UiState.cableTermination:
                    {
                       
                        headingText.text = "Please Enter Cable Termination details";
                        break;
                    }
                case UiState.vehiclePanel:
                    {
                      
                        headingText.text = "Please Enter Vehicle details";
                        break;
                    }
                case UiState.AR:
                    {
                        headingText.text = "Welcome to Over the Roof Module";
                        topPanel.gameObject.SetActive(false);

                        break;
                    }

                case UiState.carriageBody:
                    {
                        headingText.text = "Please Enter carriage body details";
                        break;
                    }
                 
            }

            previousUiState = uiState;
        }




        #region OnPanelRegion

        public void OnAnchorPanel()
        {
            uiState = UiState.anchor;
            
            UiUpdatePanel();
        }

        public virtual void OnIntermediatePanel()
        {
            uiState = UiState.intermidiate;
            UiUpdatePanel();
        }

        public void OnShockAbsorberPanel()
        {
            uiState = UiState.shockAbsorber;
            UiUpdatePanel();
        }

        public void OnTensionerPanel()
        {
            uiState = UiState.tensioner;
            UiUpdatePanel();
        }

        public void OnCableTerminationPanel()
        {
            uiState = UiState.cableTermination;
            UiUpdatePanel();
        }

        public void OnVehicleSelectPanel()
        {
            uiState = UiState.vehiclePanel;
            UiUpdatePanel();
        }

        public void OnArPanel()
        {
            uiState = UiState.AR;
            UiUpdatePanel();
        }

        public void OnCarriageBodyPanel()
        {
            uiState = UiState.carriageBody;
            UiUpdatePanel();

        }

        #endregion

        #region UiAnchor

        public override void NextBackAnchor(int vale)
        {
            base.NextBackAnchor(vale);
            //switch (vale)
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
            OverHeadSystem.SetAnchor(true);
            AnchorIndex = OverHeadSystem.GetAchorIndex();
            UpDateBasePlate();
            //UpdateAnchorName();
        }

        protected override void PreviousAnchor()
        {
            OverHeadSystem.SetAnchor(false);
            AnchorIndex = OverHeadSystem.GetAchorIndex();
            UpDateBasePlate();
            //UpdateAnchorName();
        }

        void UpdateAnchorName()
        {
            anchorNameText.text = anchorNameList[AnchorIndex];
        }


        void UpDateBasePlate()
        {
            if ((AnchorIndex == anchorNameList.Count - 1 || AnchorIndex == anchorNameList.Count - 5) && OverHeadSystem.IntermidateCounts[0] > 0)
            {
                OnIntermediateElementPanel(true);
            }
            else
            {

                OnIntermediateElementPanel(false);
            }
        }
        #endregion

        #region Intermediate update

        public override void IncreaseIntermidiate(int onSegment)
        {
            OverHeadSystem.IncreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
            UpDateBasePlate();

        }
        public override void DecreaseIntermidiate(int onSegment)
        {
            OverHeadSystem.DecreaseIntermidiate(onSegment);
            UpdateIntermidiateText();
            UpDateBasePlate();

        }

        void UpdateIntermidiateText()
        {
            for (int i = 0; i < intermidiateTexts.Length; i++)
            {
                intermidiateTexts[i].text = $"Seg.{i+1}: " + OverHeadSystem.IntermidateCounts[i].ToString();
            }
            if (carriageBodyButton!= null)
            {
                UpdateCarriageBodyUi();
            }
        }

        void UpdateCarriageBodyUi()
        {
            if (OverHeadSystem.IntermidateCounts[0] > 0)
            {
                carriageBodyButton.gameObject.SetActive(false);

                OverHeadSystem.SetCarriageBody(0);
                carriageBodyNameText.text = carriageBodyNameList[0];
            }
            else
            {
                carriageBodyButton.gameObject.SetActive(true);

                OverHeadSystem.SetCarriageBody(1);
                carriageBodyNameText.text = carriageBodyNameList[currentCarriageBodyindex];
            }
        }

        public override void ChangeIntermediateBasePlate(int vale)
        {
            visualizeSelectionComponent.ShowComponent(vale, LifeLineComponent.basePlate);
            basePlateNameText.text = basePlateNameList[vale];
            changeIntermediateBasePlateEvent?.Invoke(vale);
        }

        void OnIntermediateElementPanel(bool value)
        {
            if (intermediateBrakeiElemtpanelRef != null)
            {

            intermediateBrakeiElemtpanelRef.SetActive(value);
            }
        }

        #endregion

        #region Shock Absorber

        public override void IncreaseDecreadeShockAbsorber(int value)
        {
            // forward
            if (value == 1)
            {
                if (shockAbsorberCount < 2)
                {
                    shockAbsorberCount++;

                }
            }
            // backward
            else if (value == -1)
            {
                if (shockAbsorberCount > 0)
                {
                    shockAbsorberCount--;

                }
            }

            shockAborberTypeCountText.text ="Count : " + shockAbsorberCount.ToString();

            OverHeadSystem.OnOffShoockAbsorber(shockAbsorberCount);
        }




        public override void ChangeShockAborberType(int vale)
        {

            if (vale == 0)
            {
                shockAborberTypeText.text = "PN4000MU"; //Shock Absorber
                OverHeadSystem.ShockAborberType(0);
            }
            else if (vale == 1)
            {
                shockAborberTypeText.text = "PN4000MULS";//Long Span Shock Absorber
                OverHeadSystem.ShockAborberType(1);

            }
        }

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
            OverHeadSystem.TensionerQuantityUpdate(tensionerCount);
        }

        public override void ChangeTensionerType(int vale)
        {
            if (vale == 0)
            {
                tensinerTypeCount++;
                if (tensinerTypeCount > 1)
                {
                    tensinerTypeCount = 2;
                    cableTerminationButtonPanel.gameObject.SetActive(true);
                    //tensionerTypeText.text = "W/o termination";
                    tensionerTypeText.text = "PN 7000(05)";
                    cableTerminationCountPointA = 0;
                    cableTerminationCountPointB = 2;
                    tensionalPanelCount.gameObject.SetActive(false);
                }
                else
                {
                    tensionalPanelCount.gameObject.SetActive(true);
                    cableTerminationButtonPanel.gameObject.SetActive(false);

                    tensionerTypeText.text = "PN 4000(03)SL";
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
                tensionerTypeText.text = "PN 4000(03)";

            }
            OverHeadSystem.TensionerTypeUpdate(tensinerTypeCount);
        }


        #endregion

        #region Cable Termination

        public override void ChangeCableTerminationPointA(int ValuePassedPointA)
        {
            if (ValuePassedPointA == 0)
            {
                cableTerminationCountPointA++;
                if (cableTerminationCountPointA >= 1)
                {
                    cableTerminationCountPointA = 1;
                    nameIndex = cableTerminationName.Count - 1;
                }
            }
            else
            {
                cableTerminationCountPointA--;
                if (cableTerminationCountPointA <= 0)
                {
                    cableTerminationCountPointA = 0;
                    nameIndex = cableTerminationName.Count - 2;
                }

            }

            cableTerminationpointA.text = cableTerminationName[nameIndex] +" At Extrimity 1";

            OverHeadSystem.UpdateCableTermination((byte)cableTerminationCountPointA, 0);
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
            cableTerminationpointB.text = cableTerminationName[cableTerminationCountPointB] + " At Extrimity 2";
            OverHeadSystem.UpdateCableTermination((byte)cableTerminationCountPointB, 1);

        }

        #endregion

        #region Vehicle update

        /// <summary>
        /// Change vehicel model
        /// </summary>
        /// <param name="id"> -1 for previous model and 1 for next model</param>
        public override void NextBackVehicel(int id)
        {
            switch (id)
            {
                case 1:
                    NextVehicle();
                    break;
                case -1:
                    PreviousVehicle();
                    break;
                default:
                    break;
            }
        }

        void NextVehicle()
        {
            vehicleIndex++;

            if (vehicleIndex >= vehicleSprites.Count)
            {
                vehicleIndex = vehicleSprites.Count - 1;
            }

            OverHeadSystem.SetVehicle(vehicleIndex);
            vehicleImageHolder.sprite = vehicleSprites[vehicleIndex];

            //anchorIndex = overRoofSystem.GetAchorIndex();
            //SetAchorImage(anchorIndex);
        }

        void PreviousVehicle()
        {
            vehicleIndex--;
            if (vehicleIndex < vehicleSprites.Count)
            {
                vehicleIndex = 0;
            }

            OverHeadSystem.SetVehicle(vehicleIndex);
            vehicleImageHolder.sprite = vehicleSprites[vehicleIndex];
        }
        #endregion

        #region carriageBody

        /// <summary>
        /// Change carriage body
        /// </summary>
        /// <param name="value">1 for next and -1 for back</param>
        public override void NextbackCarriageBody(int value)
        {
            var size = carriageBodyNameList.Count;
            NextBackValu nextBackValu = new NextBackValu(value, size, currentCarriageBodyindex);
            currentCarriageBodyindex = nextBackValu.GetIndex();
            OverHeadSystem.SetCarriageBody(currentCarriageBodyindex);
            carriageBodyNameText.text = carriageBodyNameList[currentCarriageBodyindex];
        }

        #endregion


        #region commented

        //public void ToggleVehiclePanel()
        //{
        //    vehiclePanel.gameObject.SetActive(!vehiclePanel.gameObject.activeSelf);
        //    topPanel.gameObject.SetActive(vehiclePanel.gameObject.activeSelf);

        //    if (vehiclePanel.gameObject.activeSelf)
        //    {
        //        intermidatePanel.gameObject.SetActive(false);
        //        headingText.text = "Please select Vehicle Type";
        //    }

        //    isIntermidiateSelected = false;
        //}


        //public void ToggleIntermidiate()
        //{
        //    isIntermidiateSelected = !isIntermidiateSelected;
        //    SetIntermidiateVisiblity(isIntermidiateSelected);

        //    if(isIntermidiateSelected && vehiclePanel != null)
        //    {
        //        vehiclePanel.gameObject.SetActive(false);
        //    }
        //}

        //private void SetIntermidiateVisiblity(bool visibility)
        //{
        //    intermidatePanel.gameObject.SetActive(visibility);

        //    if (intermidatePanel.gameObject.activeSelf)
        //    {
        //        headingText.text = "Please Enter Intermediate details";
        //    }

        //    if (vehiclePanel != null)
        //    {
        //        vehiclePanel.gameObject.SetActive(false);
        //    }

        //    topPanel.gameObject.SetActive(visibility);
        //}
        #endregion

        public virtual void TakeARShot()
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
            #region commented
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
            #endregion
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



        public virtual void OnBackPressed()
        {
            // close ar session if On
            if (isArON)
            {
                OnArPressed();
            }

            // level choose scene
            SceneManager.LoadScene(1);
            //Addressables.LoadSceneAsync("Choose", LoadSceneMode.Single);

        }


        public virtual void OnArPressed()
        {
            OnArPanel();
            isArON = !isArON;

            cameraControls.arMode = isArON;

            FindObjectOfType<TouchControls>().isArMode = isArON;

            SetArMode(isArON);

            //if (vehiclePanel)
            //    vehiclePanel.gameObject.SetActive(false);

            //intermidatePanel.gameObject.SetActive(false);
            //topPanel.gameObject.SetActive(false);
            //isIntermidiateSelected = false;

            if (isArON)
            {
                // arButton.color = selectedColor;
                cameraShotPanel.SetActive(true);
                industryObject.HideAllObjects();

                industryObject.transform.root.localScale = arScale;

                //topPanel.gameObject.SetActive(false);
                controlsPanel.gameObject.SetActive(false);
                //intermidatePanel.gameObject.SetActive(false);

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
                 topPanel.gameObject.SetActive(true);
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
            //SetIntermidiateVisiblity(false);
        }

        public virtual void HideAllPanel()
        {
            var sizePanemax = allPanels.Length;

            for (int i = 0; i < sizePanemax; i++)
            {
                allPanels[i].gameObject.SetActive(false);
            }
        }


        
        public virtual void SaveScreenShot()
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



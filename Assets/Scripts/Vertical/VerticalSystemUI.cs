using System.Collections;
using UnityEngine;
using TMPro;
using DG.Tweening;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
//using UnityEngine.AddressableAssets;

namespace AR2
{
    public class VerticalSystemUI : UiManagerBase
    {
        [Header("componentRef")]
        public VerticalSystem verticalSystem;
        public ArPlaceObject arPlaceObject;
        public ARController arController;
        public MobilemaxCamera cameraControls;
        public ScreenShotHandler screenShotHandler;
        public IndustryObject industryObject;
        private CanvasGroup canvasGroup;
        [SerializeField] TowerAluRailManager towerAluRailManager;

        [Space(2)]
        [Header("feilds")]
        #region vector
        private Vector3 arObjectDefaultPosition;
        private Vector3 arObjectDefaultRotation;
        private Vector3 arObjectDefaultscale;
        private Vector3 defaultScale = Vector3.one;
        private Vector3 arScale = Vector3.one * 0.25f;
        #endregion
        #region bool
        private bool isIntermidiateSelected = false;
        private bool isArON = false;
        [SerializeField] bool buildingIncDecResponse;
        #endregion

        [SerializeField] List<string> cableTerminationName;
        [SerializeField] List<string> tensionerName;
        [SerializeField] List<string> anchorNameList;
        [SerializeField] List<string> aluNameList;
        [SerializeField] List<string> lifeLineTypeNameList;
        [SerializeField] List<string> ropeGrabNameList;
        [SerializeField] List<string> bracketNameList;

        private int vehicleIndex = 0;
        int tensinerTypeCount, shockAbsorberCount;
        int cableTerminationCountPointA, cableTerminationCountPointB;
        [SerializeField] int nameIndex;

        [SerializeField]
        UIVerticleState uiState;
        UIVerticleState previousUiState;
        LifeLineType lifeLineType;
        private LifeLineType currentLifeLine;

        enum UIVerticleState
        {
            lifeLine,
            anchor,
            tensioner,
            cableTermination,
            shockAbsorber,
            intermidiate,
            aluRailCatagory,
            ropeGrab,
            AR,
            cameraShot,
            none
        }

        [Space(2)]
        [Header("ObjectRef")]
        #region GameObject
        public GameObject arObject;
        public GameObject cameraShotPanel;
        #endregion
        #region rectTransform
        [SerializeField] RectTransform[] allPanels;

        public RectTransform rootUiPanel;
        public RectTransform intermidatePanel;
        public RectTransform topPanel;
        public RectTransform controlsPanel;
        public RectTransform cableTerminationButtonPanel;

        #endregion
        #region Text
        public TMP_Text headingText, shockAborberTypeText;
        public TMP_Text[] intermidiateTexts;
        //[SerializeField]
        //TMP_Text tensionerTypeText;
        [SerializeField] TMP_Text cableTerminationpointA;
        [SerializeField] TMP_Text cableTerminationpointB;
        [SerializeField] TMP_Text lifeLine_text;
        [SerializeField] TMP_Text AluRailLine_text;
        [SerializeField] TMP_Text tensioner_text;
        [SerializeField] TMP_Text ropeGrab_text;
        [SerializeField] TMP_Text bracket_A_text;
        [SerializeField] TMP_Text bracket_B_text;
        [SerializeField] TMP_Text intermediate_text;
        #endregion

        [Header("Data")]
        [SerializeField] LifeLineTypeUiButtonPanelGroup lifeLineTypeUiButtonPanelGroup;

        private void Awake()
        {
            canvasGroup = GetComponent<CanvasGroup>();
            if(InfoText != null)
                InfoText.SetActive(false);

            defaultScale = industryObject.transform.root.localScale;
        }

        private void Start()
        {
            towerAluRailManager = FindFirstObjectByType<TowerAluRailManager>();

            // arController.transform.position = nonArTranforms.position;
            // arController.transform.rotation = nonArTranforms.rotation;

            arController.SetNonArLocation();
            
            canvasGroup.alpha = 0;

            canvasGroup.DOFade(1, 0.5f);
            
            // headingText.text = "Please Enter Intermediate details";
            //SetIntermidiateVisiblity(isIntermidiateSelected);
            UpdateIntermidiateText();
            cameraShotPanel.SetActive(false);
            
            intermidatePanel.gameObject.SetActive(false);

            arObjectDefaultPosition = arObject.transform.position;
            arObjectDefaultRotation = arObject.transform.rotation.eulerAngles;
            arObjectDefaultscale = arObject.transform.localScale;
            
            cameraControls.arMode = isArON;
        }

        void DisableAllPanel()
        {
            var size = allPanels.Length;
            for (int i = 0; i < size; i++)
            {
                allPanels[i].gameObject.SetActive(false);
            }
        }


        #region button pressed on panel

        #region wire rope panels
        public void OnLifeLineTypeAndBuildingSizePanel()
        {
            uiState = UIVerticleState.lifeLine;
            lifeLineType = LifeLineType.lifeLineSystem;
            UpdateUiPanel();
        }

        public void OnAnchorPanel()
        {
            uiState = UIVerticleState.anchor;
            UpdateUiPanel();

        }
        public void OnIntermediatePanel()
        {
            uiState = UIVerticleState.intermidiate;
            UpdateUiPanel();
        }

        public void OnTensionerPanel()
        {
            uiState = UIVerticleState.tensioner;
            UpdateUiPanel();
        }

        public void OnCableTerminationPanel()
        {
            uiState = UIVerticleState.cableTermination;
            UpdateUiPanel();
        }

        public void OnShockAbsorberPanel()
        {
            uiState = UIVerticleState.shockAbsorber;
            UpdateUiPanel();
        }
        public void OnRopeGrapPanel()
        {
            uiState = UIVerticleState.ropeGrab;
            //uiState
            UpdateUiPanel();
        }
        #endregion


        #region alurail panels
        public void OnAluRailCatagoryPanel()
        {
            uiState = UIVerticleState.aluRailCatagory;
            UpdateUiPanel();
        }
        #endregion



        public void OnArPanel()
        {
            uiState = UIVerticleState.AR;
            UpdateUiPanel();
        }

        void UpdateUiPanel()
        {

            if (uiState != previousUiState)
            {
                DisableAllPanel();

            }

            if (uiState != UIVerticleState.AR)
            {
                var id = (int)uiState;
                var toggleOnOff = allPanels[id].gameObject.activeInHierarchy ? false : true; //uiState == previousUiState &&
                //topPanel.gameObject.SetActive(true);
                allPanels[id].gameObject.SetActive(toggleOnOff);


            }

            previousUiState = uiState;
 
        }

        #endregion


        #region Button Appear

        void DeactivateAllButton()
        {
            var size = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo.Length;
            for (int i = 0; i < size; i++)
            {
                var size2 = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionButton.Length;
                for (int j = 0; j < size2; j++)
                {
                    lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionButton[j].gameObject.SetActive(false);
                }
            }
        }

        void ActivateButtonGroup()
        {
            var size = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo.Length;
            for (int i = 0; i < size; i++)
            {
                if (lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].groupName == currentLifeLine)
                {
                    var size2 = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionButton.Length;

                    for (int j = 0; j < size2; j++)
                    {
                        lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionButton[j].gameObject.SetActive(true);
                    }
                }
            }
        }

        void UpdateUiButtonGroup()
        {
            DeactivateAllButton();
            ActivateButtonGroup();
        }

        #endregion



        /// <summary>
        /// life line type like wire rope or alu rail
        /// </summary>
        /// <param name="value">0 for wire rope and 1 for alu rail</param>
        public void NextBackSelectLifeLineType(int value)
        {
            switch (value)
            {
                case 0:
                    OnWireRopeButtonePressed();
                    lifeLine_text.text = lifeLineTypeNameList[0];
                    if (towerAluRailManager != null)
                    {
                        towerAluRailManager.ToggleTowerAluRail(false);
                    }
                    break;
                case 1:
                    OnAluRaiButtonPressed();
                    lifeLine_text.text = lifeLineTypeNameList[1];
                    if (towerAluRailManager != null)
                    {
                        towerAluRailManager.ToggleTowerAluRail(true);
                    }
                    break;
            }
            UpdateUiButtonGroup();
            verticalSystem.UpdateBuildingLifeLineType(currentLifeLine);
        }
        /// <summary>
        /// select alu rail type ladder or non ladder
        /// </summary>
        /// <param name="value">1 for next,-1 for back</param>
        public void NextBackAdjustAluRailLifeLineType(int value)
        {
            var aluRailNum = aluNameList.Count;
            currentAluRailtypeId = GetIndexId(value, aluRailNum, currentAluRailtypeId);
            AluRailLine_text.text = aluNameList[currentAluRailtypeId];
            verticalSystem.UpdateAluRailLifeLineType(currentAluRailtypeId);

        }
        /// <summary>
        /// increade decrease building height
        /// </summary>
        /// <param name="value">1 or -1</param>
        public void IncDecBuildingHeight(int value)
        {
            if (buildingIncDecResponse)
            {
                buildingIncDecResponse = false;
            verticalSystem.UpdateSegmentLength(value);
                Invoke(nameof(Reableresponse), .2f);
            }
        }

        void Reableresponse()
        {
            buildingIncDecResponse = true;
        }

        int currentAnchorId, currentRopeGrabeId, currentBracketId_A, currentBracketId_B, currentAluRailtypeId;


        public void NextbaxkAnchor(int value)
        {
            var val = value == 0;
            verticalSystem.SetAnchor(val);
        }
        // 1 for next, -1 for back
        public void NextBackRopeGrabe(int value)
        {
            var ropeGrabNumber = ropeGrabNameList.Count;
            currentRopeGrabeId = GetIndexId(value, ropeGrabNumber, currentRopeGrabeId);
            verticalSystem.SetRopeGrab(currentRopeGrabeId);
            ropeGrab_text.text = ropeGrabNameList[currentRopeGrabeId];
        }

        public void NextBackIntermediatetype(int value)
        {

        }

        #region bracket
        // 1 for next, -1 for back
        public void NextBackBracketTypeA(int value)
        {
            var bracketNum = bracketNameList.Count - 1;
            currentBracketId_A = GetIndexId(value, bracketNum, currentBracketId_A);
            verticalSystem.UpdateBracket_AB(currentBracketId_A,0);
            bracket_A_text.text = "Bottom: " + bracketNameList[currentBracketId_A];
        }

        // 1 for next, -1 for back
        public void NextBackBracketTypeB(int value)
        {
            var bracketNum = bracketNameList.Count;
            currentBracketId_B = GetIndexId(value, bracketNum, currentBracketId_B);
            verticalSystem.UpdateBracket_AB(currentBracketId_B,1);
            bracket_B_text.text = "Top: " + bracketNameList[currentBracketId_B];
        }
        #endregion

        #region utilityRef
        int GetIndexId(int value, int size, int currenTypeid)
        {
            NextBackValu nextBackValu = new NextBackValu(value, size, currenTypeid);
            return nextBackValu.GetIndex();
        }

        #endregion

        #region Tensioner
        public void ChangeTensionerType(int vale)
        {
            if (vale == 0)
            {
                tensinerTypeCount++;
                if (tensinerTypeCount >1)
                {
                    tensinerTypeCount = 2;
                    cableTerminationCountPointA = 0;
                    cableTerminationCountPointB = 0;
                    cableTerminationButtonPanel.gameObject.SetActive(true);
                    //tensionalPanelCount.gameObject.SetActive(false);
                }
                else
                {
                    //tensionalPanelCount.gameObject.SetActive(true);
                    cableTerminationButtonPanel.gameObject.SetActive(false);

                    //tensionerTypeText.text = "Swageless";
                }
                //overRoofSystem.TensionerTypeUpdate(0);
            }
            else if (vale == 1)
            {
                //    tensionalPanelCount.gameObject.SetActive(true);
                cableTerminationButtonPanel.gameObject.SetActive(false);
                tensinerTypeCount--;
                if (tensinerTypeCount < 0)
                {
                    tensinerTypeCount = 0;

                }
                //tensionerTypeText.text = "Swage";

            }
            tensioner_text.text = tensionerName[tensinerTypeCount];
                verticalSystem.TensionerTypeUpdate(tensinerTypeCount);
        }
        #endregion

        #region Cable Termination

        public void ChangeCableTerminationPointA(int ValuePassedPointA)
        {
            if (ValuePassedPointA == 0)
            {
                cableTerminationCountPointA++;
                if (cableTerminationCountPointA > 2)
                {
                    cableTerminationCountPointA = 2;
                }
            }
            else
            {
                cableTerminationCountPointA--;
                if (cableTerminationCountPointA <= 0)
                {
                    cableTerminationCountPointA = 0;
                    //nameIndex = cableTerminationName.Count - 2;
                    //nameIndex = 0;
                }

            }

            switch (cableTerminationCountPointA)
            {
                case 0:
                    nameIndex = 2;
                    break;
                case 1:
                    nameIndex = 3;
                    break;
                case 2:
                    nameIndex = 4;
                    break;
                default:
                    break;
            }

            //nameIndex = cableTerminationCountPointA;
            cableTerminationpointA.text = cableTerminationName[nameIndex];

            verticalSystem.UpdateCableTermination((byte)cableTerminationCountPointA, 0);
        }

        // top
        public void ChangeCableTerminationPointB(int ValuePassedPointB)
        {
            if (ValuePassedPointB == 0)
            {
                cableTerminationCountPointB++;
                if (cableTerminationCountPointB > 3)
                {
                    cableTerminationCountPointB = 3;
            //verticalSystem.UpdateCableTermination(3, 1);
            //        return;
                }
            }
            else
            {
                cableTerminationCountPointB--;
                if (cableTerminationCountPointB < 0)
                {
                    cableTerminationCountPointB = 0;
            //verticalSystem.UpdateCableTermination((byte)0, 1);
            //        return;
                }

            }
            cableTerminationpointB.text = cableTerminationName[cableTerminationCountPointB];
            verticalSystem.UpdateCableTermination((byte)cableTerminationCountPointB, 1);

        }

        #endregion


        public void ChangeShockAborberType(int vale)
        {

            if (vale == 0)
            {
                shockAborberTypeText.text = "PN4000MU"; //Shock Absorber
                verticalSystem.ShockAborberType(0);
            }
            else if (vale == 1)
            {
                shockAborberTypeText.text = "PN4000MULS";//Long Span Shock Absorber
                verticalSystem.ShockAborberType(1);

            }
        }

        #region intermediate

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
                intermidiateTexts[0].text = "Seg1 : " + verticalSystem.intermidateCounts[0].ToString();
            //for (int i = 0; i < intermidiateTexts.Length; i++)
            //{
            //    intermidiateTexts[i].text = verticalSystem.intermediateIndex.ToString();
            //}
        }


        #endregion


        //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        #region Ui input to change component
        // appear button for alu rail
        void OnAluRaiButtonPressed()
        {
            currentLifeLine = LifeLineType.Alu_Rail;
            cableTerminationButtonPanel.gameObject.SetActive(false);
        }

        // apear button for wire rope
        void OnWireRopeButtonePressed()
        {
            currentLifeLine = LifeLineType.Wire_Rope;

        }


        #endregion

        #region ArScreenShot
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
        #endregion


        public void OnBackPressed()
        {
            // close ar session if On
            if(isArON)
            {
                OnArPressed();
            }

            // level choose scene
            UnityEngine.SceneManagement.SceneManager.LoadScene(1);
            //Addressables.LoadSceneAsync("Choose", LoadSceneMode.Single);

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
            verticalSystem.ArModeBuildingUpdate(isArON);
            if (isArON)
            {
                DisableAllPanel();
                DeactivateAllButton();
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
                topPanel.gameObject.SetActive(true);
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
            DisableAllPanel();
            base.HideUI(addInfoText);
            rootUiPanel.gameObject.SetActive(false);
            //SetIntermidiateVisiblity(false);
        }
        
        public void SaveScreenShot()
        {
            HideUI(true);
            
            screenShotHandler.TakeScreenShotwithDelay(0f);
            Invoke(nameof(EnableUIafterShot), 0.025f);
            
        }
    }
}
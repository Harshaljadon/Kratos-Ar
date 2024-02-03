using AR2;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
//using System.Linq;

public class CeillingWallFloorSystemUI : OverHeadSystemUI
{

    [Header("Enums")]
    [SerializeField]
    LifeLineType currentLifeLine;
    [SerializeField]
    LifeLineType previousLifeLine = LifeLineType.none;
    [SerializeField]
    InstallPosition installPos;
    public LifeLineType CurrentLifeLine { get { return currentLifeLine; } }
    public InstallPosition InstallPosition { get { return installPos; } }
    //[SerializeField]
    //WireRopeComponentSelect wierRopeComponent;

    [Space(2)]
    [Header("Component ref")]
    [SerializeField]
    CeillingWallFloorSystem m_CeillingWallFloorSystem;
    [SerializeField]

    private CanvasGroup ceillingWallCanvasGroup;
    [SerializeField]
    LifeLineTypeUiButtonPanelGroup lifeLineTypeUiButtonPanelGroup;
    [SerializeField]
    NextBackValu m_NextBackValu;

    [Space(2)]
    [Header("Object ref")]
    [SerializeField]
    RectTransform[] panelRef;
    [SerializeField]
    RectTransform[] wallAnchorPanelElementoff;
    [SerializeField]
    RectTransform[] intermediatePanelElementoff;
    [SerializeField]
    List<GameObject> sizePanelElementoff;

    [SerializeField]
    TMP_Text lifeLineSystemText;
    [SerializeField]
    TMP_Text installPlaceText;
    [SerializeField]
    TMP_Text installPlaceText2;
    [SerializeField]
    TMP_Text postSize;
    [SerializeField]
    TMP_Text segment1;
    [SerializeField]
    TMP_Text segment2;
    [SerializeField]
    TMP_Text segment3;
    [SerializeField]
    TMP_Text corner;
    [SerializeField]
    TMP_Text hudeUnHideText;
    [SerializeField]
    Button lifeLineButton;
    [SerializeField]
    Button hideUnHideUi;

    [Space(2)]
    [Header("Feild")]
    [SerializeField]
    bool isArONCellingWall = false;
    [SerializeField]
    Vector3 arObjectDefaultPositionCeilingWall;
    [SerializeField]
    Vector3 arObjectDefaultRotationCeilingWall;
    [SerializeField]
    Vector3 arObjectDefaultscaleCeilingWall;
    [SerializeField]
    Vector3 cellingWallDefaultScale = Vector3.one;
    [SerializeField]
    Vector3 ceillingWallArScale = Vector3.one * 0.25f;
    [SerializeField]
    int positionInstall;
    [SerializeField]
    int currentPostHeightId;
    [SerializeField]
    int currentCornerId;
    [SerializeField]
    bool waitIncDecSegRes = true;

    [SerializeField]
    bool toggleUi;


    public int CurrentCorner
    {
        get { return currentCornerId; }
    }


    //void OffAllPanel()
    //{
    //    var max = panelRef.Length;
    //    for (int i = 0; i < max; i++)
    //    {
    //        panelRef[i].gameObject.SetActive(false);
    //    }
    //    var max1 = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo.Length;
    //    for (int i = 0; i < max1; i++)
    //    {
    //        var groupPaneSize = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionbuttonPanel.Length;
    //        for (int j = 0; j < groupPaneSize; j++)
    //        {
    //            lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionbuttonPanel[j].SetActive(false);
    //        }
    //    }
    //}

    private void Awake()
    {
        ceillingWallCanvasGroup = GetComponent<CanvasGroup>();
        cellingWallDefaultScale = industryObject.transform.root.localScale;
        //OffAllPanel();
        HideAllPanel();
        UpdateUiElement();
        toggleUi = true;
    }
    private void Start()
    {
        arController.SetNonArLocation();

        ceillingWallCanvasGroup.alpha = 0;

        ceillingWallCanvasGroup.DOFade(1, 0.5f);

        cameraShotPanel.SetActive(false);

        arObjectDefaultPositionCeilingWall = arObject.transform.position;
        arObjectDefaultRotationCeilingWall = arObject.transform.rotation.eulerAngles;
        arObjectDefaultscaleCeilingWall = arObject.transform.localScale;

        lifeLineButton.onClick.AddListener(OnLifeLineButtonPressed);
        hideUnHideUi.onClick.AddListener(ToggleUi);
        lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[0].actionButton[0].onClick.AddListener(OnAluPanel);
        //cameraControls.arMode = isArON;

    }

    public void ToggleUi()
    {
        toggleUi = !toggleUi;
        hudeUnHideText.text = toggleUi ? "Hide" : "UnHide";
        rootUiPanel.gameObject.SetActive(toggleUi);
    }


    // life line Panel on and when buttob pressed then off all panel
    void OnLifeLineButtonPressed()
    {
        lifeLineSystemText.text = "Select";
        //previousUiState = UiState.none;
        uiState = UiState.vehiclePanel;
        currentLifeLine = LifeLineType.lifeLineSystem;
        if (uiState != previousUiState)
        {
            HideAllPanel();

        }

        if (uiState != UiState.AR)
        {
            var id = (int)uiState;
            var toggleOnOff = allPanels[id].gameObject.activeInHierarchy ? false : true; //uiState == previousUiState &&
            topPanel.gameObject.SetActive(true);
            allPanels[id].gameObject.SetActive(toggleOnOff);


        }
        HeadingAndButtonUpdate();
        //if (currentLifeLine != previousLifeLine)
        //{
        //    OffAllPanel();

        //}
    }

    // appear button for alu rail
    void OnAluRaiButtonPressed()
    {
        currentLifeLine = LifeLineType.Alu_Rail;
        //UiUpdatePanel();
        //headingText.text = "Please Enter detail Alu Rail";

        HeadingAndButtonUpdate();
    }

    // apear button for wire rope
    void OnWireRopeButtonePressed()
    {
        currentLifeLine = LifeLineType.Wire_Rope;
        //UiUpdatePanel();
        //headingText.text = "Please Enter detail Wire Rope";

        HeadingAndButtonUpdate();
    }

    public void OnAluPanel()
    {
        uiState = UiState.position;
        UiUpdatePanel();
        //var toggleValue = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[0].actionbuttonPanel[0].activeInHierarchy ? false : true;
        //lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[0].actionbuttonPanel[0].SetActive(toggleValue);
        //currentLifeLine = LifeLineType.Alu_Rail;

    }

    public void OnWireSizePane()
    {
        uiState = UiState.wireSize;
        UiUpdatePanel();
    }

    public void IncDecCorner(int id)
    {
        var size = sizePanelElementoff.Count;
        NextBackValu nextBackValu_gameObjCollection = new NextBackValu(sizePanelElementoff);
        nextBackValu_gameObjCollection.OffGameObjects();
        NextBackValu nextBackValu = new NextBackValu(id, size+1, currentCornerId);
        currentCornerId = nextBackValu.GetIndex();

        switch (currentCornerId)
        {
            case 1:
                sizePanelElementoff[0].SetActive(true);

                break;
            case 2:
                sizePanelElementoff[0].SetActive(true);
                sizePanelElementoff[1].SetActive(true);
                break;
            default:
                break;
        }
        corner.text ="CONER " + currentCornerId.ToString();
        m_CeillingWallFloorSystem.UpdateBuildingNumber(currentCornerId);
    }

    public void IncreseSegment(int id)
    {
        if (waitIncDecSegRes)
        {
            waitIncDecSegRes = false;
        m_CeillingWallFloorSystem.UpdateSegmentLength(id, 1);
        UpdateSegmentLengthText(id);
            waitIncDecSegRes = true;
        }
    }

    public void DecreaseSegment(int id)
    {
        if (waitIncDecSegRes)
        {
            waitIncDecSegRes = false;
        m_CeillingWallFloorSystem.UpdateSegmentLength(id, -1);
        UpdateSegmentLengthText(id);

            waitIncDecSegRes = true;
        }
    }

    void UpdateSegmentLengthText(int id)
    {
        switch (id)
        {
            case 0:
                segment1.text = "Seg1 " + m_CeillingWallFloorSystem.segment1Length.ToString();
                break;
            case 1:
                segment2.text = "Seg2 " + m_CeillingWallFloorSystem.segment2Length.ToString();
                break;
            case 2:
                segment3.text = "Seg3 " + m_CeillingWallFloorSystem.segment3Length.ToString();
                break;

        }
    }

    void HeadingAndButtonUpdate()
    {



        switch (currentLifeLine)
        {
            case LifeLineType.lifeLineSystem:
                headingText.text = "Please select Life line Type";
                //var id = (int)currentLifeLine;
                //var toggleOnOff = panelRef[0].gameObject.activeInHierarchy ? false : true; // && currentLifeLine == previousLifeLine
                //panelRef[0].gameObject.SetActive(toggleOnOff);
                break;

            case LifeLineType.Alu_Rail:
                headingText.text = "Please Enter detail Alu Rail";


                break;
            case LifeLineType.Wire_Rope:
                headingText.text = "Please Enter detail Wire Rope";


                break;
        }
        previousLifeLine = currentLifeLine;
        previousUiState = uiState;
        OnButtonGroup();
    }

    public override void UiUpdatePanel()
    {
        //if (currentLifeLine != previousLifeLine)
        //{
        //    OffAllPanel();

        //}
        UpdateUiElement();
        switch (uiState)
        {
            case UiState.wireSize:
                headingText.text = "Please Enter size details";
                break;
        }
        //base.UiUpdatePanel();

        if (uiState != previousUiState)
        {
            HideAllPanel();

        }

        if (uiState != UiState.AR)
        {
            var id = (int)uiState;
            var toggleOnOff = allPanels[id].gameObject.activeInHierarchy ? false : true; //uiState == previousUiState &&
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

    //void UiStatePanelUpdate()
    //{




    //}

    /// <summary>
    /// Select life line type
    /// </summary>
    /// <param name="id">1 for wire rop,-1 for alu rail</param>
    public void NextBackLifeLineType(int id)
    {
        if (id == 1)
        {
            m_CeillingWallFloorSystem.currentlifeLineComponent = LifeLineComponent.wireRopeLifeLineType;
            OnWireRopeButtonePressed();
            lifeLineSystemText.text = "Wire Rope";
        }
        else
        {
            m_CeillingWallFloorSystem.currentlifeLineComponent = LifeLineComponent.aluRailLifeLineType;
            OnAluRaiButtonPressed();
            lifeLineSystemText.text = "Alu Rail";
        }

        m_CeillingWallFloorSystem.SetFallSafetTypeGroup(id);
    }

    void OnButtonGroup()
    {
        OffAllButtonPanelGroup();
        var typeId = (int)currentLifeLine;
        //Debug.Log(typeId);
        switch (currentLifeLine)
        {
            case LifeLineType.Alu_Rail:
                var size = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[typeId].actionButton.Length;
                for (int i = 0; i < size; i++)
                {
                    lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[typeId].actionButton[i].gameObject.SetActive(true);

                }

                break;
            case LifeLineType.Wire_Rope:
                var size2 = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[typeId].actionButton.Length;
                //Debug.Log(size2);
                for (int i = 0; i < size2 - 1; i++)
                {
                    lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[typeId].actionButton[i].gameObject.SetActive(true);
                }
                UpdateUiElement();



                break;
        }
        lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[0].actionButton[0].gameObject.SetActive(true);

    }

    public override void OnIntermediatePanel()
    {
        base.OnIntermediatePanel();

        var max = intermediatePanelElementoff.Length;
        for (int i = 0; i < max; i++)
        {
            intermediatePanelElementoff[i].gameObject.SetActive(false);
        }

        for (int i = 0; i <= currentCornerId; i++)
        {
            //Debug.Log("check");
            intermediatePanelElementoff[i].gameObject.SetActive(true);

        }
    }

    protected override void ChangesInUiWhenAnchorCHange()
    {
        base.ChangesInUiWhenAnchorCHange();
        UpdateUiElement();
    }


    void UpdateUiElement()
    {
        //var max = wallAnchorPanelElementoff.Length;
        
        //for (int i = 0; i < max; i++)
        //{
        //    wallAnchorPanelElementoff[i].gameObject.SetActive(true);
        //}

        //switch (installPos, AnchorIndex)
        //{
        //    case ( InstallPosition.ceiling, 0):
        //    case(InstallPosition.floor,0):
        //        wallAnchorPanelElementoff[0].gameObject.SetActive(false);
        ////Debug.Log("checking");
        //        break;
        //    case (InstallPosition.wall, 0):
        //        {
        //            for (int i = 0; i < max; i++)
        //            {
        //                wallAnchorPanelElementoff[i].gameObject.SetActive(false);
        //            }
        //        }
        //        break;
        //    case (InstallPosition.ceiling, 1):
        //    case (InstallPosition.floor, 1):
        //        for (int i = 0; i < max; i++)
        //        {
        //            wallAnchorPanelElementoff[i].gameObject.SetActive(true);
        //        }
        //        break;

        //}
    }

    void OffAllButtonPanelGroup()
    {
        
        var max = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo.Length;

        for (int i = 0; i < max; i++)
        {
            var subMax = lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionButton.Length;
            for (int j = 0; j < subMax; j++)
            {
                lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionButton[j].gameObject.SetActive(false);
                //lifeLineTypeUiButtonPanelGroup.ButtonPanelCombo[i].actionbuttonPanel[j].gameObject.SetActive(false);
            }
        }
    }

    [SerializeField] bool uniqueCornerAssign = true;
    /// <summary>
    /// Will use in life line type panel to change install position
    /// </summary>
    /// <param name="id">1 for increase or -1 for decrease</param>
    public void NextBackInstallation(int id)
    {


        m_NextBackValu = new NextBackValu(id, 3, positionInstall);
        positionInstall = m_NextBackValu.GetIndex();
        m_CeillingWallFloorSystem.ChangeVariationSetup(positionInstall, LifeLineType.Alu_Rail);
        m_CeillingWallFloorSystem.ChangeVariationSetup(positionInstall, LifeLineType.Wire_Rope);

        switch (positionInstall)
        {
            case 0:
                installPlaceText.text = "FLOOR";
                installPlaceText2.text = "FLOOR";
                installPos = InstallPosition.floor;
                if (uniqueCornerAssign)
                {
                    m_CeillingWallFloorSystem.SetDefaultCorner();
                    uniqueCornerAssign = false;
                }
                break;
            case 1:
     
                installPlaceText.text = "WALL";
                installPlaceText2.text = "WALL";
                installPos = InstallPosition.wall;
                AnchorIndex = 0;
                m_CeillingWallFloorSystem.SetUniqeAnchor();
                UpdateUiElement();
                uniqueCornerAssign = true;
                break;
            case 2:
                installPlaceText.text = "CEILING";
                installPlaceText2.text = "CEILING";
                installPos = InstallPosition.ceiling;
                if (uniqueCornerAssign)
                {
                    m_CeillingWallFloorSystem.SetDefaultCorner();
                    uniqueCornerAssign = false;
                }
                break;
            default:
                break;
        }
        //OnButtonGroup();

    }

    public void NextBackPostHeight(int id)
    {

        m_NextBackValu = new NextBackValu(id, 3, currentPostHeightId);
        currentPostHeightId = m_NextBackValu.GetIndex();

        switch (currentPostHeightId)
        {
            case 0:
                postSize.text = "300";
                break;
            case 1:
                postSize.text = "500";
                break;
            case 2:
                postSize.text = "750";
                break;
            default:
                break;
        }
        m_CeillingWallFloorSystem.AdjustPostHeight(currentPostHeightId);
        UpdateUiElement();
    }

    public void NextBackWireRope(int id)
    {
        m_CeillingWallFloorSystem.ChangeVariationSetup(id, currentLifeLine);

    }

    public override void TakeARShot()
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

    public override void ShowUI()
    {
        //
        rootUiPanel.gameObject.SetActive(true);
        //if (InfoText != null)
        //    InfoText.SetActive(false);
    }

    public override void HideUI(bool addInfoText)
    {
        //base.HideUI(addInfoText);
        rootUiPanel.gameObject.SetActive(false);
        //SetIntermidiateVisiblity(false);
    }

    public override void SaveScreenShot()
    {
        HideUI(true);

        screenShotHandler.TakeScreenShotwithDelay(0f);
        Invoke(nameof(EnableUIafterShot), 0.025f);

    }


    public override void OnBackPressed()
    {
        // close ar session if On
        if (isArONCellingWall)
        {
            OnArPressed();
        }

        // level choose scene
        UnityEngine.SceneManagement.SceneManager.LoadScene(1);
        //Addressables.LoadSceneAsync("Choose", LoadSceneMode.Single);

    }



    public override void OnArPressed()
    {
        isArONCellingWall = !isArONCellingWall;

        cameraControls.arMode = isArONCellingWall;

        FindObjectOfType<TouchControls>().isArMode = isArONCellingWall;

        SetArMode(isArONCellingWall);

        //intermidatePanel.gameObject.SetActive(false);
        //isIntermidiateSelected = false;
        m_CeillingWallFloorSystem.ArModeBuildingUpdate(isArONCellingWall);

        if (isArONCellingWall)
        {
        topPanel.gameObject.SetActive(false);
            cameraShotPanel.SetActive(true);
            industryObject.HideAllObjects();

            industryObject.transform.root.localScale = ceillingWallArScale;

            topPanel.gameObject.SetActive(false);
            controlsPanel.gameObject.SetActive(false);
            //intermidatePanel.gameObject.SetActive(false);

            arPlaceObject.b_ArMode = true;
            arPlaceObject.OnArActivate();
            HideAllPanel();
            //OffAllPanel();
        }
        else
        {
        topPanel.gameObject.SetActive(true);
            cameraShotPanel.SetActive(false);
            industryObject.ShowObjects();
            arPlaceObject.b_ArMode = false;
            arPlaceObject.OnArDeActivate();

            industryObject.transform.root.localScale = cellingWallDefaultScale;
            controlsPanel.gameObject.SetActive(true);

            arObject.transform.position = arObjectDefaultPositionCeilingWall;
            arObject.transform.rotation = Quaternion.Euler(arObjectDefaultRotationCeilingWall);
            arObject.transform.localScale = arObjectDefaultscaleCeilingWall;

        }

    }

    public override void HideAllPanel()
    {
        base.HideAllPanel();
    }

    private void SetArMode(bool newMode)
    {
        arController.SetArMode(newMode);
    }




}


[System.Serializable]
public enum LifeLineType
{
    Alu_Rail, Wire_Rope, lifeLineSystem, none
}

//[System.Serializable]
//public enum WireRopeComponentSelect
//{
//    anchor, shockAb,tensiner,cableTb,none

//}

[System.Serializable]
public enum InstallPosition { floor, wall, ceiling, none }

[System.Serializable]
public class LifeLineTypeUiButtonPanelGroup
{
    public ButtonPanelCombo[] ButtonPanelCombo;

}

[System.Serializable]
public class ButtonPanelCombo
{
    public LifeLineType groupName;
    //public GameObject groupheadPanel;
    public Button[] actionButton;
    //public GameObject[] actionbuttonPanel;

}
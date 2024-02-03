using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;

public class CeillingWallFloorSystem : OverHeadSystem
{
    [Header("component ref")]
    [Space(2)]
    public List<Anchor> circularAnchors = new List<Anchor>();
    [SerializeField] CeillingWallFloorSystemUI ceillingWallFloorSystemUI;
    [SerializeField] BuildingManager buildingmanager;
    [SerializeField] GameObject[] noCorner_Orientation;
    [SerializeField] GameObject[] Corner_Orientation;
    [SerializeField]
    AluRailHolder[] aluRailHolder;
    [Header("Data")]
    [SerializeField]
    BuildingfallProtectionGroup[] buildingfallProtectionGroup;
    [SerializeField]
    NextBackValu m_NextBackValu ;

    [Header("Feild")]
    //[SerializeField]
    [SerializeField]
    SegmentType segmentType;
    [SerializeField] int RoofLength;
    [SerializeField] int RoofWidth;
    int lifeLinetypeId, aluRailId, wireRopeId; //debugId
    public int segment1Length { get; private set; } = 0;
    public int segment2Length { get; private set; } = 0;
    public int segment3Length { get; private set; } = 0;


    int segment1Limit = 0;
    int segment2Limit = 0;
    float changeScale = 0.0f;
    [SerializeField]
    int minValue = 5;
    int maxValue = 20;

    int currentPostHeightId;

    private void Awake()
    {
        ceillingWallFloorSystemUI = FindObjectOfType<CeillingWallFloorSystemUI>();
        segment1Length = segment2Length = segment3Length = minValue;
    }

    protected override void Start()
    {
        //base.Start();
        SetSegmentLimits();
        SetupLifeLine();
        RefreashIntermidiatePos();
        UpDateLineRendere();
        intermidiatePrefabsLength = intermidiatePrefabs.Count;
    }

    protected override void Update()
    {
        //base.Update();
        if (ceillingWallFloorSystemUI.isArON)
        {
            RefreashIntermidiatePos();
            SetSegmentLimits();
        }
            SetupLifeLine();
        UpDateLineRendere();

        if (ceillingWallFloorSystemUI.CurrentCorner == 1)
        {
            foreach (var cornerO in Corner_Orientation)
            {
                cornerO.SetActive(true);
            }

            foreach (var item in noCorner_Orientation)
            {
                item.SetActive(false);
            }
        }
        else
        {
            foreach (var cornerO in Corner_Orientation)
            {
                cornerO.SetActive(false);
            }

            foreach (var item in noCorner_Orientation)
            {
                item.SetActive(true);
            }
        }

    }

    public void SetSegmentLimits()
    {
        segment1Limit = RoofLength * 2;
        segment2Limit = RoofWidth * 2;
    }
     Vector3 startPosRef, endPosRef, startPosRef1, endPosRef1;
    public override void SetupLifeLine()
    {
        //base.SetupLifeLine();
        switch (ceillingWallFloorSystemUI.CurrentCorner)
        {
            case 0:
                {
                    segmentLines[0].gameObject.SetActive(true);
                    segmentLines[1].gameObject.SetActive(false);
                    segmentLines[2].gameObject.SetActive(false);


                    segmentLines[0].startPos.position = pointAnchors[0].endPoint.position;
                    segmentLines[0].endPos.position = pointAnchors[1].startPoint.position;
                }
                break;
            case 1:
                {
                    segmentLines[0].gameObject.SetActive(true);
                    segmentLines[1].gameObject.SetActive(true);
                    segmentLines[2].gameObject.SetActive(false);

                    segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
                    //segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;
                    switch (ceillingWallFloorSystemUI.InstallPosition)
                    {
                        case InstallPosition.floor:
                            startPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            endPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            break;
                        case InstallPosition.wall:
                            startPosRef = circularAnchors[0].uniqueCorner.GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            endPosRef = circularAnchors[0].uniqueCorner.GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            break;
                        case InstallPosition.ceiling:
                            startPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            endPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            break;
                    }
                    //segmentLines[0].endPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                    segmentLines[0].endPos.position = startPosRef;

                    //segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                    //segmentLines[1].startPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                    segmentLines[1].startPos.position = endPosRef;
                    segmentLines[1].endPos.position = pointAnchors[1].endPoint.position;
                }
                break;
            case 2:
                {

                    segmentLines[0].gameObject.SetActive(true);
                    segmentLines[1].gameObject.SetActive(true);
                    segmentLines[2].gameObject.SetActive(true);

                    segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
                    //segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;
                    switch (ceillingWallFloorSystemUI.InstallPosition)
                    {
                        case InstallPosition.floor:
                            startPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            endPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                            startPosRef1 = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            endPosRef1 = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            break;
                        case InstallPosition.wall:
                            startPosRef = circularAnchors[0].uniqueCorner.GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            endPosRef = circularAnchors[0].uniqueCorner.GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                            startPosRef1 = circularAnchors[1].uniqueCorner.GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            endPosRef1 = circularAnchors[1].uniqueCorner.GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            break;
                        case InstallPosition.ceiling:
                            startPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            endPosRef = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;

                            startPosRef1 = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                            endPosRef1 = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                            break;
                    }
                    //segmentLines[0].endPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                    segmentLines[0].endPos.position = startPosRef;

                    //segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                    //segmentLines[1].startPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                    segmentLines[1].startPos.position = endPosRef;
                    //segmentLines[1].endPos.position = circularAnchors[1].startPoint.position;
                    //segmentLines[1].endPos.position = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;
                    segmentLines[1].endPos.position = startPosRef1;

                    //segmentLines[2].startPos.position = circularAnchors[1].endPoint.position;
                    //segmentLines[2].startPos.position = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                    segmentLines[2].startPos.position = endPosRef1;
                    segmentLines[2].endPos.position = pointAnchors[1].endPoint.position;
                }
                break;
            default:
                break;
        }

    }

    public void UpDateLineRendere()
    {
        foreach (var lifeLine in segmentLines)
        {
            lifeLine.UpdateLifeline();
        }
    }

    private void RefreashIntermidiatePos()
    {
        var max = segmentLines.Count;
        if (ceillingWallFloorSystemUI.isArON)
        {
            for (int i = 0; i < max; i++)
            {
                segmentLines[i].ArModeIntermediatePos(IntermidateCounts[i]);
            }
            return;
        }
        for (int i = 0; i < max; i++)
        {
            //segmentLines[i].UpdateIntermidates(IntermidateCounts[i], pointAnchors[0].tensionerStartPos.gameObject, segmentType, currentPostHeightId, pointAnchors[1].tensionerStartPos.gameObject);
            segmentLines[i].UpdateIntermidates(IntermidateCounts[i], pointAnchors[0].variationMeshes[0].gameObject, segmentType, currentPostHeightId, pointAnchors[1].variationMeshes[0].gameObject);
            //segmentLines[i].ReUpdateLieRenderePoint();
        }

    }

    public void UpdateBuildingNumber(int cornerNumber)
    {
            buildingmanager.OnOffBuilding(cornerNumber > 0);
        buildingmanager.ExecuteAluRailCHanges(cornerNumber, ceillingWallFloorSystemUI.InstallPosition, ceillingWallFloorSystemUI.CurrentLifeLine);
        UpdateWireRopeCorner(cornerNumber);
    }

    void UpdateWireRopeCorner(int corners)
    {
        var size = circularAnchors.Count;
        for (int i = 0; i < size; i++)
        {
            circularAnchors[i].gameObject.SetActive(false);
        }

        switch (corners)
        {
            case 1:
            circularAnchors[0].gameObject.SetActive(true);
                break;
            case 2:
            circularAnchors[0].gameObject.SetActive(true);
            circularAnchors[1].gameObject.SetActive(true);
                break;
            default:
                break;
        }
    }

    public void UpdateSegmentLength(int segmentId, int incDecValue)
    {
        switch (segmentId)
        {
            case 0:
                segment1Length += incDecValue;
                if (segment1Length < 5)
                {
                    segment1Length = 5;
                    return;
                }
                buildingmanager.ManageBuildingSize(0, incDecValue , 0);
                //

                break;
            case 1:
                segment2Length += incDecValue;
                if (segment2Length < 5)
                {
                    segment2Length = 5;
                    return;
                }

                buildingmanager.ManageBuildingSize(1, incDecValue , 0);
                //UpdateIntermediate();

                break;

            case 2:
                segment3Length += incDecValue;
                if (segment3Length < 5)
                {
                    segment3Length = 5;
                    return;
                }

                buildingmanager.ManageBuildingSize(1, 0, incDecValue);
                //UpdateIntermediate();

                break;
        }
        //buildingmanager.ExecuteAluRailCHanges(ceillingWallFloorSystemUI.CurrentCorner, ceillingWallFloorSystemUI.InstallPosition, ceillingWallFloorSystemUI.CurrentLifeLine);
        Invoke(nameof(UpdateIntermediate), .2f);
        //UpdateIntermediate();

    }

    public override void IncreaseIntermidiate(int segmentNum)
    {
        //base.IncreaseIntermidiate(segmentNum);
        int _segLenth;

        if (segmentNum == 0)
        {
            _segLenth = segment1Length;
        }
        else if (segmentNum == 1)
        {
            _segLenth = segment2Length;
        }
        else
        {
            _segLenth = segment3Length;
        }

        int maxIntermidiateCount = (int)((_segLenth - MinIntermidateGap));


        // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 

        if (IntermidateCounts[segmentNum] < maxIntermidiateCount)
        {
            //Debug.Log("passed");
            IntermidateCounts[segmentNum] = IntermidateCounts[segmentNum] + 1;
            segmentType = (SegmentType)segmentNum;
            //segmentLines[segmentNum].UpdateIntermidates(IntermidateCounts[segmentNum], pointAnchors[0].tensionerStartPos.gameObject, segmentType, currentPostHeightId, pointAnchors[1].tensionerStartPos.gameObject);
            segmentLines[segmentNum].UpdateIntermidates(IntermidateCounts[segmentNum], pointAnchors[0].variationMeshes[0].gameObject, segmentType, currentPostHeightId, pointAnchors[1].variationMeshes[0].gameObject);
            //segmentLines[segmentNum].ReUpdateLieRenderePoint();

        }

    }

    public override void UpdateIntermediate()
    {
        //base.UpdateIntermediate();
        var max = segmentLines.Count;
        for (int i = 0; i < max; i++)
        {
            //intermidateCounts[i] = intermidateCounts[i] + 1;

            // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 
            segmentType = (SegmentType)i;
            //segmentLines[i].UpdateIntermidates(IntermidateCounts[i], pointAnchors[0].tensionerStartPos.gameObject, segmentType, currentPostHeightId, pointAnchors[1].tensionerStartPos.gameObject);
            segmentLines[i].UpdateIntermidates(IntermidateCounts[i], pointAnchors[0].variationMeshes[0].gameObject, segmentType, currentPostHeightId, pointAnchors[1].variationMeshes[0].gameObject);
            //segmentLines[i].ReUpdateLieRenderePoint();
        }

    }



    public override void DecreaseIntermidiate(int segmentNum)
    {
        //base.DecreaseIntermidiate(segmentNum);
        int _segLenth;

        if (IntermidateCounts[segmentNum] > 0)
        {
            IntermidateCounts[segmentNum] = IntermidateCounts[segmentNum] - 1;

            if (segmentNum == 0)
            {
                _segLenth = segment1Length;
            }
            else if (segmentNum == 1)
            {
                _segLenth = segment2Length;
            }
            else
            {
                _segLenth = segment3Length;
            }

            segmentType = (SegmentType)segmentNum;

            //segmentLines[segmentNum].UpdateIntermidates(IntermidateCounts[segmentNum], pointAnchors[0].tensionerStartPos.gameObject, segmentType, currentPostHeightId, pointAnchors[1].tensionerStartPos.gameObject);
            segmentLines[segmentNum].UpdateIntermidates(IntermidateCounts[segmentNum], pointAnchors[0].variationMeshes[0].gameObject, segmentType, currentPostHeightId, pointAnchors[1].variationMeshes[0].gameObject);
            //segmentLines[segmentNum].ReUpdateLieRenderePoint();
        }

    }

    public int AluRailId
    {
        get { return aluRailId; } 

    }

    public int WireRopeId
    { get { return wireRopeId; }  }

    public void SetFallSafetTypeGroup(int idPass)
    {

        buildingmanager.ExecuteAluRailCHanges(ceillingWallFloorSystemUI.CurrentCorner, ceillingWallFloorSystemUI.InstallPosition, ceillingWallFloorSystemUI.CurrentLifeLine);
        OffAllGroup();
        var numberGroup = buildingfallProtectionGroup.Length;
        m_NextBackValu = new NextBackValu(idPass, numberGroup, lifeLinetypeId);
        lifeLinetypeId = m_NextBackValu.GetIndex();


        OnGroupHolder(lifeLinetypeId);
    }


    public void AdjustPostHeight(int id)
    {
        foreach (var item in pointAnchors)
        {
            item.SetHeightPosit(id);

        }
        currentPostHeightId = id;
        UpdateIntermediate();
    }

    public void ChangeVariationSetup(int idPass, LifeLineType typeId)
    {
        //buildingmanager.ExecuteAluRailCHanges(ceillingWallFloorSystemUI.CurrentCorner, ceillingWallFloorSystemUI.InstallPosition, ceillingWallFloorSystemUI.CurrentLifeLine);

        int groupId = (int)typeId;
        var groupObjRef = buildingfallProtectionGroup[groupId].groupObject;
        OffSubGroup(groupObjRef);
        //var numberSubGroup = buildingfallProtectionGroup[groupId].groupObject.Count;
        //debugId = idPass;
        switch (typeId)
        {
            case LifeLineType.Alu_Rail:
                //m_NextBackValu = new NextBackValu(idPass, numberSubGroup, aluRailId);
                aluRailId = idPass;
            buildingmanager.ExecuteAluRailCHanges(ceillingWallFloorSystemUI.CurrentCorner, (InstallPosition)idPass, ceillingWallFloorSystemUI.CurrentLifeLine);
                //buildingfallProtectionGroup[groupId].groupObject[aluRailId].SetActive(true);
                break;
            case LifeLineType.Wire_Rope:
                //m_NextBackValu = new NextBackValu(idPass, numberSubGroup, wireRopeId);
                wireRopeId = idPass;
                buildingfallProtectionGroup[groupId].groupObject[wireRopeId].SetActive(true);

                break;
            default:
                break;
        }
        Invoke(nameof(UpdateIntermediate),.1f);
    }

    public override void SetAnchor(bool next)
    {
        base.SetAnchor(next);

        foreach (var anchor in circularAnchors)
        {
            anchor.SetVariation(next);
        }
    }

    public void ArModeBuildingUpdate (bool arValue)
    {
        foreach (var item in aluRailHolder)
        {
            if (item.gameObject.activeInHierarchy)
            {
                item.BuildingArmodeProcess(arValue);

            }
        }

    }

    void OffSubGroup(List<GameObject> objectGames)
    {
        var max = objectGames.Count;
        for (int i = 0; i < max; i++)
        {
            objectGames[i].SetActive(false);
        }
    }

    void OffAllGroup()
    {
        var max = buildingfallProtectionGroup.Length;
        for (int i = 0; i < max; i++)
        {
            buildingfallProtectionGroup[i].headGroupobj.SetActive(false);
        }
    }

    void OnGroupHolder(int id)
    {
        buildingfallProtectionGroup[id].headGroupobj.SetActive(true);

    }

    public void SetUniqeAnchor()
    {
        foreach (var item in pointAnchors)
        {
            item.OnUniqeVariation(0);
        }

        foreach (var item in circularAnchors)
        {
            item.OnUniqueCornerVariation(0); 
        }

        foreach (var segmentLine in segmentLines)
        {

            segmentLine.UpdateIntermidiatePrefab(intermidiatePrefabs[pointAnchors[0].currentVariation]);
            //if (intermidiatePrefabsLength > pointAnchors[0].currentVariation)
            //{
            //}
        }
        UpdateIntermediate();
    }

    public void SetDefaultCorner()
    {
        foreach (var item in circularAnchors)
        {
            item.OndefalultCorner();
        }
    }
}

#region systemSerial
[System.Serializable]
public enum SegmentType { seg1,seg2,seg3}

[System.Serializable]
public class BuildingfallProtectionGroup
{
    public string GroupName;
    public GameObject headGroupobj;
    public List<GameObject> groupObject;
    //public List<GameObject> wireropeObject;

}


//[System.Serializable]
public class NextBackValu
{
    int resultIndex;
    int IdPassed;
    int groupSize;
    List<GameObject> gameObjectOff;

    public NextBackValu(List<GameObject> offGameObjects)
    {
        gameObjectOff = offGameObjects;
    }

    public NextBackValu(int id,int size, int currentValue)
    {
        IdPassed = id;
        groupSize = size;
        resultIndex = currentValue;
        //Debug.Log(groupSize);
    }

    public void OffGameObjects()
    {
        byte max = (byte)gameObjectOff.Count;
        for (int i = 0; i < max; i++)
        {
            gameObjectOff[i].SetActive(false);
        }
    }

    public int GetIndex()
    {
        switch (IdPassed)
        {
            case 1:
                resultIndex++; 
                if (resultIndex > groupSize -1)
                {
                    resultIndex = groupSize -1;
                }
                break;
            case -1:
                resultIndex--;
                if (resultIndex < 0)
                {
                    resultIndex = 0;
                }
                break;
        }

        return resultIndex;
    }
}
#endregion
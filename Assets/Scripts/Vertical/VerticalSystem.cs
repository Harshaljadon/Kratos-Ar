using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    public class VerticalSystem : MonoBehaviour
    {
        public event Action setPointPos;


        [SerializeField] BuildingManager buildingmanager;
        [SerializeField]
        AluRailWireRopeGroupManager aluRailWireRopeGroupManager;
        [SerializeField]
        LifeLineType currentlifeLineType;
        [SerializeField]
        LifeLineComponent currentlifeLineComponent;

        [SerializeField]
        VisualizeSelectionComponent visualizeSelectionComponent;
        int segmentLength = 20, currectCaseShockAbsorber, shockAborberYypeValue;
        public int intermediateIndex = 0;
        public int segment1Length { get; private set; } = 5;
        public float MinIntermidateGap { get; private set; } = 0.05f;
        public int[] intermidateCounts = { 0 }; //, 0, 0
        //public int[] intermidateCounts = { 0, 0, 0 };


        int TensionerTypeId, currentTensioner;
        public List<GameObject> intermediateParents = new List<GameObject>();

        private int maxIntermediateCount = 5;
        public List<Anchor> pointAnchors = new List<Anchor>();
        public List<SegmentLine> segmentLines = new List<SegmentLine>();
        public List<GameObject> intermidiatePrefabs = new List<GameObject>();
        public List<GameObject> ropGrab = new List<GameObject>();

        [Header("Data")]
        [SerializeField]
        BuildingfallProtectionGroup[] buildingfallProtectionGroup;

        void Start()
        {

            intermediateIndex = 0;
            UpdateIntermediates();
            SetupLifeLine();
        }

        private void Update()
        {
            SetupLifeLine();
        }
        
        public void DisableEverything()
        {
            foreach (var intermediateParent in intermediateParents)
            {
                intermediateParent.SetActive(false);
            }

        }

        public void ArModeBuildingUpdate(bool isArmode)
        {
            aluRailWireRopeGroupManager.BuildingArmodeProcess(isArmode);
        }

   

        public void UpdateBuildingLifeLineType(LifeLineType lifeLineType)
        {
            currentlifeLineType = lifeLineType;
            if (currentlifeLineType != LifeLineType.none || currentlifeLineType != LifeLineType.lifeLineSystem)
            {
                buildingfallProtectionGroup[0].headGroupobj.SetActive(currentlifeLineType == LifeLineType.Wire_Rope ? true : false);

            }

            buildingmanager.ExecuteAluRailCHanges(0, InstallPosition.wall, currentlifeLineType);
        }

        public void UpdateAluRailLifeLineType(int id)
        {
            buildingmanager.aluRailHolders[0].SubGroupElementId = id;
            currentlifeLineComponent = LifeLineComponent.aluRailLifeLineType;
            visualizeSelectionComponent.ShowComponent(id, currentlifeLineComponent);

        }

        public void UpdateSegmentLength( int incDecValue)
        {
            segment1Length += incDecValue;
            if (segment1Length < 5)
            {
                segment1Length = 5;
                return;
            }
            buildingmanager.ManageBuildingSize(0, incDecValue * 2.1f, 0);
            if (currentlifeLineType != LifeLineType.none || currentlifeLineType != LifeLineType.lifeLineSystem)
            {
            buildingfallProtectionGroup[0].headGroupobj.SetActive(currentlifeLineType == LifeLineType.Wire_Rope ? true : false);

            }
            buildingmanager.ExecuteAluRailCHanges(0, InstallPosition.wall, currentlifeLineType);
            Invoke(nameof(UpdateIntermediates), .2f);
            //UpdateIntermediate();

        }

        public void SetupLifeLine()
        {
            segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
            segmentLines[0].endPos.position = pointAnchors[1].endPoint.position;

            foreach (var lifeLine in segmentLines)
            {
                lifeLine.UpdateLifeline();
            }


        }

        public void SetAnchor(bool nextBackBool)
        {
            foreach (var item in pointAnchors)
            {
                item.SetVariation(nextBackBool);
            }
            currentlifeLineComponent = LifeLineComponent.anchor;
            visualizeSelectionComponent.ShowComponent(pointAnchors[0].currentVariation, currentlifeLineComponent);
        }

        #region intermediate
        public void IncreaseIntermediate(int segmentNum)
        {
            int _segLenth = segment1Length;


            int maxIntermidiateCount = (int)((_segLenth - MinIntermidateGap));


            // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 

            if (intermidateCounts[segmentNum] < maxIntermidiateCount)
            {
                //Debug.Log("passed");
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] + 1;

                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);

            }

            UpdateIntermediates();
            
            // maxIntermediateCount = (int)((segmentLength)); //- MinIntermediateGap * 1));
            //
            // if (intermidateCounts[segmentNum] < maxIntermediateCount)
            // {
            //     intermidateCounts[segmentNum] = intermidateCounts[segmentNum] + 1;
            //     segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
            // }
            
        }

        public void DecreaseIntermediate(int segmentNum)
        {
            //int _segLenth;

            if (intermidateCounts[segmentNum] > 0)
            {
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] - 1;

                 //_segLenth = segment1Length;


                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
            }



            
            UpdateIntermediates();
            

        }

        private void UpdateIntermediates()
        {
           //DisableEverything();
           
           // intermediateParents[intermediateIndex].SetActive(true);
                segmentLines[0].UpdateIntermidates(intermidateCounts[0]);

            //for (int i = 0; i < 3; i++)
            //{
            //    //intermidateCounts[i] = intermidateCounts[i] + 1;

            //    // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 
            //}
        }
        #endregion

        #region tensioner

        public void TensionerTypeUpdate(int typeId)
        {
            TensionerTypeId = typeId;
            currentlifeLineComponent = LifeLineComponent.tensioner;
            visualizeSelectionComponent.ShowComponent(TensionerTypeId, currentlifeLineComponent);
            if (TensionerTypeId == 2)
            {
                pointAnchors[0].SetTensiner(true, (byte)TensionerTypeId);
                pointAnchors[1].SetTensiner(false, (byte)TensionerTypeId);

                return;
            }
            TensionerQuantityUpdate(1);
        }

        public void TensionerQuantityUpdate(int caseValueTensinerQuantity = 1)
        {

            currentTensioner = caseValueTensinerQuantity;
            pointAnchors[0].SetTensiner(true, (byte)TensionerTypeId);
            switch (currentTensioner)
            {
                // one tensiner
                case 1:
                    {
                        pointAnchors[1].SetTensiner(false, (byte)TensionerTypeId);
                    }
                    break;
                // two tensiner
                case 2:
                    {
                        //pointAnchors[0].SetTensiner(true, (byte)TensionerTypeId);
                        pointAnchors[1].SetTensiner(true, (byte)TensionerTypeId);
                    }
                    break;
            }
        }

        void UpdateTensionerEnterPointSegment()
        {
            //Debug.Log("check");
            setPointPos?.Invoke();
            SetupLifeLine();
        }

        #endregion

        public void UpdateCableTermination(byte idIndex, byte pointAorB)
        {
            //var size = pointAnchors.Count;
            switch (pointAorB)
            {
                case 0:
                    pointAnchors[0].SetCableTermination(idIndex);
                    currentlifeLineComponent = LifeLineComponent.CableTerminationA;

                    break;
                case 1:
                    pointAnchors[1].SetCableTermination(idIndex);
                    currentlifeLineComponent = LifeLineComponent.CableTerminationB;

                    break;
            }
                    visualizeSelectionComponent.ShowComponent(idIndex, currentlifeLineComponent);
        }
        #region shockAbsorber

        public void OnOffShoockAbsorber(int caseValue = 2)
        {

            currectCaseShockAbsorber = caseValue;

            switch (currectCaseShockAbsorber)
            {
                case 0:
                    for (int i = 0; i < 2; i++)
                    {
                        pointAnchors[i].SetShockAbsorber(false, (byte)shockAborberYypeValue);
                    }
                    break;
                case 1:
                    pointAnchors[0].SetShockAbsorber(true, (byte)shockAborberYypeValue);
                    pointAnchors[1].SetShockAbsorber(false, (byte)shockAborberYypeValue);

                    break;
                case 2:
                    pointAnchors[0].SetShockAbsorber(true, (byte)shockAborberYypeValue);
                    pointAnchors[1].SetShockAbsorber(true, (byte)shockAborberYypeValue);
                    break;
            }
            UpdateTensionerEnterPointSegment();
        }


        public void ShockAborberType(int typeValue)
        {
            shockAborberYypeValue = typeValue;
            OnOffShoockAbsorber();

        }

        #endregion

        public void SetRopeGrab(int id)
        {
            DisableGameObject(ropGrab);

            ropGrab[id].SetActive(true);
            currentlifeLineComponent = LifeLineComponent.ropeGrab;
            visualizeSelectionComponent.ShowComponent(id, currentlifeLineComponent);


        }

        public void UpdateBracket_AB(int id, int anchorId)
        {
            pointAnchors[anchorId].SetBracket(id);

            switch (anchorId)
            {
                case 0:
                    currentlifeLineComponent = LifeLineComponent.mountainBracketA;

                    break;
                case 1:
                    currentlifeLineComponent = LifeLineComponent.mountainBracketB;

                    break;
                default:
                    break;
            }
            visualizeSelectionComponent.ShowComponent(id, currentlifeLineComponent);
        }


        void DisableGameObject(List<GameObject> gameObjects)
        {
            NextBackValu nextBackValu = new NextBackValu(gameObjects);
            nextBackValu.OffGameObjects();
        }
    }
}
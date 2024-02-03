using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityEngine.AddressableAssets;
//using UnityEngine.ResourceManagement.AsyncOperations;
using ModularBuildingsFramework;
namespace AR2
{    
    public class OverRoofSystem : WireRopeSystem
    {
        [Header("Component Ref")]
        public List<Anchor> pointAnchors = new List<Anchor>();
        public List<Anchor> circularAnchors = new List<Anchor>();
        public List<SegmentLine> segmentLines = new List<SegmentLine>();
        public VisualizeSelectionComponent visualizeSelectionComponent;
        [SerializeField]
        RoofBuildingManager m_RoofBuildingManager;
        [SerializeField]
        OverRoofSystemUI m_OverRoofSystemUI;

        [Header("Object ref")]
        public Transform roof;
        public Transform[] childcollection;
        public List<GameObject> intermidiatePrefabs = new List<GameObject>();


        [Header("status")]
        public LifeLineComponent currentlifeLineComponent;

        [Header("Feilds")]
        //public int[] intermidateCounts = { 0, 0, 0 };
        public int RoofDemChangeDelta = 1;
        public int intermidiatePrefabsLength = 0, segmentChangeDelta = 1;
        [SerializeField] float roofSizeTune;
        //public int corners { get; private set; } = 0;
        public int segment1Length { get; private set; } = 0;
        public int segment2Length { get; private set; } = 0;
        public int segment3Length { get; private set; } = 0;
        public int RoofLength { get; private set; } = 5;
        public int RoofWidth { get; private set; } = 5;

        int currectCaseShockAbsorber = 1, currentTensioner = 1, TensionerTypeId, previousCorner = 5, minValue = 5, maxValue = 20;
        int  shockAborberYypeValue;
        [SerializeField] int currentIndexComponent;
        [SerializeField] int segment1Limit;
        [SerializeField] int segment2Limit;

        public float WorldScaleFactor = 1; // means items are 10 times smaller, 10cm == 1M

        public float MinIntermidateGap { get; private set; } = 0.05f;

        [SerializeField]
        float changeScale = 0.0f;


        public event Action setPointPos;


        [SerializeField]
        bool callOnce;



        private void Awake()
        {
            changeScale = (float)RoofDemChangeDelta;
            RoofLength = minValue;
            RoofWidth = minValue;

            segment1Length = minValue;
            segment2Length = minValue;
            segment3Length = minValue;
        }

        private void Start()
        {
            
            DisableLifeLineItems();
            SetupAnchorPositions();
            SetSegmentLimits();
            UpDateLineRendere();
            m_OverRoofSystemUI = FindAnyObjectByType<OverRoofSystemUI>();

            intermidiatePrefabsLength = intermidiatePrefabs.Count;
            m_RoofBuildingManager = FindFirstObjectByType<RoofBuildingManager>();
        }





        private void Update()
        {
            if (previousCorner != corners)
            {
                previousCorner = corners;
            SetupLifeLine();
            }

            if (m_OverRoofSystemUI.isArON)
            {
                OnArModeAnchorCornerStartEndPostStablePosUpdate();
                UpDateLineRendere();

                SetupLifeLine();
                callOnce = false;
                return;
            }

            if (!callOnce)
            {
                callOnce = true;
                UpDateLineRendere();
            }

        }

        void UpDateLineRendere()
        {
            foreach (var lifeLine in segmentLines)
            {
                lifeLine.UpdateLifeline();
            }
        }



        // called from Ui class
        #region RoofSize

        // access via button in canvas which is segment button increate decrease length
        public void UpdateBuildingroof()
        {
            //Debug.Log("enter");
            m_RoofBuildingManager.buildingSize[0].Length = segment2Length * roofSizeTune;
            var size = MathF.Max(segment1Length, segment3Length);
            m_RoofBuildingManager.buildingSize[0].Depth = size * roofSizeTune;
            m_RoofBuildingManager.IsDraftDirty = true;
        }

        #region old Roof Update
        public void IncreseRoofLength()
        {
            if (RoofLength < maxValue)
            {
                RoofLength += RoofDemChangeDelta;
                ChangeRoofLength(changeScale);
            }
        }

        public void DecreseRoofLength()
        {
            if (RoofLength > minValue)
            {
                RoofLength -= RoofDemChangeDelta;
                ChangeRoofLength(-changeScale);
            }
        }

        public void IncreseRoofWidth()
        {
            if (RoofWidth < maxValue)
            {
                RoofWidth += RoofDemChangeDelta;
                ChangeRoofWidth(changeScale);
            }
        }

        public void DecreseRoofWidth()
        {
            if (RoofWidth > minValue)
            {
                RoofWidth -= RoofDemChangeDelta;
                ChangeRoofWidth(-changeScale);
            }
        }

        public void ChangeRoofLength(float scale)
        {
            roof.localScale = new Vector3(roof.localScale.x + scale, roof.localScale.y, roof.localScale.z);
            SetSegmentLimits();
        }

        public void ChangeRoofWidth(float scale)
        {
            roof.localScale = new Vector3(roof.localScale.x, roof.localScale.y, roof.localScale.z + scale);
            SetSegmentLimits();
        }
        #endregion

        #endregion

        #region setSegment
        void SetSegmentLimits()
        {
            segment1Limit = RoofLength * 2;
            segment2Limit = RoofWidth * 2;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="SegNumber"></param>
        /// <param name="sign">if sign is positive add, otherwise reduce</param>
        public void ApplySegmentChange(int SegNumber, int sign)
        {
            UpDateLineRendere();
            switch (SegNumber)
            {
                case 0:
                    {
                        segment1Length += (sign * segmentChangeDelta);

                        if (segment1Length < 1)
                        {
                            segment1Length = 1;
                        }
                        else if (segment1Length > segment1Limit)
                        {
                            segment1Length = segment1Limit;
                        }
                    }
                    break;
                case 1:
                    {
                        segment2Length += (sign * segmentChangeDelta);

                        if (segment2Length < 1)
                        {
                            segment2Length = 1;
                        }
                        else if (segment2Length > segment2Limit)
                        {
                            segment2Length = segment2Limit;
                        }
                    }
                    break;
                case 2:
                    {
                        segment3Length += (sign * segmentChangeDelta);

                        if (segment3Length < 1)
                        {
                            segment3Length = 1;
                        }
                        else if (segment3Length > segment1Limit)
                        {
                            segment3Length = segment1Limit;
                        }
                    }
                    break;
                default:
                    break;
            }
            //UpdateBuildingroof();
            SetupAnchorPositions();
        }

        #endregion

        public void SetCorners(int change)
        {
            corners += change;

            if (corners < 0)
            {
                corners = 0;
            }
            else if (corners > 2)
            {
                corners = 2;
            }

            foreach (var item in pointAnchors)
            {
                item.CornerCout = (byte)corners;
            }

            SetupAnchorPositions();
        }


        #region tensioner
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

        public void TensionerTypeUpdate(int typeId)
        {
            currentlifeLineComponent = LifeLineComponent.tensioner;

            TensionerTypeId = typeId;
            visualizeSelectionComponent.ShowComponent(TensionerTypeId, currentlifeLineComponent);
            if (TensionerTypeId == 2)
            {
                pointAnchors[0].SetTensiner(true, (byte)TensionerTypeId);
                pointAnchors[1].SetTensiner(false, (byte)TensionerTypeId);

                return;
            }
            TensionerQuantityUpdate(currentTensioner);


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
                        visualizeSelectionComponent.ShowComponent(m_OverRoofSystemUI.CableTerminationIndexA, currentlifeLineComponent);

                    break;
                case 1:
                    pointAnchors[1].SetCableTermination(idIndex);
                    currentlifeLineComponent = LifeLineComponent.CableTerminationB;
                        visualizeSelectionComponent.ShowComponent(m_OverRoofSystemUI.CableTerminationIndexB, currentlifeLineComponent);

                    break;
            }

            //ShowComponent();
        }

        #region shockAbsorber
        public void OnOffShoockAbsorber(int caseValue = 1)
        {

            currectCaseShockAbsorber = caseValue;

            switch (currectCaseShockAbsorber)
            {
                case 0:
                    for (int i = 0; i < 2; i++)
                    {
                        pointAnchors[i].SetShockAbsorber(false,(byte)shockAborberYypeValue);
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
            //OnOffShoockAbsorber(currectCaseShockAbsorber);

            #region notrequired but latter
            //switch (currectCaseShockAbsorber)
            //{
            //    case 0:
            //        for (int i = 0; i < 2; i++)
            //        {
            //            pointAnchors[i].SetShockAbsorber(false, (byte)shockAborberYypeValue);
            //        }
            //        break;
            //    case 1:
            //        pointAnchors[0].SetShockAbsorber(true, (byte)shockAborberYypeValue);
            //        pointAnchors[1].SetShockAbsorber(false, (byte)shockAborberYypeValue);

            //        break;
            //    case 2:
            //        pointAnchors[0].SetShockAbsorber(true, (byte)shockAborberYypeValue);
            //        pointAnchors[1].SetShockAbsorber(true, (byte)shockAborberYypeValue);
            //        break;
            //}
            #endregion
        }

        #endregion

        #region Anchor
        public void SetAnchor(bool next)
        {
            //pointAnchors[0].AdjustOrientation();
            //pointAnchors[1].AdjustOrientation();
            currentlifeLineComponent = LifeLineComponent.anchor;
            foreach (var anchor in pointAnchors)
            {
                anchor.SetVariation(next);
            }

            foreach (var anchor in circularAnchors)
            {
                anchor.SetVariation(next);
            }

            foreach (var segmentLine in segmentLines)
            {

                segmentLine.UpdateIntermidiatePrefab(intermidiatePrefabs[pointAnchors[0].currentVariation]);
                //if (intermidiatePrefabsLength >= pointAnchors[0].currentVariation)
                //{
                //}
            }

            UpdateIntermediate();
            visualizeSelectionComponent.ShowComponent(m_OverRoofSystemUI.AnchorIndex, currentlifeLineComponent);
            //Invoke(nameof(ShowComponent), .2f);
        }

        internal int GetAchorIndex()
        {
            // get index from any anchor
            SetupLifeLine();

            return pointAnchors[0].currentVariation;
        }

        #endregion

        #region Intermediate
        private void RefreashIntermidiatePos()
        {
            if (m_OverRoofSystemUI.isArON)
            {
                for (int i = 0; i < 3; i++)
                {
                    segmentLines[i].ArModeIntermediatePos(intermidateCounts[i]);
                }
                return;
            }
            for (int i = 0; i < 3; i++)
            {
                segmentLines[i].UpdateIntermidates(intermidateCounts[i]);
            }
        }

        public void IncreaseIntermidiate(int segmentNum)
        {
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

            if (intermidateCounts[segmentNum] < maxIntermidiateCount)
            {
                //Debug.Log("passed");
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] + 1;

                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);

            }
        }

        void UpdateIntermediate()
        {
            for (int i = 0; i < 3; i++)
            {
                //intermidateCounts[i] = intermidateCounts[i] + 1;

                // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 
                segmentLines[i].UpdateIntermidates(intermidateCounts[i]);
            }
        }

        public void DecreaseIntermidiate(int segmentNum)
        {
            int _segLenth;

            if (intermidateCounts[segmentNum] > 0)
            {
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] - 1;

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


                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
            }
        }
        #endregion


        public void DisableLifeLineItems()
        {
            foreach (var item in pointAnchors)
            {
                item.gameObject.SetActive(false);
            }

            foreach (var item in circularAnchors)
            {
                item.gameObject.SetActive(false);
            }

            foreach (var item in segmentLines)
            {
                item.gameObject.SetActive(false);
            }
        }


        void OnArModeAnchorCornerStartEndPostStablePosUpdate()
        {
            switch (corners)
            {
                case 0:
                    {
                        segmentLines[0].startPos.position = pointAnchors[0].endPoint.position;
                        segmentLines[0].endPos.position = pointAnchors[1].startPoint.position;
                    }
                    break;
                case 1:
                    {


                        segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
                        //segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;
                        segmentLines[0].endPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                        //segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                        segmentLines[1].startPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                        segmentLines[1].endPos.position = pointAnchors[1].endPoint.position;
                    }
                    break;
                case 2:
                    {


                        segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
                        //segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;
                        segmentLines[0].endPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                        //segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                        segmentLines[1].startPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                        //segmentLines[1].endPos.position = circularAnchors[1].startPoint.position;
                        segmentLines[1].endPos.position = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                        //segmentLines[2].startPos.position = circularAnchors[1].endPoint.position;
                        segmentLines[2].startPos.position = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                        segmentLines[2].endPos.position = pointAnchors[1].endPoint.position;
                    }
                    break;
                default:
                    break;
            }
        }


        public void SetupLifeLine()
        {
            switch (corners)
            {
                case 0:
                    {
                        pointAnchors[0].gameObject.SetActive(true);
                        pointAnchors[1].gameObject.SetActive(true);

                        circularAnchors[0].gameObject.SetActive(false);
                        circularAnchors[1].gameObject.SetActive(false);

                        segmentLines[0].gameObject.SetActive(true);
                        segmentLines[1].gameObject.SetActive(false);
                        segmentLines[2].gameObject.SetActive(false);


                        segmentLines[0].startPos.position = pointAnchors[0].endPoint.position;
                        segmentLines[0].endPos.position = pointAnchors[1].startPoint.position;
                    }
                    break;
                case 1:
                    {
                        pointAnchors[0].gameObject.SetActive(true);
                        pointAnchors[1].gameObject.SetActive(true);

                        circularAnchors[0].gameObject.SetActive(true);
                        circularAnchors[1].gameObject.SetActive(false);

                        segmentLines[0].gameObject.SetActive(true);
                        segmentLines[1].gameObject.SetActive(true);
                        segmentLines[2].gameObject.SetActive(false);

                        segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
                        //segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;
                        segmentLines[0].endPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                        //segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                        segmentLines[1].startPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                        segmentLines[1].endPos.position = pointAnchors[1].endPoint.position;
                    }
                    break;
                case 2:
                    {
                        pointAnchors[0].gameObject.SetActive(true);
                        pointAnchors[1].gameObject.SetActive(true);

                        circularAnchors[0].gameObject.SetActive(true);
                        circularAnchors[1].gameObject.SetActive(true);

                        segmentLines[0].gameObject.SetActive(true);
                        segmentLines[1].gameObject.SetActive(true);
                        segmentLines[2].gameObject.SetActive(true);

                        segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
                        //segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;
                        segmentLines[0].endPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                        //segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                        segmentLines[1].startPos.position = circularAnchors[0].variationMeshes[circularAnchors[0].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                        //segmentLines[1].endPos.position = circularAnchors[1].startPoint.position;
                        segmentLines[1].endPos.position = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().startPoint.position;

                        //segmentLines[2].startPos.position = circularAnchors[1].endPoint.position;
                        segmentLines[2].startPos.position = circularAnchors[1].variationMeshes[circularAnchors[1].currentVariation].GetComponent<CircularAnchorEnterExitPoint>().exitPoint.position;
                        segmentLines[2].endPos.position = pointAnchors[1].endPoint.position;
                    }
                    break;
                default:
                    break;
            }



            RefreashIntermidiatePos();
        }


        void SetupAnchorPositions()
        {
            SetSegmentLimits();
            switch (corners)
            {
                case 0:
                    {
                        Vector3 anchor1Pos = new Vector3(-(float)segment1Length / (float)2, 0, 0);
                        Vector3 anchor2Pos = new Vector3((float)segment1Length / (float)2, 0, 0);

                        pointAnchors[0].transform.localPosition = anchor1Pos;
                        pointAnchors[1].transform.localPosition = anchor2Pos;
                        pointAnchors[1].transform.localRotation = Quaternion.Euler(0, 180, 0);

                    }
                    break;
                case 1:
                    {
                        Vector3 anchor1Pos = new Vector3(-(float)segment1Length / (float)2, 0, (float)segment2Length / (float)2);
                        Vector3 anchor2Pos = new Vector3((float)segment1Length / (float)2, 0, -(float)segment2Length / (float)2);

                        Vector3 circular1Pos = new Vector3((float)segment1Length / (float)2, 0, (float)segment2Length / (float)2);

                        pointAnchors[0].transform.localPosition = anchor1Pos;

                        circularAnchors[0].transform.localPosition = circular1Pos;
                        circularAnchors[0].transform.localRotation = Quaternion.identity;

                        pointAnchors[1].transform.localPosition = anchor2Pos;
                        pointAnchors[1].transform.localRotation = Quaternion.Euler(0, 270, 0);


                    }
                    break;
                case 2:
                    {
                        Vector3 anchor1Pos = new Vector3(-(float)segment1Length / (float)2, 0, (float)segment2Length / (float)2);
                        Vector3 anchor2Pos = new Vector3(-(float)segment3Length / (float)2, 0, -(float)segment2Length / (float)2); 

                        Vector3 circular1Pos = new Vector3((float)segment1Length / (float)2, 0, (float)segment2Length / (float)2);
                        Vector3 circular2Pos = new Vector3((float)segment3Length / (float)2, 0, -(float)segment2Length / (float)2);

                        pointAnchors[0].transform.localPosition = anchor1Pos;

                        circularAnchors[0].transform.localPosition = circular1Pos;
                        circularAnchors[0].transform.localRotation = Quaternion.identity;

                        circularAnchors[1].transform.localPosition = circular2Pos;
                        circularAnchors[1].transform.localRotation = Quaternion.Euler(0, 90, 0);


                        pointAnchors[1].transform.localPosition = anchor2Pos;
                        pointAnchors[1].transform.localRotation = Quaternion.Euler(0, 0, 0);

                    }
                    break;
                default:
                    break;
            }


            SetupLifeLine();
        }




        #region image later

        public void HideImagePanel()
        {
            // roofPlane.gameObject.SetActive(false);
        }
        
        public void LoadImageFromGallery()
        {
            // NativeGallery.Permission permission = NativeGallery.GetImageFromGallery( ( path ) =>
            // {
            //     if( path != null )
            //     {
            //         if (loadedTexture)
            //         {
            //             Destroy(loadedTexture);
            //         }
            //         
            //         // Create Texture from selected image
            //         loadedTexture = NativeGallery.LoadImageAtPath(path);
            //         if( loadedTexture == null )
            //         {
            //             Debug.Log( "Couldn't load texture from " + path );
            //             return;
            //         }
            //         
            //         roofPlane.gameObject.SetActive(true);
            //         roofPlane.material.mainTexture = loadedTexture;
            //     }
            // }, "Select a image", "image/*" );

        }

        public void make()
        {
            Debug.Log("testing");
            //throw new NotImplementedException();
        }
        #endregion
    }
}


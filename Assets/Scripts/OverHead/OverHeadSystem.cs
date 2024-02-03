using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    public class OverHeadSystem : WireRopeSystem
    {
        [SerializeField]
        int segmentLength = 5;
        public float MinIntermidateGap { get; private set; } = 0.20f;
        public int[] IntermidateCounts { get { return intermidateCounts; } set { intermidateCounts = value;  } } //ChangesInterMediate();

        //public int[] intermidateCounts = { 0 };

        public int intermidiatePrefabsLength;
        int currectCaseShockAbsorber = 1, currentTensioner = 1, TensionerTypeId, shockAborberYypeValue;

        public List<Anchor> pointAnchors = new List<Anchor>();
        public List<SegmentLine> segmentLines = new List<SegmentLine>();

        public List<GameObject> vehicles;
        public List<GameObject> cariageBody;
        public List<GameObject> intermidiatePrefabs = new List<GameObject>();

        // public MeshRenderer roofPlane;
        private Texture2D loadedTexture;
        public event Action setPointPos;

        public VisualizeSelectionComponent visualizeSelectionComponent;
        public LifeLineComponent currentlifeLineComponent;
        OverHeadSystemUI overHeadSystemUI;

        private void OnEnable()
        {
            SetupLifeLine();
        }

        // Start is called before the first frame update
        protected virtual void Start()
        {
            overHeadSystemUI = FindAnyObjectByType<OverHeadSystemUI>();
            //DisableEverything();
            SetVehicle(0);
            intermidiatePrefabsLength = intermidiatePrefabs.Count;

            SetupLifeLine();

        }

        [SerializeField]
        bool callOnce;

        protected virtual void Update()
        {
            segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
            segmentLines[0].endPos.position = pointAnchors[1].endPoint.position;
            if (overHeadSystemUI.isArON)
            {
                SetupLifeLine();
                callOnce = false;
                return;
            }

            if (!callOnce)
            {
                callOnce = true;
                SetupLifeLine();
            }
            //SetupLifeLine();
        }


        public void DisableEverything()
        {
            foreach (var item in pointAnchors)
            {
                item.gameObject.SetActive(false);
            }

            foreach (var item in segmentLines)
            {
                item.gameObject.SetActive(false);
            }
        }

        public virtual void SetupLifeLine()
        {
            //Debug.Log("calls");
            segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
            segmentLines[0].endPos.position = pointAnchors[1].endPoint.position;
            foreach (var lifeLine in segmentLines)
            {
                lifeLine.UpdateLifeline();
            }
        }



        public virtual void IncreaseIntermidiate(int segmentNum)
        {
            int maxIntermidiateCount = (int)((segmentLength - MinIntermidateGap)); // * 1));
            if (IntermidateCounts.Length <= segmentNum) // segmentNum = 0,1,2
            {
                return;
            }
            if (IntermidateCounts[segmentNum] < maxIntermidiateCount)
            {
                IntermidateCounts[segmentNum] = IntermidateCounts[segmentNum] + 1;
                segmentLines[segmentNum].UpdateIntermidates(IntermidateCounts[segmentNum]);
            }

        }

        public virtual void DecreaseIntermidiate(int segmentNum)
        {
            if (IntermidateCounts.Length <= segmentNum)
            {
                return;
            }
            if (IntermidateCounts[segmentNum] > 0)
            {
                IntermidateCounts[segmentNum] = IntermidateCounts[segmentNum] - 1;
                segmentLines[segmentNum].UpdateIntermidates(IntermidateCounts[segmentNum]);
            }
        }

        internal void SetVehicle(int vehicleIndex)
        {
            foreach (var vehicle in vehicles)
            {
                vehicle.SetActive(false);
            }

            if (vehicles.Count > 0)
            {
                vehicles[vehicleIndex].SetActive(true);
            }
        }

        public virtual void SetAnchor(bool next)
        {
            currentlifeLineComponent = LifeLineComponent.anchor;
            foreach (var anchor in pointAnchors)
            {
                anchor.SetVariation(next);
            }

            foreach (var segmentLine in segmentLines)
            {

                if (intermidiatePrefabsLength > pointAnchors[0].currentVariation)
                {
                    segmentLine.UpdateIntermidiatePrefab(intermidiatePrefabs[pointAnchors[0].currentVariation]);
                }
            }
            UpdateIntermediate();
            visualizeSelectionComponent.ShowComponent(pointAnchors[0].currentVariation, currentlifeLineComponent);
        }

        public int GetAchorIndex()
        {
            return pointAnchors[0].currentVariation;
        }

        public void UpdateCableTermination(byte idIndex, byte pointAorB)
        {
            //var size = pointAnchors.Count;
            switch (pointAorB)
            {
                case 0:
                    currentlifeLineComponent = LifeLineComponent.CableTerminationA;
                    pointAnchors[0].SetCableTermination(idIndex);

                    break;
                case 1:
                    currentlifeLineComponent = LifeLineComponent.CableTerminationB;
                    pointAnchors[1].SetCableTermination(idIndex);

                    break;
            }
            visualizeSelectionComponent.ShowComponent(idIndex, currentlifeLineComponent);
        }


        public void OnOffShoockAbsorber(int caseValue = 2)
        {

            currectCaseShockAbsorber = caseValue;
            //currentlifeLineComponent = LifeLineComponent.shockAbsorber;
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
            currentlifeLineComponent = LifeLineComponent.shockAbsorber;
            shockAborberYypeValue = typeValue;
            OnOffShoockAbsorber();
            visualizeSelectionComponent.ShowComponent(shockAborberYypeValue, currentlifeLineComponent);

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

        public void TensionerTypeUpdate(int typeId)
        {
            currentlifeLineComponent = LifeLineComponent.tensioner;
            TensionerTypeId = typeId;
            if (TensionerTypeId == 2)
            {
                pointAnchors[0].SetTensiner(true, (byte)TensionerTypeId);
                pointAnchors[1].SetTensiner(false, (byte)TensionerTypeId);

                return;
            }
            TensionerQuantityUpdate(currentTensioner);
            visualizeSelectionComponent.ShowComponent(TensionerTypeId, currentlifeLineComponent);
        }

        void UpdateTensionerEnterPointSegment()
        {
            //Debug.Log("check");
            setPointPos?.Invoke();
            SetupLifeLine();
        }

        public virtual void UpdateIntermediate()
        {
            var size = segmentLines.Count;
                segmentLines[0].UpdateIntermidates(IntermidateCounts[0]);
            for (int i = 0; i < size; i++)
            {
                //intermidateCounts[i] = intermidateCounts[i] + 1;

                // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 
                segmentLines[i].UpdateIntermidates(IntermidateCounts[i]);
            }
            Invoke(nameof(SetupLifeLine), .1f);
            //SetupLifeLine();
        }

        public void SetCarriageBody(int id)
        {
            currentlifeLineComponent = LifeLineComponent.carriageBody;
            NextBackValu nextBackValu = new NextBackValu(cariageBody);
            nextBackValu.OffGameObjects();
            cariageBody[id].SetActive(true);
            visualizeSelectionComponent.ShowComponent(id, currentlifeLineComponent);
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
    }
}

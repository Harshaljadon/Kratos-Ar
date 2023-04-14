using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    public class OverHeadSystem : MonoBehaviour
    {
        int segmentLength = 20;
        public float MinIntermidateGap { get; private set; } = 0.20f;
        public int[] intermidateCounts = { 0 };

        public List<Anchor> pointAnchors = new List<Anchor>();
        public List<SegmentLine> segmentLines = new List<SegmentLine>();

        public List<GameObject> vehicles; 
        
        // public MeshRenderer roofPlane;
        private Texture2D loadedTexture;

        // Start is called before the first frame update
        void Start()
        {
            //DisableEverything();
            SetupLifeLine();
            SetVehicle(0);
        }

        private void Update()
        {
            SetupLifeLine();
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

        void SetupLifeLine()
        {
            segmentLines[0].startPos.position = pointAnchors[0].startPoint.position;
            segmentLines[0].endPos.position = pointAnchors[1].endPoint.position;

            foreach (var lifeLine in segmentLines)
            {
                lifeLine.UpdateLifeline();
            }
        }

        public void IncreaseIntermidiate(int segmentNum)
        {
            int maxIntermidiateCount = (int)((segmentLength)); //- MinIntermidateGap * 1));

            if (intermidateCounts[segmentNum] < maxIntermidiateCount)
            {
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] + 1;
                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
            }
        }

        public void DecreaseIntermidiate(int segmentNum)
        {
            if (intermidateCounts[segmentNum] > 0)
            {
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] - 1;
                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
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

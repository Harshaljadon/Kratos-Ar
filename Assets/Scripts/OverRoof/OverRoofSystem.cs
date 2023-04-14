using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{    
    public class OverRoofSystem : MonoBehaviour
    {
        public Transform roof;
        public float WorldScaleFactor = 1; // means items are 10 times smaller, 10cm == 1M
        public List<Anchor> pointAnchors = new List<Anchor>();
        public List<Anchor> circularAnchors = new List<Anchor>();
        public List<SegmentLine> segmentLines = new List<SegmentLine>();

        public int RoofDemChangeDelta = 1;
        public int segmentChangeDelta = 1;
        public int corners { get; private set; } = 0;

        public int segment1Length { get; private set; } = 0;
        public int segment2Length { get; private set; } = 0;
        public int segment3Length { get; private set; } = 0;

        public List<GameObject> intermidiatePrefabs = new List<GameObject>(5);


        int segment1Limit = 0;
        int segment2Limit = 0;

        public float MinIntermidateGap { get; private set; } = 0.05f;
        public int[] intermidateCounts = { 0, 0, 0 };

        float changeScale = 0.0f;

        int minValue = 5;
        int maxValue = 20;

        public int RoofLength { get; private set; } = 5;
        public int RoofWidth { get; private set; } = 5;
        
        // public MeshRenderer roofPlane;
        // private Texture2D loadedTexture;

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
            // roofPlane.gameObject.SetActive(false);
            
            DisableLifeLineItems();
            SetupAnchorPositions();
            SetSegmentLimits();
        }

        private void Update()
        {
            SetupLifeLine();
        }

        // called from Ui class
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


        public void SetSegmentLimits()
        {
            segment1Limit = RoofLength * 2;
            segment2Limit = RoofWidth * 2;
        }

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

            SetupAnchorPositions();
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="SegNumber"></param>
        /// <param name="sign">if sign is positive add, otherwise reduce</param>
        public void ApplySegmentChange(int SegNumber, int sign)
        {
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

            SetupAnchorPositions();
        }

        internal int GetAchorIndex()
        {
            // get index from any anchor
            return pointAnchors[0].currentVariation;
        }

        internal void SetAnchor(bool next)
        {
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
            }
        }

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

        void SetupLifeLine()
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
                        segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;

                        segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
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
                        segmentLines[0].endPos.position = circularAnchors[0].startPoint.position;

                        segmentLines[1].startPos.position = circularAnchors[0].endPoint.position;
                        segmentLines[1].endPos.position = circularAnchors[1].startPoint.position;

                        segmentLines[2].startPos.position = circularAnchors[1].endPoint.position;
                        segmentLines[2].endPos.position = pointAnchors[1].endPoint.position;
                    }
                    break;
                default:
                    break;
            }

            foreach (var lifeLine in segmentLines)
            {
                lifeLine.UpdateLifeline();
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


        private void RefreashIntermidiatePos()
        {
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

            if(intermidateCounts[segmentNum] < maxIntermidiateCount)
            {
                intermidateCounts[segmentNum] = intermidateCounts[segmentNum] + 1;
                
                // (_segLenth - MinIntermidateGap * 2)  leaving some are on both sides 
                segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
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
    }
}
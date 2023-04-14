using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    public class VerticalSystem : MonoBehaviour
    {
        int segmentLength = 20;
        public int intermediateIndex = 0;
        
        public List<GameObject> intermediateParents = new List<GameObject>();

        private int maxIntermediateCount = 5;
        public List<Anchor> pointAnchors = new List<Anchor>();
        public List<SegmentLine> segmentLines = new List<SegmentLine>();

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
            // foreach (var item in pointAnchors)
            // {
            //     item.gameObject.SetActive(false);
            // }
            //
            // foreach (var item in segmentLines)
            // {
            //     item.gameObject.SetActive(false);
            // }
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

        public void IncreaseIntermediate(int segmentNum)
        {
            intermediateIndex++;
            if (intermediateIndex > maxIntermediateCount) {
                intermediateIndex = maxIntermediateCount;
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
            intermediateIndex--;
            if (intermediateIndex < 0) {
                intermediateIndex = 0;
            }
            
            UpdateIntermediates();
            
            // if (intermidateCounts[segmentNum] > 0)
            // {
            //     intermidateCounts[segmentNum] = intermidateCounts[segmentNum] - 1;
            //     segmentLines[segmentNum].UpdateIntermidates(intermidateCounts[segmentNum]);
            // }
        }

        private void UpdateIntermediates()
        {
           DisableEverything();
           
            intermediateParents[intermediateIndex].SetActive(true);
        }
    }
}
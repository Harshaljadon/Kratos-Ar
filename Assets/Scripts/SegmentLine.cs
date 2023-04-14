using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    [ExecuteInEditMode]
    public class SegmentLine : MonoBehaviour
    {
        public LineRenderer lineRenderer;
        float lineWidth = 0.0035f;
        public GameObject intermidiatePrefab;

        public List<Transform> transformPoints = new List<Transform>();

        List<GameObject> intermidiates = new List<GameObject>();

        public Transform startPos;
        public Transform endPos;

        public Transform referanceTransform;
        
        List<Vector3> linePoints = new List<Vector3>();
        

        private void Start()
        {
            lineRenderer.startWidth = lineWidth;
            lineRenderer.endWidth = lineWidth;
        }

        public void UpdateLifeline()
        {
            linePoints.Clear();
            linePoints.Add(startPos.position);
            linePoints.Add(endPos.position);

            lineRenderer.positionCount = linePoints.Count;
            lineRenderer.SetPositions(linePoints.ToArray());
        }

        public void UpdateIntermidiatePrefab(GameObject refPrefab)
        {
            intermidiatePrefab = refPrefab;
        }
        

        public void UpdateIntermidates(int intermidateCount)
        {
            float distance = Vector3.Distance(startPos.position, endPos.position);
            float total = (intermidateCount + 1);
            float gap = distance / total;

            for (int i = 0; i < intermidiates.Count; i++)
            {
                Destroy(intermidiates[i]);
            }
            intermidiates.Clear();
            
            
            var intermidiatePoints = GeneratePointsObjects(total, distance, gap);
            
            for (int i = 1; i < intermidiatePoints.Count; i++)
            {
                var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], referanceTransform.rotation, transform);
                intermidiates.Add(obj);
            }
        }
        
        private List<Vector3> GeneratePointsObjects(float numbersOfPoints, float distance, float spaceBetweenPoints)
        {
            List<Vector3> intermidiatePoints = new List<Vector3>();

            // float numbersOfPoints = distance / spaceBetweenPoints; //Finding numbers of objects to be spawned by dividing "distance" by "spaceBetweenPoints"
            float increnment = 1 / numbersOfPoints; //finding the increment for Lerp this will always be between 0 to 1, because Lerp() takes value between 0 to 1;

            for (int i = 1; i <= numbersOfPoints; i ++)
            {
                Vector3 v = Vector3.Lerp(startPos.position, endPos.position, increnment * i * 0.75f); //Find next position using Vector2.Lerp()
                intermidiatePoints.Add(v);//Add the newlly found position in List so that we can spwan the Object at that position.
            }

            return intermidiatePoints;
        }
        
    }
}

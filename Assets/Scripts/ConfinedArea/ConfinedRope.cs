using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AR2
{
    public class ConfinedRope : MonoBehaviour
    {
        public LineRenderer lineRenderer;

        public Transform startPoint;
        public List<Transform> midPoints = new List<Transform>();
        public Transform endPoint;

        List<Vector3> linePoints = new List<Vector3>();

        /// <summary>
        /// To be set by winch/retractabe when they are added
        /// </summary>
        /// <param name="startPos"></param>
        public void SetStartPoint(Vector3 startPos)
        {
            startPoint.position = startPos;
            UpdateLifeline();
        }

        /// <summary>
        /// To be set by confinedPod
        /// </summary>
        /// <param name="midPos"></param>
        /// <param name="endPos"></param>

        public void UpdateLifeline()
        {
            linePoints.Clear();
            linePoints.Add(startPoint.position);

            foreach (var point in midPoints)
            {
                linePoints.Add(point.position);
            }
                        
            linePoints.Add(endPoint.position);

            lineRenderer.positionCount = linePoints.Count;
            lineRenderer.SetPositions(linePoints.ToArray());
        }

    }
}

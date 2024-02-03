using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;


public class IntermediateTargetOffset : MonoBehaviour
{
    [SerializeField] SegmentLine segmentLine;

    [SerializeField] Vector3 offset;
    //[SerializeField] GameObject onCamera;

    private void Update()
    {
        if (segmentLine.Intermediate.Count != 0)
        {
        transform.position = segmentLine.Intermediate[0].transform.position + offset;
            //onCamera.SetActive(true);

        }

        
    }
}

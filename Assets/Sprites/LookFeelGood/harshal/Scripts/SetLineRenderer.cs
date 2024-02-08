using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetLineRenderer : MonoBehaviour
{
    [SerializeField]
    LineRenderer lineRenderer;
    [SerializeField]
    Transform[] pointPos;
    // Start is called before the first frame update
    void Start()
    {
        lineRenderer.positionCount = pointPos.Length;
        var size = pointPos.Length;
        for (int i = 0; i < size; i++)
        {
            lineRenderer.SetPosition(i, pointPos[i].position);
        }
    }


}

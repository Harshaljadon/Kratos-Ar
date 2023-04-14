using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PodAnimation : MonoBehaviour
{
    public bool canAnimate = false;
    public float speed = 3f;
    public Transform radheAttachPoint;
    public Transform startPos;
    public Transform EndPos;
    
    private void Update()
    {
        if(canAnimate)
        {
            radheAttachPoint.position = Vector3.Lerp(startPos.position, EndPos.position, Mathf.PingPong(Time.time / speed, 1));
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LerpPosBetABtarget : MonoBehaviour
{
    [SerializeField] Transform[] targetAB;
    [SerializeField] Transform mainTarget;
    [SerializeField] [Range(0, 1)] float targetABBetValue;
    // Update is called once per frame
    void Update()
    {
        if (targetAB.Length != 0)
        {
            mainTarget.position = Vector3.Lerp(targetAB[0].position, targetAB[1].position, targetABBetValue);
        }
    }
}

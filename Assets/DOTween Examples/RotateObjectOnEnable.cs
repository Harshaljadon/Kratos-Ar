using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateObjectOnEnable : MonoBehaviour
{
    [SerializeField]
    Vector3 rotateValue;
    [SerializeField]
    Vector3 rotateValue2;

    [SerializeField]
    Transform target, target2;
    [SerializeField]
    float invokeTime;

    private void OnEnable()
    {
        Invoke(nameof(TargetRoatationSet), invokeTime);       
    }

    void TargetRoatationSet()
    {
        if (target != null)
        {
        target.rotation = Quaternion.Euler(rotateValue);

        }

        if (target2 != null)
        {
        target2.rotation = Quaternion.Euler(rotateValue2);

        }
    }

    private void OnDisable()
    {
        CancelInvoke();
    }

    private void Update()
    {
        if (invokeTime == 0)
        {
            TargetRoatationSet();
        }
    }

}

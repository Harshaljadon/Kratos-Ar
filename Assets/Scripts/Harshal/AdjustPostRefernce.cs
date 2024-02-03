using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdjustPostRefernce : MonoBehaviour
{
    [SerializeField]
    Transform targetposRef;

    public enum AxisPosRef
    {
        x,y,z,xy,xz,yz,xyz
    }

    public AxisPosRef axis;



    // Update is called once per frame
    void Update()
    {
        switch (axis)
        {
            case AxisPosRef.x:
                transform.position = new Vector3(targetposRef.position.x, transform.position.y, transform.position.z);
                break;
            case AxisPosRef.y:
                transform.position = new Vector3(transform.position.x, targetposRef.position.y, transform.position.z);
                break;
            case AxisPosRef.z:
                transform.position = new Vector3(transform.position.x, transform.position.y, targetposRef.position.z);
                break;
            case AxisPosRef.xy:
                transform.position = new Vector3(targetposRef.position.x, targetposRef.position.y, transform.position.z);
                break;
            case AxisPosRef.xz:
                transform.position = new Vector3(targetposRef.position.x, transform.position.y, targetposRef.position.z);
                break;
            case AxisPosRef.yz:
                transform.position = new Vector3(transform.position.x, targetposRef.position.y, targetposRef.position.z);
                break;
            case AxisPosRef.xyz:
                transform.position = new Vector3(targetposRef.position.x, targetposRef.position.y, targetposRef.position.z);
                break;
            default:
                break;
        }
    }
}

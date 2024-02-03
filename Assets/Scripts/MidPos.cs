using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MidPos : MonoBehaviour
{
    [SerializeField] Transform target1PosRef;
    [SerializeField] Transform target2PosRef;
    // Start is called before the first frame update

    // Update is called once per frame
    void Update()
    {
        if (target1PosRef == null || target2PosRef == null)
        {
            return;
        }
        transform.position = Vector3.Lerp(target1PosRef.position, target2PosRef.position, .5f);
    }
}

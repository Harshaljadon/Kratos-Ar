using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorlsDpaceRotation : MonoBehaviour
{
    [SerializeField] Vector3 rotatValue;

    // Update is called once per frame
    void Update()
    {
        transform.rotation = Quaternion.Euler(rotatValue);
    }
}

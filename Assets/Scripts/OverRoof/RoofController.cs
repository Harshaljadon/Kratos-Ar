using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoofController : MonoBehaviour
{
    public Transform roof;

    

    public void changeLength(float scale)
    {
        roof.localScale = new Vector3(roof.localScale.x + scale, roof.localScale.y, roof.localScale.z);
    }


    public void changeWidth(float scale)
    {
        roof.localScale = new Vector3(roof.localScale.x, roof.localScale.y, roof.localScale.z + scale);
    }
}

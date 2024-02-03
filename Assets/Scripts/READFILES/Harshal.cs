using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Harshal : Harsh
{

    public override void CountIntermediate(int signId)
    {
        //base.CountIntermediate(signId);
        Debug.Log("check" + signId);
    }

}

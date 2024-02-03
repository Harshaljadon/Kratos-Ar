using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SelfRegester : MonoBehaviour
{
    public Action trigger;
    public GameObject HarnesPrefebinsticated;

    public void AssignPrefeb(GameObject harnes)
    {
        HarnesPrefebinsticated = harnes;
        trigger.Invoke();
    }

    public void DeAssignPrefeb()
    {
         
    }

}

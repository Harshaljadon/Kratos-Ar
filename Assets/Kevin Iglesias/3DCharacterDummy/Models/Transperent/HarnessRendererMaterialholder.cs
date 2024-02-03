using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HarnessRendererMaterialholder : MonoBehaviour
{
    public GameObject[] harnessPartMaterial;
    public Transform centerPos;
    SelfRegester sR;
    private void Start()
    {
        sR = FindObjectOfType<SelfRegester>();
        sR.AssignPrefeb(this.gameObject);
    }
}

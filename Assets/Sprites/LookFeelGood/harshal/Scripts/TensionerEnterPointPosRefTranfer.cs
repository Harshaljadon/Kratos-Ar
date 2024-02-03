using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using AR2;

public class TensionerEnterPointPosRefTranfer : MonoBehaviour
{
    [SerializeField] Transform startPoint;
    [SerializeField] Transform endPoint;

    [SerializeField] Transform uniquePointPos;

    [SerializeField] OverRoofSystem overRoofSystem;
    [SerializeField] OverHeadSystem OverHeadSystem;
    [SerializeField] CeillingWallFloorSystem ceillingWallFloorSystem;
    [SerializeField] VerticalSystem verticalSystem;


    private void OnEnable()
    {
        OverHeadSystem = FindObjectOfType<OverHeadSystem>();
        overRoofSystem = FindAnyObjectByType<OverRoofSystem>();
        ceillingWallFloorSystem = FindAnyObjectByType<CeillingWallFloorSystem>();
        verticalSystem = FindAnyObjectByType<VerticalSystem>();
        if (overRoofSystem != null)
        {
            overRoofSystem.setPointPos += TensionerEnterPointPosRefTranfer_setPointPos;

        }
        if (OverHeadSystem != null)
        {
            OverHeadSystem.setPointPos += TensionerEnterPointPosRefTranfer_setPointPos;
        }
        if (ceillingWallFloorSystem != null)
        {
            ceillingWallFloorSystem.setPointPos += TensionerEnterPointPosRefTranfer_setPointPos;

        }
        if (verticalSystem != null)
        {
            verticalSystem.setPointPos += TensionerEnterPointPosRefTranfer_setPointPos;
        }
        TensionerEnterPointPosRefTranfer_setPointPos();


    }

    private void Update()
    {
            
        startPoint.position = uniquePointPos.position;
        endPoint.position = uniquePointPos.position;
    }

    private void TensionerEnterPointPosRefTranfer_setPointPos()
    {
        //Debug.Log("check");

        if (overRoofSystem != null)
        {

        overRoofSystem.SetupLifeLine();
        }

        if (OverHeadSystem != null)
        {
            OverHeadSystem.SetupLifeLine();
        }

        if (verticalSystem != null)
        {
            verticalSystem.SetupLifeLine();
        }


    }
    private void OnDisable()
    {
        if (overRoofSystem != null)
        {
            overRoofSystem.setPointPos -= TensionerEnterPointPosRefTranfer_setPointPos;
        }

        if (OverHeadSystem != null)
        {
            OverHeadSystem.setPointPos -= TensionerEnterPointPosRefTranfer_setPointPos;
        }

        if (ceillingWallFloorSystem != null)
        {
            ceillingWallFloorSystem.setPointPos -= TensionerEnterPointPosRefTranfer_setPointPos;

        }

        if (verticalSystem != null)
        {
            verticalSystem.setPointPos -= TensionerEnterPointPosRefTranfer_setPointPos;
        }
    }
}

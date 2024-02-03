using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;

public class PosRef : MonoBehaviour
{
    [SerializeField] Transform targestPosRef;
    [SerializeField] Transform OnArModeOdjectOff;

    [SerializeField] bool global_or_LocalPoss;

    enum AxisTargetRefCases  { xRef,yRef,zRef,x_yRef,x_zRef,y_zRef,xyz_Ref}

    [SerializeField] AxisTargetRefCases axisTargetRefCases;
    [SerializeField] Vector3 offsetaxis;
    //[SerializeField] Vector3 localPos;

    [SerializeField]
    OverRoofSystemUI m_OverRoofSystemUI;

    [SerializeField] bool testing = true;
    [SerializeField] bool callOnce;

    [SerializeField] Transform topBranch;
    [SerializeField] SegmentLine segmentLine;
    private void OnEnable()
    {
        m_OverRoofSystemUI = FindObjectOfType<OverRoofSystemUI>();


    }

    //private void Start()
    //{
    //    localPos = transform.position;
    //}
    // Update is called once per frame
    void Update()
    {

        //if (m_OverRoofSystemUI.isArON)
        if (!OnArModeOdjectOff.transform.gameObject.activeInHierarchy)
        {
            this.transform.SetParent(targestPosRef.parent);
            callOnce = false;
            testing = false;
            return;
        }
        if (!callOnce)
        {
            callOnce = true;
            this.transform.SetParent(targestPosRef.parent.parent);
            if (topBranch != null)
            {
            topBranch.rotation = Quaternion.identity;

            }
            testing = true;
            //Debug.Log("calls");
            segmentLine.UpdateLifeline();
            //m_OverRoofSystemUI.overRoofSystem.UpDateLineRendere();
            //m_OverRoofSystemUI.overRoofSystem.SetupLifeLine();
            //transform.position = localPos;
        }
        if (global_or_LocalPoss && testing)
        {
            switch (axisTargetRefCases)
            {
                case AxisTargetRefCases.xRef:
                    transform.position = new Vector3(targestPosRef.position.x, transform.position.y, transform.position.z) + offsetaxis;
                    break;
                case AxisTargetRefCases.yRef:
                    transform.position = new Vector3(transform.position.x, targestPosRef.position.y, transform.position.z) + offsetaxis;
                    break;
                case AxisTargetRefCases.zRef:
                    transform.position = new Vector3(transform.position.x, transform.position.y, targestPosRef.position.z)+ offsetaxis;
                    break;
                case AxisTargetRefCases.x_yRef:
                    //Debug.Log("checking");
                    transform.position = new Vector3(targestPosRef.position.x, targestPosRef.position.y, transform.position.z)+ offsetaxis;
                    break;
                case AxisTargetRefCases.x_zRef:
                    transform.position = new Vector3(targestPosRef.position.x, transform.position.y, targestPosRef.position.z)+ offsetaxis;
                    break;
                case AxisTargetRefCases.y_zRef:
                    transform.position = new Vector3(transform.position.x, targestPosRef.position.y, targestPosRef.position.z)+ offsetaxis;
                    break;
                case AxisTargetRefCases.xyz_Ref:
                    transform.position = targestPosRef.position+ offsetaxis;
                    break;
            }
        }
        else
        {
            switch (axisTargetRefCases)
            {
                case AxisTargetRefCases.xRef:
                    transform.localPosition = new Vector3(targestPosRef.localPosition.x, transform.localPosition.y, transform.localPosition.z);
                    break;
                case AxisTargetRefCases.yRef:
                    transform.localPosition = new Vector3(transform.localPosition.x, targestPosRef.localPosition.y, transform.localPosition.z);
                    break;
                case AxisTargetRefCases.zRef:
                    transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, targestPosRef.localPosition.z);
                    break;
                case AxisTargetRefCases.x_yRef:
                    transform.localPosition = new Vector3(targestPosRef.localPosition.x, targestPosRef.localPosition.y, transform.localPosition.z);
                    break;
                case AxisTargetRefCases.x_zRef:
                    transform.localPosition = new Vector3(targestPosRef.localPosition.x, transform.localPosition.y, targestPosRef.localPosition.z);
                    break;
                case AxisTargetRefCases.y_zRef:
                    transform.localPosition = new Vector3(transform.localPosition.x, targestPosRef.localPosition.y, targestPosRef.localPosition.z);
                    break;
                case AxisTargetRefCases.xyz_Ref:
                    transform.localPosition = targestPosRef.localPosition;
                    break;
            }
        }
    }
}

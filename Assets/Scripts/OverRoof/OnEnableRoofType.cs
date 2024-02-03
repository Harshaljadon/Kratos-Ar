using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnEnableRoofType : MonoBehaviour
{
    [SerializeField] RoofTypeManager roofTypeManager;
    public RoofSheetType myRoofSheetType;

    private void OnEnable()
    {
        roofTypeManager = FindFirstObjectByType<RoofTypeManager>();
        if (roofTypeManager == null)
        {
            return;
        }
        Invoke(nameof(ActivateRoofType), .2f);
    }

    void ActivateRoofType()
    {
        roofTypeManager.OnRoofType(myRoofSheetType);

    }

    private void OnDisable()
    {
        CancelInvoke(nameof(ActivateRoofType));
    }
}

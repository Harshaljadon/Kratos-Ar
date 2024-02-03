using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using System;

public class RoofTypeManager : MonoBehaviour
{
    public event Action<RoofSheetType> roofTypeEventcall;

    public void OnRoofType(RoofSheetType roofSheetType)
    {
        roofTypeEventcall?.Invoke(roofSheetType);
    }
}

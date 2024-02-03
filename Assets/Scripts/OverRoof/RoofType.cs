using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoofType : MonoBehaviour
{
    public RoofSheetType roofSheetType;

}

[System.Serializable]
public enum RoofSheetType
{
    TrapezoidalRoof, StandingSteam,KlipLock
}

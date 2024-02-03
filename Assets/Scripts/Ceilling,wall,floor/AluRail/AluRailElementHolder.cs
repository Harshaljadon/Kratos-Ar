using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AluRailElementHolder : MonoBehaviour
{
    public BuildingFace buildingFace;
    public PostPos postPos;
    public ElemnetRef[] elemnetRefs;
    public Transform[] posRef;
    public GameObject[] hideUnHideOnOffArMode;
    //public GameObject[] top, mid, bottom;

}

[System.Serializable]
public enum PostPos
{
    startPoint, midPoint, EndPoint
}


[System.Serializable]
public class ElemnetRef
{
    public InstallPosition installPosition;
    public GameObject[] elements;
}

[System.Serializable]
public enum BuildingFace
{
face1,face2,face3,face4
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AluRailHolder : MonoBehaviour
{
    protected bool changesOccur;
    public List<AluRailElementHolder> aluRailElementHolder;
    [SerializeField] BuildingNumberIdentification buildingNumberIdentification;
    public int groupMemberIndexIdActivation;
    public Transform[] allChild;

    public List<AluRailElementHolder> AluRailElementHolder { get { return aluRailElementHolder; } }

    public CeillingWallFloorSystem CeillingWallFloorSystem;

    private void Start()
    {
        CeillingWallFloorSystem = FindAnyObjectByType<CeillingWallFloorSystem>();
    }

    public bool CHangesOccur
    {
        get { return changesOccur; }
        set { changesOccur = value;
            ReAddRef();
            //DeactivateAllElement();
            //ActivateElement();
        }
    }
    [SerializeField]
    protected int subGroupElemntId;
    public int SubGroupElementId
    {
        get { return subGroupElemntId; }
        set
        {
            subGroupElemntId = value;
            UpdateSubGroupElementActivationDeactivation();
        }
    }
    public InstallPosition currentPos = InstallPosition.floor;
    public int currentCorner = 0;
    public List< GameObject> allActiveGameobject;

    public virtual void UpdateSubGroupElementActivationDeactivation()
    {
        //DeactivateAlSubGroupElement();
        //ActvateSubGroupEelment();
    }


    public virtual void BuildingArmodeProcess(bool val)
    {
        if (val)
        {
            InArMode();
        }
        else
        {
            NonArMoce();
        }
    }

    [ContextMenu("Ar mode")]
    public virtual void InArMode()
    {
        //Debug.Log("check");
        allChild = GetComponentsInChildren<Transform>();
        CollectActiveGameObject();
        foreach (var item in allChild)
        {
            AluRailElementHolder aluRailWireRopeParameter = item.GetComponent<AluRailElementHolder>();
            AluRailHolder aluRailWireRopeGroupManager = item.GetComponent<AluRailHolder>();

            if (aluRailWireRopeGroupManager != null || (aluRailWireRopeParameter != null && item.parent != null && item.parent.GetComponent<AluRailHolder>() != null))
            {
                // Do not disable objects with AluRailWireRopeGroupManager or AluRailWireRopeParameter with a parent AluRailWireRopeParameter
                continue;
            }

            item.gameObject.SetActive(false);
        }

        //foreach (var item in aluRailElementHolder)
        //{
        //    EnableAllChildren(item.transform);
        //}

        //DeactivateAllElement();
        //ActivateElement();
        if (CeillingWallFloorSystem.currentlifeLineComponent == LifeLineComponent.aluRailLifeLineType)
        {
            //Debug.Log("check");
            foreach (var item in allActiveGameobject)
            {
            //Debug.Log(item.name);
                item.SetActive(true);
            }
        }


        foreach (var itemK in aluRailElementHolder)
        {
            foreach (var itemG in itemK.hideUnHideOnOffArMode)
            {
                itemG.SetActive(false);
            }
        }

    }


    [ContextMenu("collection of child actiev object")]
    public void CollectActiveGameObject()
    {
        var actievobjectGroup = new List<GameObject>();
        foreach (var item in aluRailElementHolder)
        {

            actievobjectGroup = GetActiveChildren(item.gameObject);
            var max = actievobjectGroup.Count;
            for (int i = 0; i < max; i++)
            {
                allActiveGameobject.Add(actievobjectGroup[i]);
            }
        }

    }
    #region collectActiveGameObject

    List<GameObject> GetActiveChildren(GameObject parent)
    {
        // Create a list to store active children
        var activeChildren = new List<GameObject>();
        // Iterate through all child objects recursively
        CollectActiveChildrenRecursive(parent.transform, activeChildren);

        // Convert the list to an array and return
        return activeChildren;
    }

    void CollectActiveChildrenRecursive(Transform parentTransform, List<GameObject> activeChildren)
    {
        // Iterate through all child objects
        foreach (Transform child in parentTransform)
        {
            // Check if the child is both active and belongs to an active hierarchy
            if (child.gameObject.activeSelf && IsInActiveHierarchy(child))
            {
                // Add active child to the list
                activeChildren.Add(child.gameObject);
            }

            // Recursively call the function for each active child
            if (child.childCount > 0 && child.gameObject.activeSelf)
            {
                CollectActiveChildrenRecursive(child, activeChildren);
            }
        }
    }

    bool IsInActiveHierarchy(Transform objTransform)
    {
        // Check if the object and its ancestors are active
        while (objTransform != null)
        {
            if (!objTransform.gameObject.activeSelf)
            {
                return false;
            }
            objTransform = objTransform.parent;
        }
        return true;
    }
    #endregion

    [ContextMenu("NONAr mode")]
    public virtual void NonArMoce()
    {
        //var allChild = GetComponentsInChildren<Transform>();
        foreach (var item in allChild)
        {
            AluRailElementHolder aluRailWireRopeParameter = item.GetComponent<AluRailElementHolder>();
            AluRailHolder aluRailWireRopeGroupManager = item.GetComponent<AluRailHolder>();

            if (aluRailWireRopeGroupManager != null || (aluRailWireRopeParameter != null )) //&& item.parent != null && item.parent.GetComponent<AluRailHolder>() != null
            {
                // Do not disable objects with AluRailWireRopeGroupManager or AluRailWireRopeParameter with a parent AluRailWireRopeParameter
                continue;
            }
            Debug.Log(item.name);
            item.gameObject.SetActive(true);
        }


        foreach (var itemK in aluRailElementHolder)
        {
            foreach (var itemG in itemK.hideUnHideOnOffArMode)
            {
                itemG.SetActive(true);
            }
        }

        //DeactivateAllElement();
        //ActivateElement();
    }


    public virtual void EnableAllChildren(Transform parent)
    {
        parent.gameObject.SetActive(true);

        for (int i = 0; i < parent.childCount; i++)
        {
            EnableAllChildren(parent.GetChild(i));
        }


    }

    [ContextMenu("Call")]
    protected virtual void ReAddRef()
    {
        //Debug.Log(changesOccur);
        if (!changesOccur)
        {
            return;
        }
        var allAluRailElementHolderRef = GetComponentsInChildren<AluRailElementHolder>();
        var size = allAluRailElementHolderRef.Length;

        aluRailElementHolder.Clear();

        for (int i = 0; i < size; i++)
        {
            aluRailElementHolder.Add(allAluRailElementHolderRef[i]);
        }
        //Debug.Log(changesOccur);
        //Debug.Log("calss");
        changesOccur = false;
        //DeactivateAllElement();
        //ActivateElement();
    }



    public virtual void DeactivateAllElement()
    {
        var max = aluRailElementHolder.Count;
        for (int i = 0; i < max; i++)
        {
            var subMax = aluRailElementHolder[i].elemnetRefs.Length;
            for (int j = 0; j < subMax; j++)
            {
                var numberElement = aluRailElementHolder[i].elemnetRefs[j].elements.Length;
                for (int k = 0; k < numberElement; k++)
                {
                    aluRailElementHolder[i].elemnetRefs[j].elements[k].SetActive(false);

                }
            }
        }
    }
    // installPos,corner,face,buildingNumber,posPoint
    public virtual void ActivateElement()
    {
        var max = aluRailElementHolder.Count;
        for (int i = 0; i < max; i++)
        {
            var subMax = aluRailElementHolder[i].elemnetRefs.Length;
            for (int j = 0; j < subMax; j++)
            {
                var numberElement = aluRailElementHolder[i].elemnetRefs[j].elements.Length;
                for (int k = 0; k < numberElement; k++)
                {

                    if (aluRailElementHolder[i].elemnetRefs[j].installPosition == currentPos)
                    {
                        if (buildingNumberIdentification == BuildingNumberIdentification.firstBuilding)
                        {
                            if (aluRailElementHolder[i].postPos != PostPos.EndPoint)
                            {

                                aluRailElementHolder[i].elemnetRefs[j].elements[k].SetActive(true);
                            }
                            else
                            {
                                if (currentCorner != 0 )
                                {
                                    aluRailElementHolder[i].elemnetRefs[j].elements[1].SetActive(true);
                                    break;
                                }
                                else
                                {
                                    aluRailElementHolder[i].elemnetRefs[j].elements[k].SetActive(true);
                                    break;

                                }
                            }

                        }
                        else
                        {
                            switch (currentCorner)
                            {
                                case 1:
                                    if (aluRailElementHolder[i].buildingFace == BuildingFace.face1)
                                    {
                                        aluRailElementHolder[i].elemnetRefs[j].elements[0].SetActive(true);

                                    }



                                    break;
                                case 2:

                                    if (aluRailElementHolder[i].buildingFace == BuildingFace.face1 )
                                    {
                                        if (aluRailElementHolder[i].postPos != PostPos.EndPoint)
                                        {
                                        aluRailElementHolder[i].elemnetRefs[j].elements[0].SetActive(true);

                                        }
                                        else
                                        {
                                        aluRailElementHolder[i].elemnetRefs[j].elements[2].SetActive(true);

                                        }

                                    }
                                    else
                                    {
                                        aluRailElementHolder[i].elemnetRefs[j].elements[0].SetActive(true);

                                    }
                                    break;
                                default:
                                    break;
                            }


                        }





                    }
                }
            }
        }
    }

}

[System.Serializable]
public enum BuildingNumberIdentification
{
    firstBuilding,secondBuilding
}


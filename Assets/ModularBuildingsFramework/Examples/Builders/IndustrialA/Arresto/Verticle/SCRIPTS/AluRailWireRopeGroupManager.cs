using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AluRailWireRopeGroupManager : AluRailHolder
{
    //[SerializeField] bool changesOccur;
    public List<AluRailWireRopeParameter> aluRailWireRopeElementHolder;
    [SerializeField] VerticleBuildingManager verticleBuildingManager;
    //public Transform[] allChild;
    private void Start()
    {
        verticleBuildingManager = FindAnyObjectByType<VerticleBuildingManager>();
    }

    public override void BuildingArmodeProcess(bool val)
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
    public override void InArMode()
    {
         allChild = GetComponentsInChildren<Transform>();

        foreach (var item in allChild)
        {
            AluRailWireRopeParameter aluRailWireRopeParameter = item.GetComponent<AluRailWireRopeParameter>();
            AluRailWireRopeGroupManager aluRailWireRopeGroupManager = item.GetComponent<AluRailWireRopeGroupManager>();

            if (aluRailWireRopeGroupManager != null || (aluRailWireRopeParameter != null && item.parent != null && item.parent.GetComponent<AluRailWireRopeParameter>() != null))
            {
                // Do not disable objects with AluRailWireRopeGroupManager or AluRailWireRopeParameter with a parent AluRailWireRopeParameter
                continue;
            }

            item.gameObject.SetActive(false);
        }

        foreach (var item in aluRailWireRopeElementHolder)
        {
            EnableAllChildren(item.transform);
        }

        DeactivateAllElement();
        DeactivateAlSubGroupElement();
        ActivateElement();
        if (verticleBuildingManager.currentLifelinetype == LifeLineType.Alu_Rail)
        {
            ActvateSubGroupEelment();

        }

        foreach (var itemK in aluRailWireRopeElementHolder)
        {
            foreach (var itemG in itemK.hideUnHideOnOffArMode)
            {
                itemG.SetActive(false);
            }
        }

    }


    [ContextMenu("NONAr mode")]
    public override void NonArMoce()
    {
        //allChild = GetComponentsInChildren<Transform>();
        //Debug.Log("check");
        foreach (var item in allChild)
        {
            AluRailWireRopeParameter aluRailWireRopeParameter = item.GetComponent<AluRailWireRopeParameter>();
            AluRailWireRopeGroupManager aluRailWireRopeGroupManager = item.GetComponent<AluRailWireRopeGroupManager>();

            if (aluRailWireRopeGroupManager != null || (aluRailWireRopeParameter != null )) //&& item.parent != null && item.parent.GetComponent<AluRailWireRopeParameter>() != null
            {
                // Do not disable objects with AluRailWireRopeGroupManager or AluRailWireRopeParameter with a parent AluRailWireRopeParameter
                continue;
            }
            item.gameObject.SetActive(true);

        }

        foreach (var itemK in aluRailWireRopeElementHolder)
        {
            foreach (var itemG in itemK.hideUnHideOnOffArMode)
            {
                itemG.SetActive(true);
            }
        }
    }

    public override void EnableAllChildren(Transform parent)
    {
        parent.gameObject.SetActive(true);

        for (int i = 0; i < parent.childCount; i++)
        {
            EnableAllChildren(parent.GetChild(i));
        }


    }

    [ContextMenu("Call")]
    protected override void ReAddRef()
    {
        //base.ReAddRef();

        var allAluRailElementHolderRef = GetComponentsInChildren<AluRailWireRopeParameter>();
        var size = allAluRailElementHolderRef.Length;

        aluRailWireRopeElementHolder.Clear();

        for (int i = 0; i < size; i++)
        {
            aluRailWireRopeElementHolder.Add(allAluRailElementHolderRef[i]);
        }
        changesOccur = false;
    }

    public override void DeactivateAllElement()
    {
        //base.DeactivateAllElement();

        var max = aluRailWireRopeElementHolder.Count;
        for (int i = 0; i < max; i++)
        {
            var subMax = aluRailWireRopeElementHolder[i].aluEireGroup.Length;
            for (int j = 0; j < subMax; j++)
            {
                aluRailWireRopeElementHolder[i].aluEireGroup[j].SetActive(false);
                //var numberElement = aluRailElementHolder[i].elemnetRefs[j].elements.Length;
                //for (int k = 0; k < numberElement; k++)
                //{
                //    aluRailElementHolder[i].elemnetRefs[j].elements[k].SetActive(false);

                //}
            }
        }
    }

    public override void UpdateSubGroupElementActivationDeactivation()
    {
        //base.UpdateSubGroupElementActivationDeactivation();
        DeactivateAlSubGroupElement();
        ActvateSubGroupEelment();
    }

    void DeactivateAlSubGroupElement()
    {
        var size = aluRailWireRopeElementHolder.Count;
        for (int i = 0; i < size; i++)
        {
            var size2 = aluRailWireRopeElementHolder[i].aluRailGroupLaderNonLader.Length;
            for (int j = 0; j < size2; j++)
            {
                aluRailWireRopeElementHolder[i].aluRailGroupLaderNonLader[j].SetActive(false);
            }
        }
    }


    public void ActvateSubGroupEelment()
    {
        var size = aluRailWireRopeElementHolder.Count;
        for (int i = 0; i < size; i++)
        {
            var size2 = aluRailWireRopeElementHolder[i].aluRailGroupLaderNonLader.Length;
            for (int j = 0; j < size2; j++)
            {
                aluRailWireRopeElementHolder[i].aluRailGroupLaderNonLader[subGroupElemntId].SetActive(true);
            }
        }
    }
    public override void ActivateElement()
    {
        var max = aluRailWireRopeElementHolder.Count;
        for (int i = 0; i < max; i++)
        {
            aluRailWireRopeElementHolder[i].aluEireGroup[groupMemberIndexIdActivation].SetActive(true);
            //var subMax = aluRailWireRopeElementHolder[i].aluEireGroup.Length;
            //for (int j = 0; j < subMax; j++)
            //{
            //    //var numberElement = aluRailElementHolder[i].elemnetRefs[j].elements.Length;
            //    //for (int k = 0; k < numberElement; k++)
            //    //{
            //    //    aluRailElementHolder[i].elemnetRefs[j].elements[k].SetActive(false);

            //    //}
            //}
        }
        //base.ActivateElement(); 
    }
}

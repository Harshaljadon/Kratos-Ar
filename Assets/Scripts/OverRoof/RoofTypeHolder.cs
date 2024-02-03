using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoofTypeHolder : MonoBehaviour
{
    [SerializeField] RoofTypeManager roofTypeManager;
    public List<RoofType> roofTypeCollection;

    private void Start()
    {
        roofTypeManager = FindFirstObjectByType<RoofTypeManager>();
        roofTypeManager.roofTypeEventcall += RoofTypeManager_roofTypeEventcall;
    }

    private void RoofTypeManager_roofTypeEventcall(RoofSheetType obj)
    {
        OffAllRoofType();
        OnRoofType(obj);
    }


    void OffAllRoofType()
    {
        foreach (var item in roofTypeCollection)
        {
            item.gameObject.SetActive(false);
        }
    }

    void OnRoofType(RoofSheetType obj)
    {
        foreach (var itemK in roofTypeCollection)
        {
            if (itemK.roofSheetType == obj)
            {
                itemK.gameObject.SetActive(true);
            }
        }
    }

    private void OnDisable()
    {
        if (roofTypeManager != null)
        {

        roofTypeManager.roofTypeEventcall -= RoofTypeManager_roofTypeEventcall;
        }
        
    }

    private void OnDestroy()
    {
        if (roofTypeManager != null)
        {

            roofTypeManager.roofTypeEventcall -= RoofTypeManager_roofTypeEventcall;
        }

    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public struct HarnessMeshInfo
{
    public MeshRenderer meshRenderer;
    public int index;
}

[System.Serializable]
public struct HarnessItemInfo
{
    public Element.ElementType Type;
    public List<HarnessMeshInfo> indexes;
}

public class Harness : MonoBehaviour
{
    
    public List<HarnessItemInfo> harnessInfo = new List<HarnessItemInfo>(); 
    
    
    [SerializeField]
    List<Element> availableElements = new List<Element>();

    readonly List<Element> currentElements = new List<Element>();

    
    
    private void Awake()
    {
        // for (int i = 0; i < transform.childCount; i++)
        // {
        //     Element e = transform.GetChild(i).GetComponent<Element>();
        //     if (e != null)
        //     {
        //         availableElements.Add(e);
        //     }
        //     
        // }
    }


    public int GetAvailableElementCount()
    {
        return harnessInfo.Count;
        // return availableElements.Count;
    }
    
    public int GetActiveElementCount()
    {
        return currentElements.Count;
    }

    public string GetElementName(int index)
    {
        return Element.GetElementName(harnessInfo[index].Type);
        // return availableElements[index].GetElementName();
    }
    
    public Sprite GetElementVariationSprite(Element.ElementType elementType, int index)
    {
        Sprite sprite = null;
        
        foreach (var element in availableElements)
        {
            if (element.GetElementType() == elementType)
            {
                sprite = element.GetVariationSprite(index);
                break;
            }
        }
        return sprite;
    }
    
    public int GetElementVariationCount(Element.ElementType elementType)
    {
        int count = 0;
        
        foreach (var element in availableElements)
        {
            if (element.GetElementType() == elementType)
            {
                count = element.GetVariationCount();
                break;
            }
        }

        return count;
    }
    
    public Element.ElementType GetElementType(int index)
    {
        return harnessInfo[index].Type;
        // return availableElements[index].GetElementType();
    }
    
    public void SetElementVariation(Element.ElementType elementType, int index)
    {
        foreach (var element in availableElements)
        {
            if (element.GetElementType() == elementType)
            {
                element.SetVariation(index);
                break;
            }
        }
    }

    public int GetColorsCount(Element.ElementType elementType)
    {
        int count = 0;
        
        foreach (var element in availableElements)
        {
            if (element.GetElementType() == elementType)
            {
                count = element.GetMaterialCount();
                break;
            }
        }

        return count;
    }
    
    public Sprite GetColorSprite(Element.ElementType elementType, int i)
    {
        Sprite sprite = null;
        
        foreach (var element in availableElements)
        {
            if (element.GetElementType() == elementType)
            {
                sprite = element.GetColorSprite(i);
                break;
            }
        }
        return sprite;
    }

    public void SetColorVariation(Element.ElementType elementType, Material mat)
    {
        foreach (var item in harnessInfo)
        {
            if (item.Type == elementType)
            {
                foreach (var hmi in item.indexes)
                {
                    var mats = hmi.meshRenderer.materials;
                    mats[hmi.index] = mat;
                    hmi.meshRenderer.materials = mats;
                }
                break;
            }
        }
        
        // foreach (var element in availableElements)
        // {
        //     if (element.GetElementType() == elementType)
        //     {
        //         element.SetMaterial(index);
        //         break;
        //     }
        // }
    }
}

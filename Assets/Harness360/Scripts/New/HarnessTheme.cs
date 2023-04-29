using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[Serializable]
public struct MaterialInfo
{
    public Material material;
    public Sprite sprite;
}

[Serializable]
public struct ColorVariationInfo
{
    public Element.ElementType Type;
    public List<MaterialInfo> AvaliableMatrials;
}

public class HarnessTheme : MonoBehaviour
{
    [SerializeField] public List<ColorVariationInfo> allVariations = new List<ColorVariationInfo>();


    public int GetAvaliableColorCount(Element.ElementType elementType)
    {
        int count = 0;
        
        foreach (var variation in allVariations)
        {
            if (variation.Type == elementType)
            {
                count = variation.AvaliableMatrials.Count;
            }
        }

        return count;
    }


    public Sprite GetSpriteForColor(Element.ElementType elementType, int i)
    {
        Sprite sp = null;
        
        foreach (var variation in allVariations)
        {
            if (variation.Type == elementType)
            {
                sp = variation.AvaliableMatrials[i].sprite;
            }
        }

        return sp;
    }

    public Material GetMaterialForElementAtIndex(Element.ElementType elementType, int index)
    {
        Material mat = null;
        
        foreach (var variation in allVariations)
        {
            if (variation.Type == elementType)
            {
                mat = variation.AvaliableMatrials[index].material;
            }
        }

        return mat;
    }
}

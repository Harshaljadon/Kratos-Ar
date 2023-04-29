using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HarnessManager : MonoBehaviour
{
    // public Harness basicHarness;
    // public Harness harness2;

    public List<Harness> harnessPrefabs = new List<Harness>();

    public HarnessTheme harnessTheme;

    private Harness _currentHarness;
    public Harness CurrentHarness => _currentHarness;

    private void Awake()
    {
        harnessTheme = GetComponent<HarnessTheme>();
    }

    public void ChooseHarness(int harness)
    {
        if (_currentHarness != null)
        {
            DestroyImmediate(_currentHarness.gameObject);
        }

        if (harness < harnessPrefabs.Count)
        {
            _currentHarness = Instantiate(harnessPrefabs[harness]) as Harness;
        }
    }


    public void SetRotation(float rot)
    {
        if (_currentHarness != null)
        {
            _currentHarness.transform.rotation = Quaternion.Euler(0,rot, 0);
        }
    }
    

    public int GetColorCountForElement(Element.ElementType elementType)
    {
        return harnessTheme.GetAvaliableColorCount(elementType);
    }
    
    public Sprite GetSpriteForColor(Element.ElementType elementType, int i)
    {
        return harnessTheme.GetSpriteForColor(elementType, i);
    }

    public int GetHarnessCount()
    {
        return harnessPrefabs.Count;
    }

    public string GetHarnessName(int index)
    {
        return harnessPrefabs[index].name;
    }


    public void SetColorVariation(Element.ElementType elementType, int index)
    {
        Material mat = harnessTheme.GetMaterialForElementAtIndex(elementType, index);
        
        _currentHarness.SetColorVariation(elementType, mat);
        
    }
}

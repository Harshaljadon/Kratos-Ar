using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class HarnessManager : MonoBehaviour
{
    // public Harness basicHarness;
    // public Harness harness2;
    [System.Serializable]
    public class ComponentDetails
    {
        public string name;
        public Sprite icon;
    }
    [System.Serializable]
    public class HarnesItemInfo
    {
        public HarnessitemTypeEnum type;
        public List<ComponentDetails> details = new List<ComponentDetails>();
    }


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


    //+++++++++++++++++++++++++++++++
    public List<HarnesItemInfo> harnessItemInfos = new List<HarnesItemInfo>();


    public Sprite GetItemIcon(int index, HarnessitemTypeEnum harnessitemTypeEnum)
    {
        Sprite sp = null;

        foreach (var item in harnessItemInfos)
        {
            if (item.type == harnessitemTypeEnum)
            {
                sp = item.details[index].icon;
            }
        }

        return sp;
    }

    public string GetItemName(int index, HarnessitemTypeEnum harnessitemTypeEnum)
    {
        string str = null;

        foreach (var item in harnessItemInfos)
        {
            if (item.type == harnessitemTypeEnum)
            {
                str = item.details[index].name;
            }
        }

        return str;
    }

    public void SetColorVariation(Element.ElementType elementType, int index)
    {
        Material mat = harnessTheme.GetMaterialForElementAtIndex(elementType, index);
        
        _currentHarness.SetColorVariation(elementType, mat);
        
    }

    internal void SelectItem(HarnessitemTypeEnum buttonType, int buttonIndex, string name, Element.ElementType eeT)
    {
        switch (buttonType)
        {
            case HarnessitemTypeEnum.Harness:
                {
                    if (_currentHarness?.gameObject)
                    {
                        Destroy(_currentHarness.gameObject);
                    }

                    _currentHarness = Instantiate(harnessPrefabs[buttonIndex]).GetComponent<Harness>();

                }
                break;

            case HarnessitemTypeEnum.None:
                {
                    Material passmaterial = harnessTheme.GetMaterialForElementAtIndex(eeT, buttonIndex);
                    _currentHarness.GetComponent<Harness>().SetColorVariation(eeT, passmaterial);
                    //currentActive.SetItems(itemType, buttonName, nameWinchResLoc, winchesGameObj[index]);

                }
                break;
          

            default:
                break;
        }
    }
}

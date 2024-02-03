using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ModularBuildingsFramework;


public class VisualizeSelectionComponent : MonoBehaviour
{
    public LifeLineComponent currentlifeLineComponent;
    public int currentIndexComponent;

    public FixeLineCompoenetPrefebRef fixeLineCompoenetPrefebRef;


    public void ShowComponent(int indexId, LifeLineComponent lifeLineComponent)
    {
        currentIndexComponent = indexId;
        currentlifeLineComponent = lifeLineComponent;
        ShowFixLineComponent();
    }
    void ShowFixLineComponent()
    {
        if (currentlifeLineComponent == LifeLineComponent.tensioner)
        {
            foreach (var item in fixeLineCompoenetPrefebRef.groupdata)
            {
                if (item.lifeLineComponent == LifeLineComponent.CableTerminationA)
                {

                    Utils.DeleteChilds(item.positionToInstantiate);
                }

                if (item.lifeLineComponent == LifeLineComponent.CableTerminationB)
                {

                    Utils.DeleteChilds(item.positionToInstantiate);
                }
            }
        }
        foreach (var item in fixeLineCompoenetPrefebRef.groupdata)
        {
            if (item.lifeLineComponent == currentlifeLineComponent)
            {
                Utils.DeleteChilds(item.positionToInstantiate);


                Instantiate(item.typeRef[currentIndexComponent], item.positionToInstantiate);
                //var go = 


            }
        }
    }
}

[System.Serializable]
public class FixeLineCompoenetPrefebRef
{
    public Groupdata[] groupdata;
}

[System.Serializable]
public class Groupdata
{
    public string typeName;
    public Transform positionToInstantiate;
    public LifeLineComponent lifeLineComponent;
    public GameObject[] typeRef;
}

[System.Serializable]
public enum LifeLineComponent
{
    anchor, tensioner, CableTerminationA, CableTerminationB, shockAbsorber, carriageBody, basePlate, bracket, aluRailLifeLineType, wireRopeLifeLineType, ropeGrab, mountainBracketA,
    mountainBracketB
}
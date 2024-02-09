using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;

public class ChangeBasePlateEventReciver : MonoBehaviour
{
    public GameObject[] basePlate;
    public OverHeadSystemUI overHeadSystemUI;



    private void OnEnable()
    {
        overHeadSystemUI = FindAnyObjectByType<OverHeadSystemUI>();
        overHeadSystemUI.changeIntermediateBasePlateEvent += OverHeadSystemUI_changeIntermediateBasePlateEvent;
        overHeadSystemUI.UpDateBasePlate(true);
    }

    private void OverHeadSystemUI_changeIntermediateBasePlateEvent(int obj)
    {
        var size = basePlate.Length;
        for (int i = 0; i < size; i++)
        {
            basePlate[i].SetActive(false);
        }

        basePlate[obj].SetActive(true);
    }

    private void OnDisable()
    {
        overHeadSystemUI.UpDateBasePlate(false);
        overHeadSystemUI.changeIntermediateBasePlateEvent -= OverHeadSystemUI_changeIntermediateBasePlateEvent;
        
    }
}

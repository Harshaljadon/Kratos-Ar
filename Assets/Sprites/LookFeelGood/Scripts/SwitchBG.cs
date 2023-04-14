using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchBG : MonoBehaviour
{
    [SerializeField]
    GameObject[] bg;

    int tabCount, size;

    private void OnEnable()
    {
        size = bg.Length;
    }
    public void SwitchHomePageBg()
    {
        tabCount++;
        if (tabCount < size)
        {
            for (int i = 0; i < size; i++)
            {
                bg[i].SetActive(false);
            }
            bg[tabCount].SetActive(true);
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                bg[i].SetActive(false);
            }
            tabCount = 0;
            bg[tabCount].SetActive(true);
        }
    }

}

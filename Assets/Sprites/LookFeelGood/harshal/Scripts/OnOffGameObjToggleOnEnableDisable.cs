using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnOffGameObjToggleOnEnableDisable : MonoBehaviour
{
    [SerializeField] protected GameObject[] onOffGameOject;
    [SerializeField] bool doToggle;

    private void OnEnable()
    {
        if (!doToggle)
        {
            return;
        }
        ToggleOnOffObject();
    }

    void ToggleOnOffObject()
    {
        //base.OnEnable();

        var max = onOffGameOject.Length;
        for (int i = 0; i < max; i++)
        {
            var checkActiveness = onOffGameOject[i].activeInHierarchy;
            var toggleActiveness = !checkActiveness;
            onOffGameOject[i].SetActive(toggleActiveness);
        }
    }


}

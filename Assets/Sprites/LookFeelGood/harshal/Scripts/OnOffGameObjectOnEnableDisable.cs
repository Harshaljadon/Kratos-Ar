using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class OnOffGameObjectOnEnableDisable : MonoBehaviour
{
    public UnityEvent<int> callOnEnable,callOnDisable;
    [SerializeField] protected GameObject[] onOffGameOject;
    public int posIndex;
    protected virtual void OnEnable()
    {
        var max = onOffGameOject.Length;
        for (int i = 0; i < max; i++)
        {
            onOffGameOject[i].SetActive(true);
        }
        callOnEnable?.Invoke(posIndex);
    }

    protected virtual void OnDisable()
    {
        var max = onOffGameOject.Length;
        for (int i = 0; i < max; i++)
        {
            onOffGameOject[i].SetActive(false);
        }

        callOnDisable?.Invoke(posIndex);
    }
}

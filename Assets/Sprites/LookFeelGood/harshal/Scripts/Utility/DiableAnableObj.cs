
using UnityEngine;

public class DiableAnableObj 
{
    public void AnableObj(params GameObject[] anableGameobject)
    {
        byte length = (byte)anableGameobject.Length;
        for (int i = 0; i < length; i++)
        {
            anableGameobject[i].SetActive(true);
        }
    }

    public void DiableObj(params GameObject[] disableGameObject)
    {
        byte length = (byte)disableGameObject.Length;
        for (int i = 0; i < length; i++)
        {
            disableGameObject[i].SetActive(false);
        }
    }
}

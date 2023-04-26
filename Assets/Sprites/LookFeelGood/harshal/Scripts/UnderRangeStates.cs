using UnityEngine;
using System;


public class UnderRangeStates : MonoBehaviour
{
    [SerializeField][HideInInspector]
    GameObject objectToBeDetect;
    [SerializeField]
    //bool objUnder;
    public event Action<GameObject> objectDected;
    public event Action enableScript;

    //public bool ObjUnder { get => objUnder; private set => objUnder = value; }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("MainCamera"))
        {
            objectToBeDetect = other.gameObject;
            enableScript?.Invoke();
            objectDected?.Invoke(objectToBeDetect);
            //objUnder = true;
        }
    }
   

}

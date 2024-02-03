using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PostEyeType : MonoBehaviour
{

    public EyeType eyeType = EyeType.vertical;
}

    [System.Serializable]
    public enum EyeType
    {
        horizontel,vertical
    }
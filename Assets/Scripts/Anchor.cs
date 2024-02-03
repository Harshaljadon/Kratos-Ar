using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AnchorType
{
    Start,
    Mid,
    End
}

public class Anchor : MonoBehaviour
{
    public AnchorType anchorType;

    public GameObject tensioner;
    public GameObject extermity;
    [SerializeField] GameObject[] postHeight;
    public GameObject uniqueCorner;
    //public GameObject shockAborberCollsection;

    public Transform startPoint;
    public Transform endPoint;

    public Transform tensionerStartPos, tensionerEndPosType1;//tensionerEndPosType2
    public Transform tensionerRotateGroupHolder;

    public List<GameObject> variationMeshes = new List<GameObject>();
    public List<GameObject> shockAborberCollsection = new List<GameObject>();
    public List<GameObject> tensionerCollection = new List<GameObject>();
    public List<GameObject> cableTerminationCollection = new List<GameObject>();
    public List<GameObject> bracketCollection = new List<GameObject>();


    public int currentVariation { get; private set; }
    public int currentShockAbsorberVariation { get; private set; }

    [SerializeField]
    byte cornerCount;

    [SerializeField]
    bool isRequiredAdjustOrientation;

    public byte CornerCout
    {
        get
        {
            return cornerCount;
        }
        set
        {
            cornerCount = value;
        }
    }

    [SerializeField]
    Vector3 cornerUpdateNewVector;

    public Orientataiondata orientataionData;
    //[SerializeField]
    //int debugUpdatedVariation;
    [SerializeField]
    PostEyeType postEyeType;

    private void Awake()
    {
        if (anchorType == AnchorType.Start)
        {
            // enable tensionar
            if (tensioner != null)
            {
                tensioner.SetActive(true);
                startPoint.position = tensioner.transform.GetChild(0).position;
            }
            if (extermity != null)
            {
                extermity.SetActive(false);
            }
        }
        else
        {
            // enable extremity
            if (tensioner != null)
            {
                tensioner.SetActive(false);
            }
            if (extermity != null)
            {
                extermity.SetActive(true);

                startPoint.position = extermity.transform.GetChild(0).position;
            }
        }
        //if (anchorType == AnchorType.Start)
        //{

        //    var shockAbsorberRef = shockAborberCollsection[0].GetComponent<ShockAbsorberPartRef>();
        //    H_ShockAbsorberSpring = shockAbsorberRef.shockAbsorberSpring.rotation.eulerAngles;
        //}

    }

    public void SetHeightPosit(int id)
    {
        var max = postHeight.Length;
        if (max == 0)
        {
            return;
        }
        for (int i = 0; i < max; i++)
        {
            switch (id)
            {
                case 0:

                    postHeight[i].transform.localScale = new Vector3(postHeight[i].transform.localScale.x, postHeight[i].transform.localScale.y, .3f);


                    break;
                case 1:
                    //postHeight.transform.localScale = new Vector3(postHeight.transform.localScale.x, postHeight.transform.localScale.y, .5f);
                    postHeight[i].transform.localScale = new Vector3(postHeight[i].transform.localScale.x, postHeight[i].transform.localScale.y, .5f);
                    break;
                case 2:
                    //postHeight.transform.localScale = new Vector3(postHeight.transform.localScale.x, postHeight.transform.localScale.y, .7f);
                    postHeight[i].transform.localScale = new Vector3(postHeight[i].transform.localScale.x, postHeight[i].transform.localScale.y, .7f);
                    break;
                default:
                    break;
            }
        }
    }

    void AdjustOrientation()
    {
        if (isRequiredAdjustOrientation)
        {
            return;
        }

        if (anchorType != AnchorType.Mid)
        {
            if (anchorType == AnchorType.End)
            {
                cornerUpdateNewVector = cornerCount * new Vector3(0, 90, 0);
                
            }
            StartCoroutine(AdjustShockAbsorberOrientation());
            StartCoroutine(AdjustTensinerOrientation());
            //AdjustCableTerminationOrientation();
        }
    }

    IEnumerator AdjustShockAbsorberOrientation()
    {
        byte maxSize = (byte)shockAborberCollsection.Count;
        if (variationMeshes.Count != 0)
        {
        postEyeType = variationMeshes[currentVariation].GetComponent<PostEyeType>();

        }

        WaitForSeconds waitForSeconds = new WaitForSeconds(.1f);
        yield return waitForSeconds;
        switch (postEyeType.eyeType)
        {
            case EyeType.horizontel:
                for (int i = 0; i < maxSize; i++)
                {


                    var shockAbsorberRef = shockAborberCollsection[i].GetComponent<ShockAbsorberPartRef>();
                    shockAbsorberRef.shockAbsorberRingA.rotation = Quaternion.Euler(orientataionData.H_RingAOrientation + cornerUpdateNewVector);
                    shockAbsorberRef.shockAbsorberRingB.rotation = Quaternion.Euler(orientataionData.H_RingBOrientation + cornerUpdateNewVector);
                    shockAbsorberRef.shockAbsorberSpring.rotation = Quaternion.Euler(orientataionData.H_ShockAbsorberSpring + cornerUpdateNewVector);
                }
                break;
            case EyeType.vertical:
                for (int i = 0; i < maxSize; i++)
                {
                    var shockAbsorberRef = shockAborberCollsection[i].GetComponent<ShockAbsorberPartRef>();
                    shockAbsorberRef.shockAbsorberRingA.rotation = Quaternion.Euler(orientataionData.V_RingAOrientation + cornerUpdateNewVector);
                    shockAbsorberRef.shockAbsorberRingB.rotation = Quaternion.Euler(orientataionData.V_RingBOrientation + cornerUpdateNewVector);
                    shockAbsorberRef.shockAbsorberSpring.rotation = Quaternion.Euler(orientataionData.V_ShockAbsorberSpring + cornerUpdateNewVector);
                }
                break;

        }
        //if (postEyeType.eyeType == EyeType.horizontel)
        //{

        //    return;
        //}

        //if (postEyeType.eyeType == EyeType.vertical)
        //{

        //    return;
        //}
    }

    IEnumerator AdjustTensinerOrientation()
    {
        byte maxSize = (byte)tensionerCollection.Count;
        postEyeType = variationMeshes[currentVariation].GetComponent<PostEyeType>();

        WaitForSeconds waitForSeconds = new WaitForSeconds(.1f);
        yield return waitForSeconds;
        switch (postEyeType.eyeType)
        {
            case EyeType.horizontel:
                for (int i = 0; i < maxSize; i++)
                {
                    //var shockAbsorberRef = shockAborberCollsection[i].GetComponent<ShockAbsorberPartRef>();
                    tensionerRotateGroupHolder.rotation = Quaternion.Euler(orientataionData.h_tensionerRotate + cornerUpdateNewVector);
                    //shockAbsorberRef.shockAbsorberRingB.rotation = Quaternion.Euler(H_RingBOrientation);
                    //shockAbsorberRef.shockAbsorberSpring.rotation = Quaternion.Euler(H_ShockAbsorberSpring);
                }
                break;
            case EyeType.vertical:
                for (int i = 0; i < maxSize; i++)
                {
                    //var shockAbsorberRef = shockAborberCollsection[i].GetComponent<ShockAbsorberPartRef>();
                    tensionerRotateGroupHolder.rotation = Quaternion.Euler(orientataionData.v_tensionerRotate + cornerUpdateNewVector);
                    //shockAbsorberRef.shockAbsorberRingB.rotation = Quaternion.Euler(V_RingBOrientation);
                    //shockAbsorberRef.shockAbsorberSpring.rotation = Quaternion.Euler(V_ShockAbsorberSpring);
                }
                break;

        }
    }

    public void SetBracket(int id)
    {
        DisableAllGameObject(bracketCollection);
        bracketCollection[id].SetActive(true);
    }

    void DisableAllGameObject(List<GameObject> gameObjects)
    {
        NextBackValu nextBackValu = new NextBackValu(gameObjects);
        nextBackValu.OffGameObjects();
    }

    public void SetShockAbsorber(bool vale, byte shockAbsorberType = 0)
    {
        OffShockAbsorber();
        shockAborberCollsection[shockAbsorberType].SetActive(vale);

        if (anchorType.Equals(AnchorType.Start))
        {
            var max = tensionerCollection.Count;
            switch (vale)
            {
                case true:
                    {
                        for (int i = 0; i < max; i++)
                        {
                            tensionerCollection[i].transform.position = tensionerStartPos.position;
                        }
                    }
                    break;
                case false:
                    {
                        for (int i = 0; i < max; i++)
                        {
                        tensionerCollection[i].transform.position = tensionerEndPosType1.position;

                        }
                        //tensionerCollection[1].transform.position = tensionerEndPosType2.position;
                    }
                    break;

            }
        }
        else
        {
            switch (vale)
            {
                case true:
                    {
                        var size = cableTerminationCollection.Count;
                        for (int i = 0; i < size; i++)
                        {
                            cableTerminationCollection[i].transform.position = tensionerStartPos.position;
                        }
                        var max = tensionerCollection.Count;
                        for (int i = 0; i < max; i++)
                        {
                            tensionerCollection[i].transform.position = tensionerStartPos.position;
                        }
                    }
                    break;
                case false:
                    {
                        var size = cableTerminationCollection.Count;
                        for (int i = 0; i < size; i++)
                        {
                            //cableTerminationCollection[i].transform.position = tensionerStartPos.position;
                        cableTerminationCollection[i].transform.position = tensionerEndPosType1.position;
                        }

                        var max = tensionerCollection.Count;
                        for (int i = 0; i < max; i++)
                        {
                            tensionerCollection[i].transform.position = tensionerEndPosType1.position;
                        }
                        //cableTerminationCollection[1].transform.position = tensionerEndPosType2.position;
                    }
                    break;

            }
        }

            AdjustOrientation();
        

    }

    public void SetTensiner(bool vale, byte tensionerType = 0)
    {
        OffTensiner();
        OffCableTermination();
        var size = tensionerCollection.Count;
            //Debug.Log(tensionerType);
        //Debug.Log(size);
        if (size > tensionerType)
        {
            //Debug.Log("check");
        tensionerCollection[tensionerType].SetActive(vale);

        }
       

        if (anchorType == AnchorType.End && !vale)
        {
            cableTerminationCollection[tensionerType].SetActive(true);
        }
        else if (tensionerType == 2)
        {
            cableTerminationCollection[0].SetActive(true);

        }

            AdjustOrientation();
    }

    void OffShockAbsorber()
    {
        var maxVal = shockAborberCollsection.Count;
        for (int i = 0; i < maxVal; i++)
        {
            shockAborberCollsection[i].SetActive(false);
        }
    }

    void OffTensiner()
    {
        var size = tensionerCollection.Count;
        for (int i = 0; i < size; i++)
        {
            tensionerCollection[i].SetActive(false);
        }
    }

    void OffCableTermination()
    {
        var sizeCT = cableTerminationCollection.Count;
        for (int i = 0; i < sizeCT; i++)
        {
            cableTerminationCollection[i].SetActive(false);
        }
    }

    public void ChangeCornerAnchorEnterExitPoint(int installPositionIndex)
    {
        var installPosition = (InstallPosition)installPositionIndex;
        var size = variationMeshes.Count;
        for (int i = 0; i < size; i++)
        {
            var enterExitPointComponentRef = variationMeshes[i].GetComponent<CircularAnchorEnterExitPoint>();
            if (enterExitPointComponentRef != null)
            {
                enterExitPointComponentRef.SwitchRefStarExitPoint(installPosition);
            }
        }
    }

    public void SetCableTermination(byte index)
    {
        OffCableTermination();

        if (anchorType == AnchorType.End)
        {

            cableTerminationCollection[index].SetActive(true);
        }
        else
        {
            cableTerminationCollection[index].SetActive(true);

        }

            AdjustOrientation();

    }

    public void SetVariation(bool next)
    {
        if (uniqueCorner != null)
        {
            uniqueCorner.SetActive(false);

        }
        if (next)
        {
            if(currentVariation < variationMeshes.Count - 1)
            {
                currentVariation++;
            }
        }
        else
        {
            if (currentVariation > 0)
            {
                currentVariation--;
            }

        }

        OffAllVariation();

        variationMeshes[currentVariation].SetActive(true);
  
        AdjustOrientation();
    }

    void OffAllVariation()
    {
        //debugUpdatedVariation = currentVariation;
        for (int i = 0; i < variationMeshes.Count; i++)
        {
            variationMeshes[i].SetActive(false);
        }

    }

    public void OnUniqeVariation(int id)
    {
        currentVariation = id;
        OffAllVariation();
        variationMeshes[currentVariation].SetActive(true);

    }

    public void OnUniqueCornerVariation(int id)
    {
        currentVariation = id;
        OffAllVariation();
        if (uniqueCorner != null)
        {

        uniqueCorner.SetActive(true);
        }
    }

    public void OndefalultCorner()
    {
        if (uniqueCorner != null)
        {

            uniqueCorner.SetActive(false);
        }
        variationMeshes[currentVariation].SetActive(true);
    }
}

[System.Serializable]
public struct Orientataiondata
{
    public Vector3 H_RingAOrientation;
    public Vector3 H_RingBOrientation;
    public Vector3 H_ShockAbsorberSpring;

    public Vector3 V_RingAOrientation;
    public Vector3 V_RingBOrientation;
    public Vector3 V_ShockAbsorberSpring;
    public Vector3 h_tensionerRotate;
    public Vector3 v_tensionerRotate;
}

using System.Collections;
using UnityEngine;
using AR2;

public class RotateCharacter : MonoBehaviour
{
    public GameObject Character, movingObject;
    public Animator charcterAnime, movingObjectAnime;
    public MoveBetweenTwoPoles moveBetweenTwoPoles;
    public Quaternion characterAngle;
    //public bool greaterValue;

    public SmothlyMoveCharacter sMC;

    public Vector3 targetRotation, charaterStartPos, charLocalPos, movingObjectStartPos;
    public float duration = 1f, yAxis;

    private Quaternion initialRotation, characterStartRota;
    private Quaternion targetQuaternion;
    public bool isAnimationPlaying;

    [SerializeField]
    OverRoofSystemUI m_OverRoofSystemUI;
    [SerializeField]
    OverHeadSystemUI m_overHeadSystemUI;

    bool arModCheck;

    private void OnEnable()
    {
            m_OverRoofSystemUI = FindAnyObjectByType<OverRoofSystemUI>();
        m_overHeadSystemUI = FindAnyObjectByType<OverHeadSystemUI>();
        if (charcterAnime != null && isAnimationPlaying)
        {
                charcterAnime.enabled = true;
        }
        if (m_OverRoofSystemUI != null)
        {
            arModCheck = m_OverRoofSystemUI.isArON;
        }
        if (m_overHeadSystemUI != null)
        {

            arModCheck = m_overHeadSystemUI.isArON;
        }

        if (m_OverRoofSystemUI != null || m_overHeadSystemUI != null)
        {

            if (arModCheck)
                {
                //Debug.Log("testing");
                    Character.transform.rotation = characterStartRota;
                movingObject.transform.position = Vector3.Lerp(sMC.poleB.position, sMC.poleA.position, .5f);
                    Character.transform.position = Vector3.Lerp(sMC.poleB.position, sMC.poleA.position, .5f);
                }
        }
    }
    // Start is called before the first frame update
    private void Start()
    {
        charaterStartPos = Character.transform.position;
        movingObjectStartPos = movingObject.transform.position;

        charLocalPos = Character.transform.localPosition;
        characterStartRota = Character.transform.rotation;
    }
    private void FixedUpdate()
    {
        
        characterAngle = Character.transform.localRotation;
        //cR = Character.transform.rotation;
        //yAxis = characterAngle.y;
    }
    // Update is called once per frame
    void Update()
    {

        //Character.transform.localPosition = new Vector3(Character.transform.localPosition.x, charLocalPos.y, Character.transform.localPosition.z);

        if (charcterAnime.GetCurrentAnimatorStateInfo(0).IsName("Standard Walk"))
        {
            sMC.enabled = true;
        }
        else
        {
            sMC.enabled = false;
        }

        if (charcterAnime.GetCurrentAnimatorStateInfo(0).IsName("IdealAnimation 0 1"))
        {
            if (characterAngle.y > 0.5)
            {
                //greaterValue = true;
                SmoothLeftRightRotation(true);
                return;
            }
            if (characterAngle.y < 0.5)
            {
                //greaterValue = false;
                SmoothLeftRightRotation(false);
                return;
            }
        }


    }


    public void SmoothLeftRightRotation(bool leftRight)
    {
        if (leftRight)
        {
            targetRotation = new Vector3(Character.transform.localRotation.x, 180, Character.transform.localRotation.z);

        }
        else
        {
            targetRotation = new Vector3(Character.transform.localRotation.x, 0, Character.transform.localRotation.z);

        }
        initialRotation = Character.transform.localRotation;
        targetQuaternion = Quaternion.Euler(targetRotation);
        StartCoroutine(SmoothRotate());
        
        
    }

    private IEnumerator SmoothRotate()
    {
        float elapsedTime = 0f;
        while (elapsedTime < duration)
        {
            Character.transform.localRotation = Quaternion.Lerp(initialRotation, targetQuaternion, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // Ensure the rotation reaches the target exactly
        Character.transform.localRotation = targetQuaternion;
    }

    private void OnDisable()
    {
        if (charcterAnime != null)
        {
            //Character.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);

            // Check if the animation is currently playing
            isAnimationPlaying = charcterAnime.enabled ;
            charcterAnime.enabled = false;
            if (movingObjectAnime != null)
            {
            movingObjectAnime.enabled = false;

            }
            else if (moveBetweenTwoPoles != null)
            {

                moveBetweenTwoPoles.enabled = false;
            }

            sMC.StopMoving();
            sMC.enabled = false;
        }
    }


}

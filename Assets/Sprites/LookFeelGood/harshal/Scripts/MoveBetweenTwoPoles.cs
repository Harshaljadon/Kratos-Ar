using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBetweenTwoPoles : MonoBehaviour
{
    [SerializeField] Transform targetPoleA;
    [SerializeField] Transform targetPoleB;
    [SerializeField] Transform currentTargetLock;
    [SerializeField] protected  Vector3 workerCurrentholdPos;

    [SerializeField] protected Vector3 startPosition;

    public float leapDuration = 8f;
    [SerializeField]protected  float timeElapsed;
    //public float yAxisAdjust = -.13f;

    [SerializeField]protected  bool toggleForwardBackward;
    [SerializeField]protected  bool pauseLerp = true;
    public bool PauseLerp { get { return pauseLerp; } set { pauseLerp = value; ContinueLerpingAgain(); } }

    public void OnEnable()
    {
        ToglePosLerp();
        StartCoroutine(ForwardbackWordmove());

    }



    //public void MoveProcessStart()
    //{
    //    ToglePosLerp();
    //    StartCoroutine(ForwardbackWordmove());
    //}

    //private void Update()
    //{

    //}

     void ContinueLerpingAgain()
    {
        workerCurrentholdPos = this.transform.position;
        if (pauseLerp)
        {

            startPosition = workerCurrentholdPos;
        }
        if (transform.gameObject.activeInHierarchy)
        {

        StartCoroutine(ForwardbackWordmove());
        }
    }


    public  void ToglePosLerp()
    {
        toggleForwardBackward = !toggleForwardBackward;
        if (toggleForwardBackward)
        {
            startPosition = transform.position;
            currentTargetLock = targetPoleA;
        }
        else
        {
            startPosition = transform.position;
            currentTargetLock = targetPoleB;

        }
    }

    public  IEnumerator  ForwardbackWordmove()
    {

        timeElapsed = 0f;


        while (timeElapsed < leapDuration && pauseLerp && currentTargetLock != null)
        {
            transform.position = Vector3.Lerp(startPosition, currentTargetLock.position, timeElapsed / leapDuration);
            //transform.position = new Vector3(transform.position.x, yAxisAdjust, transform.position.z);s

            //transform.position = new Vector3(transform.position.x, yAxisAdjust, transform.position.z);
            timeElapsed += Time.deltaTime;
            yield return null; // Wait for the next frame
        }

        //Debug.Log("one round complete");
    }

    public void ResetToggle()
    {
        toggleForwardBackward = false;
    }

    public void OnDisable()
    {
        //Debug.Log("one round complete");
        StopCoroutine(ForwardbackWordmove());
        
    }
}

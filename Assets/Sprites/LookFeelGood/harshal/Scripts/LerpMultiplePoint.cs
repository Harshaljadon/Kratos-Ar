using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AR2;

public class LerpMultiplePoint : MonoBehaviour
{
    [SerializeField] Transform startPointRef;
    [SerializeField] Transform endPointRef;

    public List<Vector3> targetPositionsCollection;
    public List<Vector3> laterUpdateLinePointPose;
    public Vector3  targetPosition;
    public Vector3 tempPos;
    [SerializeField] Vector3 startPosition;
    [SerializeField] Vector3 workerCurrentholdPos;
    [SerializeField] SegmentLine segmentLine1st;
    [SerializeField] bool toggleForwardBackward;
    [SerializeField] bool pauseLerp;
    [SerializeField] bool reachDestiny;
    [SerializeField] bool arModeEnter;
    [SerializeField] GameObject basePlateForm;

    public bool PauseLerp
    {
        get
        {
            return pauseLerp;
        }
        set
        {
            pauseLerp = value;
            ContinueLerpingAgain();
        }
    }

    [SerializeField] float timeElapsed;
    [SerializeField] float leapDuration = 8;
    [SerializeField]
    int posePointIndex;

    int poseChange;

    private void OnEnable()
    {
        arModeEnter = basePlateForm.activeInHierarchy ? false : true;
        posePointIndex = 0;
        ToglePosLerp();

        segmentLine1st.linePointPosUpdateCall += SegmentLine1st_linePointPosUpdateCall;
        reachDestiny = false;
    }

    private void SegmentLine1st_linePointPosUpdateCall()
    {
        //throw new System.NotImplementedException();
        arModeEnter = basePlateForm.activeInHierarchy ? false : true;

        if (!arModeEnter)
        {
            laterUpdateLinePointPose.Clear();
            if (startPointRef != null && endPointRef != null)
            {
                if (segmentLine1st.LinePoinst.Count > 2)
                {

                laterUpdateLinePointPose.Add(new Vector3(startPointRef.position.x, segmentLine1st.LinePoinst[1].y, startPointRef.position.z));
                laterUpdateLinePointPose.Add(new Vector3(endPointRef.position.x, segmentLine1st.LinePoinst[1].y, endPointRef.position.z));
                }
                else
                {

                laterUpdateLinePointPose.Add(startPointRef.position);
                laterUpdateLinePointPose.Add(endPointRef.position);
                }
            }
            else
            {

                laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[0]);
                for (int i = 0; i < segmentLine1st.LinePoinst.Count; i++)
                {
                    int evenNum = i * 2;
                    if (evenNum > 0 && evenNum < segmentLine1st.LinePoinst.Count)
                    {
                    laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[evenNum]);

                    }

                }
                laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[segmentLine1st.LinePoinst.Count-1]);
            }




            if (toggleForwardBackward) //targetPositionsCollection.Count !> 3
            {
                laterUpdateLinePointPose.Reverse();

            }
            //targetPositionsCollection = laterUpdateLinePointPose;
            if (posePointIndex < laterUpdateLinePointPose.Count - 1)
            {
            targetPosition = laterUpdateLinePointPose[posePointIndex];

            }
            this.transform.position = new Vector3(transform.position.x, targetPosition.y, targetPosition.z);
            startPosition = transform.position;
        }
        //Debug.Log("calls");
        //timeElapsed = 0f;
        //StartCoroutine(ForwardbackWordmove()); 
        //leapDuration = targetPositionsCollection.Count / 2 * 8;

    }



    // will on onenable event
    private  void ToglePosLerp()
    {
        //Debug.Log("ToglePosLerp");

        //base.ToglePosLerp();
        ListOfTargetPosUpdate();

        StartCoroutine(ForwardbackWordmove());

    }


    void ContinueLerpingAgain()
    {
        arModeEnter = basePlateForm.activeInHierarchy ? false : true;
        if (arModeEnter)
        {
            tempPos = transform.position;
            laterUpdateLinePointPose.Clear();
            if (startPointRef != null && endPointRef != null)
            {
                if (segmentLine1st.LinePoinst.Count > 2)
                {

                    laterUpdateLinePointPose.Add(new Vector3(startPointRef.position.x, segmentLine1st.LinePoinst[1].y, startPointRef.position.z));
                    laterUpdateLinePointPose.Add(new Vector3(endPointRef.position.x, segmentLine1st.LinePoinst[1].y, endPointRef.position.z));
                }
                else
                {

                    laterUpdateLinePointPose.Add(startPointRef.position);
                    laterUpdateLinePointPose.Add(endPointRef.position);
                }

            }
            else
            {
            laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[0]);
            for (int i = 0; i < segmentLine1st.LinePoinst.Count; i++)
            {
                int evenNum = i * 2;
                if (evenNum > 0 && evenNum < segmentLine1st.LinePoinst.Count)
                {
                    laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[evenNum]);

                }
                //laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[i]);

            }
                laterUpdateLinePointPose.Add(segmentLine1st.LinePoinst[segmentLine1st.LinePoinst.Count - 1]);


            }



            if (toggleForwardBackward) //targetPositionsCollection.Count !> 3
            {
                laterUpdateLinePointPose.Reverse();

            }
            targetPositionsCollection = laterUpdateLinePointPose;
            targetPosition = laterUpdateLinePointPose[posePointIndex];
            this.transform.position = tempPos;
            //this.transform.position = new Vector3(transform.position.x, targetPosition.y, targetPosition.z);
            startPosition = tempPos;
        }

        workerCurrentholdPos = this.transform.position;
        if (pauseLerp)
        {

            startPosition = workerCurrentholdPos;
        }
        //if (!)
        //{
        //    StopCoroutine(ForwardbackWordmove());

        //}
        if (!reachDestiny && transform.gameObject.activeInHierarchy)
        {

        StartCoroutine(ForwardbackWordmove());
        }


       
    }

    void ListOfTargetPosUpdate()
    {
        //List<Vector3>
        toggleForwardBackward = !toggleForwardBackward;



        targetPositionsCollection.Clear();
        if (startPointRef != null && endPointRef != null)
        {
            if (segmentLine1st.LinePoinst.Count > 2)
            {

                targetPositionsCollection.Add(new Vector3(startPointRef.position.x, segmentLine1st.LinePoinst[1].y, startPointRef.position.z));
                targetPositionsCollection.Add(new Vector3(endPointRef.position.x, segmentLine1st.LinePoinst[1].y, endPointRef.position.z));
            }
            else
            {

                targetPositionsCollection.Add(startPointRef.position);
                targetPositionsCollection.Add(endPointRef.position);
            }
            //targetPositionsCollection.Add(startPointRef.position);
            //targetPositionsCollection.Add(endPointRef.position);

        }
        else
        {

            targetPositionsCollection.Add(segmentLine1st.LinePoinst[0]);
            for (int i = 0; i < segmentLine1st.LinePoinst.Count; i++)
            {
                var even = i * 2;
                if (even > 0 && even < segmentLine1st.LinePoinst.Count)
                {

                targetPositionsCollection.Add(segmentLine1st.LinePoinst[even]);
                //targetPositionsCollection.Add(segmentLine1st.LinePoinst[i]);
                }
            }
                targetPositionsCollection.Add(segmentLine1st.LinePoinst[segmentLine1st.LinePoinst.Count - 1]);

        }


  

        if (targetPositionsCollection.Count > 2)
        {
            if (!toggleForwardBackward)
            {
                //Debug.Log("revert calls");
                targetPositionsCollection.Reverse();

            }

            posePointIndex = poseChange = 1;
            transform.position = targetPositionsCollection[0];
            targetPosition = targetPositionsCollection[posePointIndex];
        }
        else
        {
            if (toggleForwardBackward)
            {
                //Debug.Log("revert calls");
                targetPositionsCollection.Reverse();

            }
            poseChange = 0;
            transform.position = targetPositionsCollection[1];
            targetPosition = targetPositionsCollection[posePointIndex];
            //posePointIndex = 1;
        }
 
        startPosition = transform.position;


    }

    void TargetSet()
    {
        targetPosition = targetPositionsCollection[posePointIndex];
        //Debug.Log(targetPosition);
    }

    //public float distribudtionVal ;

    public IEnumerator ForwardbackWordmove()
    {
        //return base.ForwardbackWordmove();

        timeElapsed = 0f;
        //if (targetPositionsCollection.Count > 2)
        //{
        //    var val = targetPositionsCollection.Count - 2;
        //    //Debug.Log(val);
        //distribudtionVal = val / 2f;
        //    //Debug.Log(distribudtionVal);

        //}
        //else
        //{
        //distribudtionVal = targetPositionsCollection.Count / 2f;

        //}
        //if (poseChange == 0)
        //{
     

        //}
        //else
        //{

        ////leapDuration = 8f / distribudtionVal - 1f ;
        //leapDuration = 8f / targetPositionsCollection.Count;
        //}

        //leapDuration = 8f / distribudtionVal  ;
        if (targetPositionsCollection.Count == 2)
        {
            leapDuration = 8f;

        }
        else
        {
            if (targetPositionsCollection.Count / 2 != 0)
            {
                //Debug.Log(targetPositionsCollection.Count / 2);
                leapDuration = 8f / (targetPositionsCollection.Count - 1);
            }
            else
            {

                leapDuration = 8f / targetPositionsCollection.Count;
            }
        }

        while (timeElapsed < leapDuration && pauseLerp)
        {

            transform.position = Vector3.Lerp(startPosition, targetPosition, timeElapsed / leapDuration );
            timeElapsed += Time.deltaTime;
            yield return null; // Wait for the next frame
        }
        if (pauseLerp)
        {
            posePointIndex++;

            if (posePointIndex < targetPositionsCollection.Count - 1 + poseChange)
            {
                TargetSet();
            startPosition = this.transform.position;
            StartCoroutine(ForwardbackWordmove());

            }
            if (posePointIndex == targetPositionsCollection.Count - 1 + poseChange)
            {
                reachDestiny = true;
                posePointIndex = 0;
            }
        }

    }

    public void ResetToggle()
    {
        arModeEnter = basePlateForm.activeInHierarchy ? false : true;

        toggleForwardBackward = false;
    }

    private void OnDisable()
    {
        StopCoroutine(ForwardbackWordmove());
    }

    private void OnDestroy()
    {
        segmentLine1st.linePointPosUpdateCall -= SegmentLine1st_linePointPosUpdateCall;

    }
}

//using System.Collections;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
//using UnityEngine.AddressableAssets;
//using UnityEngine.ResourceManagement.AsyncOperations;

namespace AR2
{
    [ExecuteInEditMode]
    public class SegmentLine : MonoBehaviour
    {

        public Transform parent;
        public LineRenderer lineRenderer;
        float lineWidth = 0.0035f;
        //[SerializeField]
        //float distnaceGapTune = .75f;
        public GameObject intermidiatePrefab;
        //public AssetReference intermidiatePrefabAssetRef;

        public List<Transform> transformPoints = new List<Transform>();
        [SerializeField]
        List<GameObject> intermidiates = new List<GameObject>();

        public List<GameObject> Intermediate { get { return intermidiates; } }

        public Transform startPos;
        public Transform endPos;

        public Transform referanceTransform;

        [SerializeField]
        List<Vector3> linePoints = new List<Vector3>();
        [SerializeField]
        GameObject tensinorPos;
        public event Action linePointPosUpdateCall;

        public List<Vector3> LinePoinst
        {
            get
            {
                return linePoints;
            }
            set
            {
                linePoints = value;
            }
        }

        [SerializeField]
        List<Vector3> intermidiatePoints;

        [SerializeField]
        List<Vector3> intermediateStarEndpointPos;

        //AsyncOperationHandle<GameObject> aOH;
        //OverRoofSystemUI oRSUI;
        //private void Awake()
        //{
        //    oRSUI = FindObjectOfType<OverRoofSystemUI>();

        //}

        private void Start()
        {
            lineRenderer.startWidth = lineWidth;
            lineRenderer.endWidth = lineWidth;
            //if (intermidiatePrefab == null)
            //{
            //    if (intermidiatePrefabAssetRef.RuntimeKeyIsValid())
            //    {
            //        aOH = intermidiatePrefabAssetRef.LoadAssetAsync<GameObject>();
            //        aOH.Completed += AOH_Completed;
            //    }

            //}
            if (parent == null)
            {
                parent = this.transform;
            }


        }

        //private void AOH_Completed(AsyncOperationHandle<GameObject> obj)
        //{
        //    if (obj.Status == AsyncOperationStatus.Succeeded)
        //    {
        //        intermidiatePrefab = obj.Result;
        //        //Addressables.Release(obj);
        //    }
        //}

        //private void OnDisable()
        //{
        //    //if (intermidiatePrefabAssetRef.RuntimeKeyIsValid())
        //    //{

        //    //intermidiatePrefabAssetRef.ReleaseAsset();
        //    //}
        //}

        //private void Update()
        //{
        //    UpdarteLineRendere();
        //}

        public void UpdateLifeline()
        {
 

            UpdarteLineRendere();

            linePointPosUpdateCall?.Invoke();

            Invoke(nameof(UpdarteLineRendere), .1f);
        }

        void UpdarteLineRendere()
        {
            //Debug.Log("calls");
            linePoints.Clear();

            linePoints.Add(startPos.position);

            for (int i = 0; i < intermediateStarEndpointPos.Count; i++)
            {
                linePoints.Add(intermediateStarEndpointPos[i]);
            }

            linePoints.Add(endPos.position);
            lineRenderer.positionCount = linePoints.Count;
            lineRenderer.SetPositions(linePoints.ToArray());
        }

        public void UpdateIntermidiatePrefab(GameObject refPrefab)
        {
            intermidiatePrefab = refPrefab;
        }


        public void UpdateIntermidates(int intermidateCount, [Optional] GameObject tensionerPos, [Optional] SegmentType segmentType,[Optional] float size,[Optional] GameObject tensionerPos2)
        {
            //float distance = Vector3.Distance(startPos.position, endPos.position);
            float total = (intermidateCount + 1);
            //float gap = distance / total;

            for (int i = 0; i < intermidiates.Count; i++)
            {
                Destroy(intermidiates[i]);
            }
            intermidiates.Clear();




            intermidiatePoints = GeneratePointsObjects(total); //, distance, gap
            intermediateStarEndpointPos = new List<Vector3>();


            for (int i = 0; i < intermidiatePoints.Count; i++)
            {
                if (tensionerPos != null && tensionerPos2 != null)
                {
                    var obj = Instantiate(intermidiatePrefab, new Vector3(intermidiatePoints[i].x, tensionerPos.transform.position.y, intermidiatePoints[i].z), Quaternion.Euler(0, 0, 0), parent);
                    intermidiates.Add(obj);
                    tensinorPos = tensionerPos;
                    obj.GetComponent<IntermediateStartEndPoint>().myegment = segmentType;
                    if (size != -1)
                    {

                    obj.GetComponent<IntermediateStartEndPoint>().sizeId = size;
                    }
                    obj.GetComponent<IntermediateStartEndPoint>().tensionerRef = tensionerPos;
                    obj.GetComponent<IntermediateStartEndPoint>().tensionerRef2 = tensionerPos2;

                    obj.GetComponent<IntermediateStartEndPoint>().segMentStartPoint = linePoints[0];
                    obj.GetComponent<IntermediateStartEndPoint>().segmentLine = this;

                    StartCoroutine(ReUpdateLieRenderePoint());
                    //intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().startPoint.position);
                    //intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().endPoint.position);
                }
                else
                {
                    //var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], referanceTransform.rotation, transform);
                    if (referanceTransform == null)
                    {
                        //var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], Quaternion.Euler(0, 0, 0), parent);
                        var obj = Instantiate(intermidiatePrefab, new Vector3(intermidiatePoints[i].x, intermidiatePrefab.transform.position.y, intermidiatePoints[i].z), Quaternion.Euler(0, 0, 0), parent);
                        intermidiates.Add(obj);
                        intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().startPoint.position);
                        intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().endPoint.position);
                    }
                    else
                    {

                        //var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], referanceTransform.rotation, parent);
                        //var obj = Instantiate(intermidiatePrefab, new Vector3(intermidiatePoints[i].x, intermidiatePrefab.transform.position.y, intermidiatePoints[i].z), referanceTransform.rotation, parent);
                        var obj = Instantiate(intermidiatePrefab, new Vector3(intermidiatePoints[i].x, intermidiatePoints[i].y, intermidiatePoints[i].z), referanceTransform.rotation, parent);
                        intermidiates.Add(obj);
                        intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().startPoint.position);
                        intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().endPoint.position);
                    }
                }
               
            }
            UpdateLifeline();
        }

        IEnumerator ReUpdateLieRenderePoint()
        {
            //UpdateLifeline();
            yield return new WaitForSeconds(.15f);
            intermediateStarEndpointPos = new List<Vector3>();

            foreach (var item in intermidiates)
            {

                intermediateStarEndpointPos.Add(item.GetComponent<IntermediateStartEndPoint>().startPoint.position);
                intermediateStarEndpointPos.Add(item.GetComponent<IntermediateStartEndPoint>().endPoint.position);
            }
            //UpdateLifeline();

        }

        public void ArModeIntermediatePos(int intermidateCount)
        {
            //float distance = Vector3.Distance(startPos.position, endPos.position);
            float total = (intermidateCount + 1);
            //float gap = distance / total;

            //for (int i = 0; i < intermidiates.Count; i++)
            //{
            //    Destroy(intermidiates[i]);
            //}
            //intermidiates.Clear();




            intermidiatePoints = GeneratePointsObjects(total); //, distance, gap
            intermediateStarEndpointPos = new List<Vector3>();


            for (int i = 0; i < intermidiatePoints.Count; i++)
            {
                //var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], referanceTransform.rotation, transform);
                if (referanceTransform == null)
                {
                    intermidiates[i].transform.position = new Vector3(intermidiatePoints[i].x, intermidiatePoints[i].y, intermidiatePoints[i].z);
                    //var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], Quaternion.Euler(0, 0, 0), parent);
                    //var obj = Instantiate(intermidiatePrefab, new Vector3(intermidiatePoints[i].x, intermidiatePoints[i].y, intermidiatePoints[i].z), Quaternion.Euler(0, 0, 0), parent);
                    //intermidiates.Add(obj);
                    //intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().startPoint.position);
                    //intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().endPoint.position);
                }
                else
                {
                    intermidiates[i].transform.position = new Vector3(intermidiatePoints[i].x, intermidiatePoints[i].y, intermidiatePoints[i].z);

                    //var obj = Instantiate(intermidiatePrefab, intermidiatePoints[i], referanceTransform.rotation, parent);
                    //var obj = Instantiate(intermidiatePrefab, new Vector3(intermidiatePoints[i].x, intermidiatePoints[i].y, intermidiatePoints[i].z), referanceTransform.rotation, parent);
                    //intermidiates.Add(obj);
                    //intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().startPoint.position);
                    //intermediateStarEndpointPos.Add(obj.GetComponent<IntermediateStartEndPoint>().endPoint.position);
                }
            }
            UpdateLifeline();
        }


        private List<Vector3> GeneratePointsObjects(float numbersOfPoints) //, float distance, float spaceBetweenPoints
        {
            List<Vector3> intermidiatePoints = new List<Vector3>();

            // float numbersOfPoints = distance / spaceBetweenPoints; //Finding numbers of objects to be spawned by dividing "distance" by "spaceBetweenPoints"
            float increnment = 1 / numbersOfPoints; //finding the increment for Lerp this will always be between 0 to 1, because Lerp() takes value between 0 to 1;

            for (int i = 1; i < numbersOfPoints; i++)
            {
                //var tResult = increnment * i * distnaceGapTune;
                //Debug.Log(tResult + this.gameObject.name);
                Vector3 v = Vector3.Lerp(startPos.position, endPos.position, increnment * i); //Find next position using Vector2.Lerp()
                intermidiatePoints.Add(v);//Add the newlly found position in List so that we can spwan the Object at that position.
            }

            return intermidiatePoints;
        }

    }
}

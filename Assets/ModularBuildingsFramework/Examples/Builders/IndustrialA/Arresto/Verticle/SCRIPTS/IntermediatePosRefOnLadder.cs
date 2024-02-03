using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntermediatePosRefOnLadder : MonoBehaviour
{
    public Transform nearestObject; // This will store the reference to the nearest game object
    //[SerializeField] AluRailWireRopeParameter[] aluRailWireRopeParameterGroup;
    //[SerializeField] List<Transform> gameObjectsToCompare;
    //[SerializeField] List<Transform> groupCenterPosToCompare;
    // Start is called before the first frame update
    void OnEnable()
    {
        //gameObjectsToCompare.Clear();
        //groupCenterPosToCompare.Clear();
        FindNearestObject();
    }

    void FindNearestObject()
    {
        List<Transform> gameObjectsToCompare = new List<Transform>();
        List<Transform> groupCenterPosToCompare = new List<Transform>();
        var aluRailWireRopeParameterGroup = FindObjectsByType<AluRailWireRopeParameter>(FindObjectsSortMode.None);
        var size = aluRailWireRopeParameterGroup.Length;
        for (int i = 0; i < size; i++)
        {
            groupCenterPosToCompare.Add(aluRailWireRopeParameterGroup[i].centerpos);
        }
        CompareDisTanceCollection(groupCenterPosToCompare);

        var compRef = nearestObject.GetComponentInParent<AluRailWireRopeParameter>();
        var size1 = compRef.intermediatePosRef.Length;

        for (int i = 0; i < size1; i++)
        {
            gameObjectsToCompare.Add(compRef.intermediatePosRef[i]);
        }

        CompareDisTanceCollection(gameObjectsToCompare);

        transform.position = nearestObject.position;

    }

    void CompareDisTanceCollection(List<Transform> group)
    {
        float shortestDistance = Mathf.Infinity;
        nearestObject = null;

        foreach (Transform gameObjectTransform in group)
        {
            float distance = Vector3.Distance(transform.position, gameObjectTransform.position);

            if (distance < shortestDistance)
            {
                shortestDistance = distance;
                nearestObject = gameObjectTransform;
            }
        }
    }
}

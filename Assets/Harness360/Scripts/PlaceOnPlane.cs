using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


namespace karam
{
    
[RequireComponent(typeof(ARRaycastManager))]
public class PlaceOnPlane : MonoBehaviour
{
    public HarnessManager harnessManager;
    
    //[SerializeField]
    //[Tooltip("Instantiates this prefab on a plane at the touch location.")]
    //GameObject m_PlacedPrefab;

    /// <summary>
    /// The prefab to instantiate on touch.
    /// </summary>
    // public GameObject placedPrefab
    // {
    //     get { return m_PlacedPrefab; }
    //     set { m_PlacedPrefab = value; }
    // }

    /// <summary>
    /// The object instantiated as a result of a successful raycast intersection with a plane.
    /// </summary>
    //public GameObject spawnedObject { get; private set; }

    public bool objectPlaced = false;
    
    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
#if UNITY_EDITOR
        if (Input.GetMouseButton(0))
        {
            var mousePosition = Input.mousePosition;
            touchPosition = new Vector2(mousePosition.x, mousePosition.y);
            return true;
        }
#else
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
#endif

        touchPosition = default;
        return false;
    }

    void Update()
    {
        if(objectPlaced)
            return;
        
        if (!TryGetTouchPosition(out Vector2 touchPosition))
            return;

        if (m_RaycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = s_Hits[0].pose;

            // if (spawnedObject == null)
            // {
            //     spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
            // }
            // else
            // {
            //     spawnedObject.transform.position = hitPose.position;
            // }

            // if (spawnedObject == null)
            // {
            //     if (harnessManager.CurrentHarness.gameObject != null)
            //     {
            //         spawnedObject = harnessManager.CurrentHarness.gameObject;
            //     }
            // }
            // else
            // {
            //     spawnedObject.transform.position = hitPose.position;
            // }
            
            if (harnessManager.CurrentHarness.gameObject != null)
            {
                if (!harnessManager.CurrentHarness.gameObject.activeSelf)
                {
                    harnessManager.CurrentHarness.gameObject.SetActive(true);
                }
                
                harnessManager.CurrentHarness.gameObject.transform.position = hitPose.position;
                objectPlaced = true;
            }
            
            
        }
    }

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    ARRaycastManager m_RaycastManager;
}

}

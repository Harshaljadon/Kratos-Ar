using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class ArPlaceObject : MonoBehaviour
{
    public GameObject ObjectToPlace;
    private ARPlaneManager planeManager;
    private ARPointCloudManager pointCloudManager;

    public TouchControls touchControls;

    public bool isInInteractableZone = false;
    
    public bool b_ArMode = false;

    
    private bool objectPlaced = false;

    public Animator scanAnimator;
    public Animator placeAnimator;
    
    const string k_FadeOffAnim = "FadeOff";
    const string k_FadeOnAnim = "FadeOn";
    
    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
    }

    public void OnArActivate()
    {
        if (!objectPlaced)
        {
            ObjectToPlace.SetActive(false);
        }
    }
    
    
    public void OnArDeActivate()
    {
        ObjectToPlace.SetActive(true);
    }
    
    

    private void Start()
    {
        planeManager = GetComponent<ARPlaneManager>();
        pointCloudManager = GetComponent<ARPointCloudManager>();
        touchControls = GetComponent<TouchControls>();
        
        placeAnimator.gameObject.SetActive(true);
        
        if (!objectPlaced)
        {
            scanAnimator.gameObject.SetActive(true);
            scanAnimator.SetTrigger(k_FadeOnAnim);
        }
        
    }


    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            
            return true;
        }

        touchPosition = default;
        return false;
    }

    void Update()
    {
        
        if (!TryGetTouchPosition(out Vector2 touchPosition))
            return;
        
        if(!b_ArMode)
            return;

        if (m_RaycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = s_Hits[0].pose;
            
            if (!objectPlaced)
            {
                scanAnimator.gameObject.SetActive(false);
                placeAnimator.gameObject.SetActive(true);
                placeAnimator.SetTrigger(k_FadeOnAnim);
            }
            else
            {
                placeAnimator.gameObject.SetActive(false);
                placeAnimator.SetTrigger(k_FadeOffAnim); 
            }
            

            if (ObjectToPlace != null && isInInteractableZone)
            {
                ObjectToPlace.SetActive(true);
                ObjectToPlace.transform.position = hitPose.position;
                
                // SetAllPlanesActive(false);
                // SetAllPointsActive(false);
                objectPlaced = true;
                touchControls.obJectToRotate = ObjectToPlace;
            }
        }
    }

    public void TogglePlaneDetection()
    {
        planeManager.enabled = !planeManager.enabled;

        string planeDetectionMessage = "";
        if (planeManager.enabled)
        {
            SetAllPlanesActive(true);
        }
        else
        {
            SetAllPlanesActive(false);
        }

    }

    /// <summary>
    /// Iterates over all the existing planes and activates
    /// or deactivates their <c>GameObject</c>s'.
    /// </summary>
    /// <param name="value">Each planes' GameObject is SetActive with this value.</param>
    void SetAllPlanesActive(bool value)
    {
        foreach (var plane in planeManager.trackables)
            plane.gameObject.SetActive(value);
    }
    
    /// <summary>
    /// Iterates over all the existing planes and activates
    /// or deactivates their <c>GameObject</c>s'.
    /// </summary>
    /// <param name="value">Each planes' GameObject is SetActive with this value.</param>
    void SetAllPointsActive(bool value)
    {
        foreach (var point in pointCloudManager.trackables)
            point.gameObject.SetActive(value);
    }
    
    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    ARRaycastManager m_RaycastManager;
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MobilemaxCamera : MonoBehaviour
{

    public Transform target;
    public Vector3 targetOffset;
    public float distance = 5.0f;
    public float maxDistance = 20;
    public float minDistance = .6f;
    public float xSpeed = 5.0f;
    public float ySpeed = 5.0f;
    public int yMinLimit = -80;
    public int yMaxLimit = 80;
    public float zoomRate = 10.0f;
    public float panSpeed = 0.3f;
    public float zoomDampening = 5.0f;

    [SerializeField]
    private float xDeg = 0.0f;
    [SerializeField]
    private float yDeg = 0.0f;
    [SerializeField]
    private float currentDistance;
    [SerializeField]
    private float desiredDistance;
    private Quaternion currentRotation;
    private Quaternion desiredRotation;
    private Quaternion rotation;
    [SerializeField]
    private Vector3 position;

    private Vector3 FirstPosition;
    private Vector3 SecondPosition;
    private Vector3 delta;
    private Vector3 lastOffset;
    private Vector3 lastOffsettemp;
    //private Vector3 CameraPosition;
    //private Vector3 Targetposition;
    //private Vector3 MoveDistance;

    public bool arMode = false;

    public float zoomSpeed = 5.0f;
    public float minZoomDistance = 2.0f;
    public float maxZoomDistance = 10.0f;
    public float rotationSpeed = 5.0f;
    public float zoomInput;

    void Start() { Init(); }
    void OnEnable() { Init(); }

    public void Init()
    {
        //If there is no target, create a temporary target at 'distance' from the cameras current viewpoint
        if (!target)
        {
            GameObject go = new GameObject("Cam Target");
            go.transform.position = transform.position + (transform.forward * distance);
            target = go.transform;
        }

        distance = Vector3.Distance(transform.position, target.position);
        currentDistance = distance;
        desiredDistance = distance;

        //be sure to grab the current rotations as starting points.
        position = transform.position;
        rotation = transform.rotation;
        currentRotation = transform.rotation;
        desiredRotation = transform.rotation;

        xDeg = Vector3.Angle(Vector3.right, transform.right);
        //xDeg = Mathf.Deg2Rad* currentRotation.x;
        yDeg = Vector3.Angle(Vector3.up, transform.up);
        //yDeg = Mathf.Deg2Rad * currentRotation.y;
    }

    /*
      * Camera logic on LateUpdate to only update after all character movement logic has been handled.
      */
    void LateUpdate()
    {
        if (!arMode)
        {
//#if !UNITY_ANDROID || !UNITY_IOS
//            zoomInput = Input.GetAxisRaw("Mouse ScrollWheel");
//            HandleZoomInput(zoomInput);
//#endif
//#if UNITY_ANDROID || UNITY_IOS

            if (Input.touchCount == 2 )
            {
                Touch touchZero = Input.GetTouch(0);
                Touch touchOne = Input.GetTouch(1);

                Vector2 touchZeroPreviousPosition = touchZero.position - touchZero.deltaPosition;
                Vector2 touchOnePreviousPosition = touchOne.position - touchOne.deltaPosition;

                float prevTouchDeltaMag = (touchZeroPreviousPosition - touchOnePreviousPosition).magnitude;
                float TouchDeltaMag = (touchZero.position - touchOne.position).magnitude;

                float deltaMagDiff = prevTouchDeltaMag - TouchDeltaMag;
                desiredDistance += deltaMagDiff * Time.deltaTime * zoomRate * 0.0025f * Mathf.Abs(desiredDistance);
                //desiredDistance += deltaMagDiff * Time.deltaTime * zoomRate * 0.0025f * Mathf.Abs(desiredDistance);
                //HandleZoomInput(zoomInputTouch);

            }
            // If middle mouse and left alt are selected? ORBIT
            if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 touchPosition = Input.GetTouch(0).deltaPosition;
                xDeg += touchPosition.x * xSpeed * 0.002f;
                yDeg -= touchPosition.y * ySpeed * 0.002f;
                yDeg = ClampAngle(yDeg, yMinLimit, yMaxLimit);

            }
            if (Input.touchCount == 1 || Input.touchCount == 2)
            {
                desiredRotation = Quaternion.Euler(yDeg, xDeg, 0);
                currentRotation = transform.rotation;
                rotation = Quaternion.Lerp(currentRotation, desiredRotation, Time.deltaTime * zoomDampening);
                transform.rotation = rotation;
            }
//#endif



            if (Input.GetMouseButtonDown(1))
            {
                FirstPosition = Input.mousePosition;
                lastOffset = targetOffset;
            }

            if (Input.GetMouseButton(1))
            {
                SecondPosition = Input.mousePosition;
                delta = SecondPosition - FirstPosition;
                targetOffset = lastOffset + transform.right * delta.x * 0.003f + transform.up * delta.y * 0.003f;

            }
//#if !UNITY_ANDROID || !UNITY_IOS
//            //+++++++++++++++++++++++++++++++++++++++++++++++++++++++

//            // Rotate the camera only when the left mouse button is held down
//            if (Input.GetMouseButton(0))
//            {
//                // Get mouse movement
//                float mouseX = Input.GetAxis("Mouse X");
//                float mouseY = Input.GetAxis("Mouse Y");

//                // Rotate the camera based on mouse movement
//                transform.Rotate(Vector3.up * mouseX * rotationSpeed);
//                transform.Rotate(Vector3.left * mouseY * rotationSpeed);

//                // Optional: Clamp the vertical rotation to limit the camera's pitch
//                float currentXRotation = transform.eulerAngles.x;
//                //currentXRotation = Mathf.Clamp(currentXRotation, 0, 180f);
//                transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, 0);
//            }
//#endif

            //if (zoomInput != 0)
            //{
            //    // Zoom in and out using the mouse wheel
            //    float newZoomDistance = transform.position.y - zoomInput * zoomSpeed;
            //    Debug.Log("ok");
            //    // Clamp the zoom distance to a specified range
            //    newZoomDistance = Mathf.Clamp(newZoomDistance, minZoomDistance, maxZoomDistance);

            //    // Apply the zoom
            //    transform.position = new Vector3(transform.position.x, newZoomDistance, transform.position.z);
            //}

            desiredDistance = Mathf.Clamp(desiredDistance, minDistance, maxDistance);
            currentDistance = Mathf.Lerp(currentDistance, desiredDistance, Time.deltaTime * zoomDampening);
            position = target.position - (rotation * Vector3.forward * currentDistance);

            position = position - targetOffset;
            transform.position = position;
//#if UNITY_ANDROID || UNITY_IOS
//#endif

            // Check if the left mouse button is released
            if (Input.GetMouseButtonUp(0))
            {
                // Release the cursor
                //Cursor.lockState = CursorLockMode.None;
            }
            ////////Orbit Position

    
        }
    }

    private void HandleZoomInput(float zoomInput)
    {
        // Update the desired distance based on input
        desiredDistance += zoomInput * zoomSpeed;

        desiredDistance = Mathf.Clamp(desiredDistance, minDistance, maxDistance);
        currentDistance = Mathf.Lerp(currentDistance, desiredDistance, Time.deltaTime * zoomDampening);
        position = target.position - (rotation * Vector3.forward * currentDistance);

        position = position - targetOffset;
        transform.position = position;

        //// Clamp the desired distance to the specified range
        //desiredDistance = Mathf.Clamp(desiredDistance, minZoomDistance, maxZoomDistance);

        //// Update the camera position based on the desired distance
        //transform.position = new Vector3(transform.position.x, desiredDistance, transform.position.z);
    }


    private static float ClampAngle(float angle, float min, float max)
    {
        if (angle < -360)
            angle += 360;
        if (angle > 360)
            angle -= 360;
        return Mathf.Clamp(angle, min, max);
    }
}
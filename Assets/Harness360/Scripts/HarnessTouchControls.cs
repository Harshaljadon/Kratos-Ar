using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class HarnessTouchControls : MonoBehaviour
{
    public HarnessManager harnessManager;

    public float ZoomSpeed = 0.01f; 

    private float rotationRate = 0.2f;


    void Update()
    {
        if (harnessManager.CurrentHarness?.gameObject != null)
        {
            // If there are two touches on the device...
            if (Input.touchCount == 2)
            {
                // Store both touches.
                Touch touchZero = Input.GetTouch(0);
                Touch touchOne = Input.GetTouch(1);

                // Find the position in the previous frame of each touch.
                Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
                Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

                // Find the magnitude of the vector (the distance) between the touches in each frame.
                float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
                float touchDeltaMag = (touchZero.position - touchOne.position).magnitude;

                // Find the difference in the distances between each frame.
                float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;


                harnessManager.CurrentHarness.transform.localScale += Vector3.one * (deltaMagnitudeDiff * ZoomSpeed);

                float tempScale = Mathf.Clamp(harnessManager.CurrentHarness.transform.localScale.x, 0.5f, 2f);

                harnessManager.CurrentHarness.transform.localScale = Vector3.one * tempScale;
            }
            else if (Input.touchCount == 1)
            {
                foreach (Touch touch in Input.touches)
                {
                    //Debug.Log("Touching at: " + touch.position);

                    if (touch.phase == TouchPhase.Began)
                    {
                        //Debug.Log("Touch phase began at: " + touch.position);
                    }
                    else if (touch.phase == TouchPhase.Moved)
                    {
                        //Debug.Log("Touch phase Moved");
                        harnessManager.CurrentHarness.transform.Rotate(0,
                                         -touch.deltaPosition.x * rotationRate, 0, Space.World);
                    }
                    else if (touch.phase == TouchPhase.Ended)
                    {
                        //Debug.Log("Touch phase Ended");
                    }
                }
            }
        }
    }
}
using UnityEngine;

public class RotateObject : MonoBehaviour
{
    public float rotationSpeed = 50f;
    public RotationAxis rotationAxis = RotationAxis.Y;
    public Transform target;
    public enum RotationAxis
    {
        X,
        Y,
        Z
    }

    // Update is called once per frame
    void Update()
    {
        // Determine the rotation axis based on the enum
        Vector3 axis;
        switch (rotationAxis)
        {
            case RotationAxis.X:
                axis = Vector3.right;
                break;
            case RotationAxis.Y:
                axis = Vector3.up;
                break;
            case RotationAxis.Z:
                axis = Vector3.forward;
                break;
            default:
                axis = Vector3.up;
                break;
        }

        // Rotate the object around the specified axis
        target.Rotate(axis, rotationSpeed * Time.deltaTime);
    }
}

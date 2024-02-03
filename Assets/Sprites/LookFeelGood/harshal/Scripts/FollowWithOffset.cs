using UnityEngine;

public class FollowWithOffset : MonoBehaviour
{
    public Transform target,target1, target2,firstAnchorPos; // Reference to the target game object to follow
    public Vector3  desiredPosition; // Offset from the target game object
    public float followRange = 10f, distance, speed, zoffset; // Range within which to start following the target
    private bool isFollowing = false; // Flag to indicate if the script is currently following the target

    [SerializeField]
    GameLoader gameLoader;
    private void LateUpdate()
    {
        if (target != null)
        {
             distance = Vector3.Distance(transform.position, target.position);
            if (distance > followRange && !isFollowing)
            {
                // Start following the target
                isFollowing = true;
            }
            else if (distance <= followRange && isFollowing)
            {
                // Stop following the target
                isFollowing = false;
            }

            if (isFollowing)
            {

                // Calculate the desired position with the offset
                 desiredPosition = new Vector3(target.position.x, transform.position.y, target.position.z ); //+ offset

                // Smoothly move towards the desired position

                transform.position = Vector3.Lerp(transform.position, desiredPosition, Time.deltaTime* speed);

            }
           


        }
    }

    public void SetTarget1PosToAnchor1Stpos()
    {
        target2.SetParent(firstAnchorPos);
        target2.position = new Vector3(target2.position.x, target2.position.y, firstAnchorPos.position.z);
        target2.SetParent(target1.parent);
    }

    public void ChangeNewTarget()
    {
        target = target2;
    }

    public void ChangeOldTarget()
    {
        if (gameLoader == null)
        {
            Debug.LogWarning("null ref");
        }
        if (gameLoader.currentCornerNumber == 0 && gameLoader != null)
        {

        target = target1;
        }
    }
}

using UnityEngine;
using System.Collections;
using DG.Tweening;

public class Follow : MonoBehaviour
{
	public Transform target; // Target to follow
	public Transform target2; // Target to follow
	Vector3 targetLastPos;
	Tweener tween;

	public float speed, lateCall;
	public bool thisToOneTarget, startStopMoving;


    private void OnEnable()
    {
        // First create the "move to target" tween and store it as a Tweener.
        // In this case I'm also setting autoKill to FALSE so the tween can go on forever
        // (otherwise it will stop executing if it reaches the target)


        //if (thisToOneTarget)
        //{
        //	tween = transform.DOMove(target.position, speed).SetAutoKill(false);

        //}
        //else
        //{
        //	tween = target2.transform.DOMove(target.position, speed).SetAutoKill(false);

        //}
        Invoke(nameof(SetPos),lateCall);

        // Store the target's last position, so it can be used to know if it changes
        // (to prevent changing the tween if nothing actually changes)
        targetLastPos = target.position;
	}

    void SetPos()
    {
        startStopMoving = true;

    }

 //   void Start()
	//{

	//}

	void Update()
	{
        if (!startStopMoving) { return; }
        if (thisToOneTarget)
        {
            transform.position = target.position;

        }
        else
        {
            target2.transform.position = target.position;

        }
        //if (thisToOneTarget)
        //{
        //    transform.position = target.position;

        //}
        //else
        //{
        //    target2.transform.position = target.position;

        //}
        //// Use an Update routine to change the tween's endValue each frame
        //// so that it updates to the target's position if that changed
        //if (targetLastPos == target.position) return;

        //// Add a Restart in the end, so that if the tween was completed it will play again
        //tween.ChangeEndValue(target.position, true).Restart();
        //targetLastPos = target.position;
    }

    private void OnDisable()
    {
        startStopMoving = false;
        CancelInvoke();
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmothlyMoveCharacter : MonoBehaviour
{
    public Transform characterPositionTransform, objMovePos; // Reference to the game object you want to move
    public float moveDistance = 1f; // Distance to move forward and backward
    public float duration = 1f; // Duration of the movement in seconds
    public Animator charcterAnime, objectMoveAnime;
    public MoveBetweenTwoPoles moveBetweenTwoPoles;
    public Transform poleA, poleB;

    public LerpMultiplePoint LerpMultiplePoint;

    public bool turnsAB =  true, arMode, forwardBackword, movementStart ;
    private void OnEnable()
    {
        Mirror();
        if (objectMoveAnime != null)
        {
        objectMoveAnime.enabled = true;

        }
        else if (moveBetweenTwoPoles != null)
        {
            moveBetweenTwoPoles.enabled = true;
        }
        if (LerpMultiplePoint != null)
        {

        LerpMultiplePoint.enabled = true;
        }
        //StartCoroutine(MoveObject());
    }


    private void Update()
    {
        if (turnsAB)
        {
            moveDistance = Vector3.Distance(characterPositionTransform.position, poleA.position);
            forwardBackword = turnsAB;
            if (objectMoveAnime != null)
            {
                objectMoveAnime.SetBool("forwardBackword", forwardBackword);
            }
            //else if(moveBetweenTwoPoles != null && !movementStart)
            //{
            //    movementStart = true;
            //    moveBetweenTwoPoles.moveProcessStart();
            //}
        }
        else
        {
            moveDistance = Vector3.Distance(characterPositionTransform.position, poleB.position);
            forwardBackword = turnsAB;
            if (objectMoveAnime != null)
            {
                objectMoveAnime.SetBool("forwardBackword", forwardBackword);
            }
            //else if (moveBetweenTwoPoles != null && !movementStart)
            //{
            //    movementStart = true;
            //    moveBetweenTwoPoles.moveProcessStart();

            //}
        }
        //if (moveDistance < .014f)
        if (moveDistance < 0.2f)
        {
            //forwardBackword = !forwardBackword;
            charcterAnime.SetBool("Ideal", true); //forwardBackword
            if (moveBetweenTwoPoles != null)
            {

            moveBetweenTwoPoles.enabled = false;
            }
            arMode = false;
        }
    }

    private void LateUpdate()
    {
        
        characterPositionTransform.position = objMovePos.transform.position;
    }

    public bool mirrorToggle;


    private void OnDisable()
    {
        if (!arMode)
        {
        turnsAB = !turnsAB;

        }
        //objectMoveAnime.enabled = false;
        charcterAnime.SetBool("Ideal", false);
        if (LerpMultiplePoint != null)
        {

        LerpMultiplePoint.enabled = false;
        }

    }

    void Mirror()
    {
        
        mirrorToggle = !mirrorToggle;
        charcterAnime.SetBool("ChangeMirror", mirrorToggle);

    }

    public void StopMoving()
    {
        arMode = turnsAB = mirrorToggle = true;
        if (moveBetweenTwoPoles!= null)
        {

        moveBetweenTwoPoles.ResetToggle();
            LerpMultiplePoint.ResetToggle();
        }
        //turnsAB = true;
        //mirrorToggle = true;
        StopAllCoroutines();
    }
}

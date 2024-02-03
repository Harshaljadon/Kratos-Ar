using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VerticalClimbingAnimationController : MonoBehaviour
{
    public Animator playerClimberAnimatorConto, movingObject;
    public Transform poleA, poleB, playerPos;
    public float distBetwePoleAndPlayer;
    public bool turnsAB = true;
    // Start is called before the first frame update
    void Start()
    {
        playerClimberAnimatorConto.applyRootMotion = true;
        movingObject.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {

        if (playerClimberAnimatorConto.GetCurrentAnimatorStateInfo(0).IsName("Climbing"))
        {
            if (turnsAB)
            {
                distBetwePoleAndPlayer = Vector3.Distance(playerPos.position, poleA.position);

            }
            else
            {
                distBetwePoleAndPlayer = Vector3.Distance(playerPos.position, poleB.position);

            }
            playerClimberAnimatorConto.applyRootMotion = false;
            movingObject.enabled = true;   
        }
    }

    public void StartClmbing()
    {
        playerClimberAnimatorConto.SetBool("StartClimbing", true);
    }
}

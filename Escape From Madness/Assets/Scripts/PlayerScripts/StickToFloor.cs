using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StickToFloor : MonoBehaviour
{
    private RaycastHit hit;
    private Vector3 contactNormal;
    Vector3 stickyMoveemnt_vel;

    public bool dontStickToFloor = false;
    bool stickToFloor = false;
    


    [Header("References")]
    [SerializeField] private Rigidbody Rigid;
    [SerializeField] private Transform faceOrientation;

    [Header("Layers")]
    [SerializeField] LayerMask FloorLayer;
    [SerializeField] LayerMask StairLayer;

    [Header("Settings")]
    [SerializeField] float slopeLimit = 3;
    [SerializeField, Tooltip("Y velocity")] float downForce = -1;

    [SerializeField] float forwardRayPos = 0.9f;

  

    



    /// <summary>
    /// If we walk from slope to floor, this method will keep us on the ground.
    /// </summary>
    public void CheckForFloor()
    {

        // If there is no floor, we will try to stick to slope.
        if (!Physics.Raycast(Rigid.position, Vector3.down, out hit, 2f, FloorLayer))
        {

            if (PlayerCollisionv2.Instance.onSlope)
                CheckForSlope();

            return;
        }

        stickToFloor = true;
        contactNormal = hit.normal;

        AdjustVelocity();


    }


    /// <summary>
    /// If we walk from floor to slope, this method will keep us on the ground.
    /// </summary>
    public void CheckForSlope()
    {
      
        if (!Physics.Raycast(Rigid.position, Vector3.down, out hit, 2f, StairLayer))
            return;


        contactNormal = hit.normal; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

        if (Vector3.Angle(contactNormal, Vector3.up) > slopeLimit)
            AdjustVelocity();

    }

   
    /// <summary>
    /// At the end, Player velocity is altered by this script depending on the situation.
    /// </summary>
    void AdjustVelocity()
    {

        float dot = Vector3.Dot(Rigid.velocity, hit.normal);
        float speed = Rigid.velocity.magnitude;



        if (dot < 0f)
            return;

        // If we want to stick to floor, we will get new vwlocity with special speed and fixed y value. (This will make transition more smooth)
        if (stickToFloor)
        {
            stickToFloor = false;

            stickyMoveemnt_vel = (Rigid.velocity - hit.normal * dot).normalized * (speed * 1.1f);
            stickyMoveemnt_vel.y = downForce;

            Rigid.velocity = stickyMoveemnt_vel;
            Debug.Log("stickToFloor");
            return;
        }

        Rigid.velocity = (Rigid.velocity - hit.normal * dot).normalized * speed;
        Debug.Log("stickToSlope");

    }


    /// <summary>
    /// Activates StickyMovement if we meet all the requirements.
    /// </summary>
    /// <param name="wasOnSlope"></param>
    public void CheckForStickyMovement(bool wasOnSlope)
    {
        if (dontStickToFloor)
            return;

        if (!wasOnSlope)
            return;

        if (PlayerCollisionv2.Instance.stepSinceLastGrounded < 1)
            return;

        CheckForFloor();
    }
}


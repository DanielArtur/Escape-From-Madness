using System;
using UnityEngine;

[RequireComponent(typeof(PlayerCollisionv2))]
public class PlayerCollisionv2 : MonoBehaviour
{
    public static PlayerCollisionv2 Instance { get; private set; }

    [Header("References")]
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] StickToFloor stickToFloor;

    [Header("RayCast Settings")]
    [Tooltip("Yellow")]
    public float FloorCheckRadius; //how large the detection for the floors is
    public float bottomOffset; //offset from player centre
    [Tooltip("Red")]
    public float WallCheckRadius; //how large the detection for the walls is
    public float frontOffset; //offset from the players centre 
    [Tooltip("Green")]
    public float RoofCheckRadius; //the amount we check before standing up 
    public float upOffset; //offset upwards
    public float bottomOffset2; //offset from player centre

    //forward check:
    [Header("WallCheck")]
    public bool canCheck = true;
    public bool blockWallRun = false;

    [Header("LedgeGrab Settings")]
    [Tooltip("the position in front of the player where we check for ledges")]
    public float LedgeGrabForwardPos; //the position in front of the player where we check for ledges
    [Tooltip("the position in above of the player where we check for ledges")]
    public float LedgeGrabUpwardsPos;//the position in above of the player where we check for ledges
    [Tooltip("the distance the ledge can be from our raycast before we grab it (this is projects from the top of the wall grab position, downwards")]
    public float LedgeGrabDistance; //the distance the ledge can be from our raycast before we grab it (this is projects from the top of the wall grab position, downwards

    [Header("Layers")]
    public LayerMask FloorLayers; //what layers we can stand on
    public LayerMask WallLayers;  //what layers we can wall run on
    public LayerMask RoofLayers; //what layers we cannot stand up under (for crouching
    public LayerMask LedgeGrabLayers; //what layers we will grab onto

    [Tooltip("Y rotation of camera")]
    [SerializeField] private Transform faceOrientation; // Y rotation of camera

    [Header("SlopeCheck")]
    [SerializeField] float slopeLimit;
    public Vector3 slopeHitNormal;
    public bool onSlope;
    RaycastHit slopeRayHit;

    //Additional variables for FLOORCHECK:
    Collider[] floorColliders;
    // Sphere position
    Vector3 point_floor;
    Vector3 point2_floor;
    public bool onTheFloor = false;
    public bool wasOnSlope = false;


    //Additional variables for WALLCHECK:
    public RaycastHit wallRayHit;

    //Additional variables for RoofCheck:
    Collider[] roofColliders;
    //Sphere position
    Vector3 point_roof;

    //Additional variables for LEDGECHECK:
    Vector3 rayPosition;
    RaycastHit hit;

    //Additional variables for SLOPECHECK:
    Vector3 rayPos_slopeCheck;


    //Other
    public int stepSinceLastGrounded;
    bool exitCollision = false;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
    }

    private void FixedUpdate()
    {
        if (onTheFloor)
            CheckSlope();

        stepSinceLastGrounded++;

    }


    //Check if there is a floor below us before landing. The actual confirmation is complete after Collisison.
    public bool CheckFloor(Vector3 Direction)
    {
        point_floor = transform.position + (Direction * bottomOffset);
        point2_floor = transform.position + (Direction * bottomOffset2);
        floorColliders = Physics.OverlapCapsule(point_floor, point2_floor, FloorCheckRadius, FloorLayers);
        if (floorColliders.Length > 0)
        {
            // Empty our array:
            Array.Clear(floorColliders, 0, floorColliders.Length);
            //we are on the ground
            return true;
        }

        return false;
    }


    //check if there is a wall in the direction we are pressing
    public bool CheckWall()
    {
        if (blockWallRun)
            return false;


        if (Physics.Raycast(transform.position, -faceOrientation.right, out wallRayHit, 2, WallLayers))
        {
            canCheck = false;
            playerMovement.leftWallCheck = true;
            //we are on the wall
            return true;
        }

        if (Physics.Raycast(transform.position, faceOrientation.right, out wallRayHit, 2, WallLayers))
        {
            playerMovement.rightWallCheck = true;
            return true;


        }

        return false;
    }

    //check there is nothing above our head so we can stand up
    public bool CheckRoof(Vector3 Direction)
    {
        point_roof = transform.position + (Direction * upOffset);
        roofColliders = Physics.OverlapSphere(point_roof, RoofCheckRadius, RoofLayers);
        if (roofColliders.Length > 0)
        {
            // Empty our array:
            Array.Clear(roofColliders, 0, roofColliders.Length);

            //we are on the ground
            return true;
        }

        return false;
    }

    public Vector3 CheckLedges()
    {
        rayPosition = transform.position + (faceOrientation.forward * LedgeGrabForwardPos) + (faceOrientation.up * LedgeGrabUpwardsPos);


        if (Physics.Raycast(rayPosition, -faceOrientation.up, out hit, LedgeGrabDistance, LedgeGrabLayers))
            return hit.point;


        return Vector3.zero;
    }



    /// <summary>
    /// Calculate the angle of the floor on which we stand
    /// </summary>
    public void CheckSlope()
    {


        rayPos_slopeCheck = new Vector3(transform.position.x, transform.position.y + 0.5f, transform.position.z);

        if (!Physics.Raycast(rayPos_slopeCheck, Vector3.down, out slopeRayHit, 2f, FloorLayers))
            return;


        slopeHitNormal = slopeRayHit.normal;

        if (Vector3.Angle(slopeHitNormal, Vector3.up) > slopeLimit)
        {


            wasOnSlope = true;


            onSlope = true;

        }
        else onSlope = false;



    }


    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("Floor"))
        {
            onTheFloor = true;
            

            stepSinceLastGrounded = 0;


           



        }

      
    }

    private void OnCollisionExit(Collision collision)
    {

        stickToFloor.CheckForStickyMovement(wasOnSlope);
        wasOnSlope = false;

        onTheFloor = false;

     

        exitCollision = true;
    }



    void OnDrawGizmosSelected()
    {
        //floor check
        Gizmos.color = Color.yellow;
        Vector3 Pos = transform.position + (-faceOrientation.up * bottomOffset);
        Gizmos.DrawSphere(Pos, FloorCheckRadius);
        //wall check
        //   Gizmos.color = Color.red;
        //  Vector3 Pos2 = transform.position + (faceOrientation.forward * frontOffset);
        //Gizmos.DrawSphere(Pos2, WallCheckRadius);
        //roof check
        Gizmos.color = Color.green;
        Vector3 Pos3 = transform.position + (faceOrientation.up * upOffset);
        Gizmos.DrawSphere(Pos3, RoofCheckRadius);
        //Ledge check
        Gizmos.color = Color.cyan;
        Vector3 Pos4 = transform.position + (faceOrientation.forward * LedgeGrabForwardPos) + (faceOrientation.up * LedgeGrabUpwardsPos);
        Gizmos.DrawLine(Pos4, Pos4 + (-faceOrientation.up * LedgeGrabDistance));

    }
}

using System;
using UnityEngine;

public class PlayerCollisionv2 : MonoBehaviour
{
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

    //Additional variables for FLOORCHECK:
    Collider[] floorColliders;
    // Sphere position
    Vector3 point_floor;
    Vector3 point2_floor;

    //Additional variables for WALLCHECK:
    Collider[] wallColliders;
    //Sphere position
    Vector3 point_wall;

    //Additional variables for RoofCheck:
    Collider[] roofColliders;
    //Sphere position
    Vector3 point_roof;

    //Additional variables for LEDGECHECK:
    Vector3 rayPosition;
    RaycastHit hit;

    //check if there is floor below us
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
    public bool CheckWall(Vector3 Direction)
    {

        if (!blockWallRun)
        {

            point_wall = transform.position + (Direction * frontOffset);
            wallColliders = Physics.OverlapSphere(point_wall, WallCheckRadius, WallLayers);
            if (wallColliders.Length > 0)
            {
                canCheck = false;

                // Empty our array:
                Array.Clear(wallColliders, 0, wallColliders.Length);

                //we are on the ground
                return true;
            }

        }



        return false;
    }

    //check there is nothing above our head so we can stand up
    public bool CheckRoof(Vector3 Direction)
    {
        point_roof = transform.position + (Direction * upOffset);
        roofColliders = Physics.OverlapSphere(point_roof, WallCheckRadius, RoofLayers);
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

    void OnDrawGizmosSelected()
    {
        //floor check
        Gizmos.color = Color.yellow;
        Vector3 Pos = transform.position + (-faceOrientation.up * bottomOffset);
        Gizmos.DrawSphere(Pos, FloorCheckRadius);
        //wall check
        Gizmos.color = Color.red;
        Vector3 Pos2 = transform.position + (faceOrientation.forward * frontOffset);
        Gizmos.DrawSphere(Pos2, WallCheckRadius);
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

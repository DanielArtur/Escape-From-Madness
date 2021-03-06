using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField] private PlayerMovementv3 PlayerController;
    [SerializeField] private Transform orientationForBody;

    [Header("Turning")]
    public float TurnSpeed; //how fast we turn when on the ground
    public float TurnSpeedInAir; //how fast we turn when in air
    public float TurnSpeedOnWalls; //how fast we turn when on the walls
    public float LookUpSpeed; //how fast we look up and down
    private float YTurn; //how much we have turned left and right
    private float XTurn; //how much we have turned Up or Down
    public float MaxLookAngle = 65; //how much we can look up
    public float MinLookAngle = -30; //how much we can look down

    // Input variables
    private float CamX;
    private float CamY;

    // Timer:
    private float Del;


    void Update()
    {
        // DeltaTime
        Del = Time.deltaTime;

        //get our players rotation amount for turning
        CamX = Input.GetAxis("MouseX");
        CamY = Input.GetAxis("MouseY");




        if (PlayerController.CurrentState == PlayerMovementv3.PlayerStates.Grounded)
        {
            //turn our player with default speed:
            TurnCamera(CamX, Del, TurnSpeed, CamY);
        }
        else if (PlayerController.CurrentState == PlayerMovementv3.PlayerStates.InAir)
        {


            //turn our player with the in air modifier
            TurnCamera(CamX, Del, TurnSpeedInAir, CamY);
        }
        else if (PlayerController.CurrentState == PlayerMovementv3.PlayerStates.OnWalls)
        {

            //turn our player with the onWall modifier
            TurnCamera(CamX, Del, TurnSpeedOnWalls, CamY);


        }



    }

    void TurnCamera(float Hor, float D, float turn, float Ver)
    {
        //add our inputs to our turn value
        YTurn += (Hor * D) * turn;

        XTurn -= (Ver * D) * LookUpSpeed;
        XTurn = Mathf.Clamp(XTurn, MinLookAngle, MaxLookAngle);

        //turn our character
        transform.rotation = Quaternion.Euler(XTurn, YTurn, PlayerController.tilt);
        orientationForBody.rotation = Quaternion.Euler(0, YTurn, 0);

    }




}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField] private PlayerMovementv3 PlayerController;
    [SerializeField] private Transform orientationForPlayer;
    

    [Header("Turning")]
    public float TurnSpeed; //how fast we turn when on the ground
    private float TurnSpeedInAir; //how fast we turn when in air
    private float TurnSpeedOnWalls; //how fast we turn when on the walls
    private float LookUpSpeed; //how fast we look up and down
    private float YTurn; //how much we have turned left and right
    private float XTurn; //how much we have turned Up or Down
    public float MaxLookAngle = 65; //how much we can look up
    public float MinLookAngle = -30; //how much we can look down

    // Input variables
    private float CamX;
    private float CamY;

    // Timer:
    private float Del;


    // Other:
    public bool canMove = true;
    bool wasLimited = false;
    private void Awake()
    {
        TurnSpeedInAir = TurnSpeed / 2;
        TurnSpeedOnWalls = TurnSpeed / 4.33333333333333333333f;
        LookUpSpeed = TurnSpeed / 1.315789473684210526f;

        
    }


    float y;
    float y2;

    
    void Update()
    {
        
        // DeltaTime
        Del = Time.deltaTime;

        //get our players rotation amount for turning
        CamX = Input.GetAxis("MouseX");
        CamY = Input.GetAxis("MouseY");

        if (!canMove)
            return;


        if (PlayerController.CurrentState == PlayerMovementv3.PlayerStates.Grounded)
        {
            //turn our player with default speed:
            TurnCamera(CamX, TurnSpeed, CamY);
        }
        else if (PlayerController.CurrentState == PlayerMovementv3.PlayerStates.InAir)
        {


            //turn our player with the in air modifier
            TurnCamera(CamX, TurnSpeedInAir, CamY);
        }
        else if (PlayerController.CurrentState == PlayerMovementv3.PlayerStates.OnWalls)
        {

            //turn our player with the onWall modifier
            TurnCamera(CamX, TurnSpeedOnWalls, CamY);


        }

       

    }
    Vector3 currentOrientation;
    void TurnCamera(float Hor, float turn, float Ver)
    {
        //add our inputs to our turn value
        YTurn += Hor * turn;

        XTurn -= Ver * LookUpSpeed;
        XTurn = Mathf.Clamp(XTurn, MinLookAngle, MaxLookAngle);

        if(PlayerController.isSliding)
        {
            if (!wasLimited)
                SetLimitForCameraRotation();

            YTurn = Mathf.Clamp(YTurn, y, y2);
           
        }else
            wasLimited = false;

        //turn our character
        transform.rotation = Quaternion.Euler(XTurn, YTurn, PlayerController.tilt);
        orientationForPlayer.rotation = Quaternion.Euler(0, YTurn, 0);

        

    }

    

    void SetLimitForCameraRotation()
    {
        wasLimited = true;
        y = YTurn - 55;
        y2 = YTurn + 55;
        Debug.Log("calc");
    }
   
   


}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovementv2 : MonoBehaviour
{
    public enum PlayerStates
    {
        grounded,
        inair,
        onwall,
        ledgegrab


    }
    public PlayerStates currentState;

    [Header("Physics")]

    public float MaxSpeed;
    public float MaxSpeedForBackWards; // Kun menn‰‰n oikealle, vasemmalle tai taaksepp‰in
    [Range(0, 1)]
    public float InAirControl;  //kuinka paljon controllia pelaajalla on ilmassa

    private float accelerationSpeed;  // Pelaajan nopeus

    public float acceleration; // nopeuden vahvistus
    public float Decceleration;
    public float DirectionalControl; // Miten nopeasti voidaan vaihtaa suuntaa
    private float InAirTimer;
    private float GroundTimer;
    private float AdjustmentAmt; // kuinka paljon pelaaja voi muuttaa esim. liukumista

    [Header("Jumping")]
    public float JumpAmt;

    [Header("Turning")]

    public float TurnSpeed;
    public float TurnSpeedInAir;
    public float TurnSpeedOnWalss;

    public float LookUpSpeed;
    public Camera Head;

    private float YTurn; 
    private float XTurn;
    public float MaxLookAngle;
    public float MinLookAngle;

    [Header("WallRuns")]
    public float WallRunTime = 1; // how long we can run on walls
    private float ActWallTime = 0;  // the timer for this
    public float WallRunUpWardsMovement; // how much we run up walls
    public float WallRunSpeedAcceleration = 2f;  // how quick we build speed up walls


    [Header("Sliding")]
    public float PlayerCtrl; // how much control does player have during function like sliding
    public float SlideSpeedLimit; // how fast we have to be traveling to slide

    [Header("Ledge Grab")]
    public float PullUpTime = 0.5f; // how long it takes to pull up a ledge
    private Vector3 OriginPos;
    private Vector3 LedgePos;
    private float ActPullUpTime;

    private PlayerCollission Coli;
    private Rigidbody rb;
    private Animator playerAnimator;
    private void Start()
    {
        Coli = GetComponent<PlayerCollission>();
        rb = GetComponent<Rigidbody>();
        playerAnimator = GetComponent<Animator>();

        AdjustmentAmt = 1;
    }
    private void Update()
    {
        float XMOV = Input.GetAxis("Horizontal");
        float YMOV = Input.GetAxis("Vertical");

        if (currentState == PlayerStates.grounded)
        {
            // check for jumping:
            if (Input.GetButtonDown("Jump"))
                JumpUp();


            // check for the ground:
            bool checkG = Coli.CheckFloor(-transform.up);
            if(!checkG)
            {
                InAir();



            }

        }
        else if (currentState == PlayerStates.inair)
        {

            // check for ledges to grab onto:
            if(Input.GetButtonDown("Grab"))  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            {
                Vector3 Ledge = Coli.CheckLedges();
                if (Ledge != Vector3.zero)
                {
                    LedgeGrab(Ledge);
                    return;

                }


            }
            // check for walls to run on:
            bool Wall = CheckWall(XMOV, YMOV);

            if(Wall)
            {
                WallRun();
                return;


            }

            //check for the ground:
            bool checkG = Coli.CheckFloor(-transform.up);
            if (checkG && InAirTimer > 0.2f)
            {
                OnGround();



            }


        }
        else if (currentState == PlayerStates.ledgegrab)
        {


            // remove any movement in velocity:
            rb.velocity = Vector3.zero;

        }
        else if (currentState == PlayerStates.onwall)
        {
            // check for the walls to run on
            bool Wall = CheckWall(XMOV, YMOV);

            if(!Wall)
            {
                InAir();
                return;


            }

            bool onGround = Coli.CheckFloor(-transform.up);
            if(onGround)
            {
                OnGround();


            }

        }
    }

    private void FixedUpdate()
    {
        float Del = Time.deltaTime;

        float XMOV = Input.GetAxis("Horizontal");
        float YMOV = Input.GetAxis("Vertical");

        float CamX = Input.GetAxis("Mouse X");
        float CamY = Input.GetAxis("Mouse Y");

        LookUpDown(CamY, Del);

        if (currentState == PlayerStates.grounded)
        {
            // increase our grounded timer:

            if (GroundTimer > 10)
                GroundTimer += Del;


            // get the magnitude of our inputs:
            float inputmag = new Vector2(XMOV, YMOV).normalized.magnitude;
            // get which speed to apply to player (forwards of backwards)
            float targetSpd = Mathf.Lerp(MaxSpeedForBackWards, MaxSpeed, YMOV);
            // check for crouching (if so apply chrouch speed)

            lerpSpeed(inputmag, Del, targetSpd);

            MovePlayer(XMOV, YMOV, Del, 1);
            TurnPlayer(CamX, Del, TurnSpeed);


            if (AdjustmentAmt < 1) // regain player control
                AdjustmentAmt += Del * PlayerCtrl;
            else
                AdjustmentAmt = 1;
        }
        else if (currentState == PlayerStates.inair)
        {

            if (InAirTimer < 10)
                InAirTimer += Del;

            // move our player in air, with less control
            MovePlayer(XMOV, YMOV, Del, InAirControl);

            TurnPlayer(CamX, Del, TurnSpeedInAir);

        }
        else if (currentState == PlayerStates.ledgegrab)
        {


            // increase our pullUp timer:
            ActPullUpTime += Del;

            float pullUpLerp = ActPullUpTime / PullUpTime;

            if(pullUpLerp < 0.5)
            {
                // pull up vertically
                float lamt = pullUpLerp * 2;
                Vector3 LPos = new Vector3(OriginPos.x, LedgePos.y, OriginPos.z);
                transform.position = Vector3.Lerp(OriginPos, LPos, lamt);

            } 
            else if(pullUpLerp <= 1)
            {
                if (OriginPos.y != LedgePos.y) // set new origin position from our curent pos
                    OriginPos = new Vector3(transform.position.x, LedgePos.y, transform.position.z);

                // now lerp tio edge position:
                float lamt = (pullUpLerp - 0.5f) * 2f;
                transform.position = Vector3.Lerp(OriginPos, LedgePos, pullUpLerp);
            
            }
            else
            {
                // we finished a pullUp!
                OnGround();
            }


        }
        else if (currentState == PlayerStates.onwall)
        {





        }
    }

    void JumpUp()
    {
        Vector3 Vel = rb.velocity;
        Vel.y = 0;

        rb.velocity = Vel;

        rb.AddForce(transform.up * JumpAmt, ForceMode.Impulse);

        InAir();

    }



    void lerpSpeed(float Mag, float d, float spd)
    {

        // our current speed timed by the magnitude of our  inputs
        float LaMT = spd * Mag;

        // if we are moving or stopping
        float Accel = acceleration;
        if (Mag == 0)
        {
            Accel = Decceleration;
        }

        // lerp our actual speed:
        accelerationSpeed = Mathf.Lerp(accelerationSpeed, LaMT, d * Accel);


    }

    void MovePlayer(float hor, float ver, float d, float Control)
    {
        // find direction to move
        Vector3 MovDir = (transform.forward * ver) + (transform.right * hor);
        MovDir = MovDir.normalized;

        // if we are not pressing an input, carryon in the direction of velocity:
        if (hor == 0 && ver == 0)
            MovDir = rb.velocity.normalized;


        // multiply our direction by our speed
        MovDir = MovDir * accelerationSpeed;

        MovDir.y = rb.velocity.y;

        // apply acceleration
        float Acel = (DirectionalControl * AdjustmentAmt) * Control; // how much control we have over our movement

        Vector3 LerpVel = Vector3.Lerp(rb.velocity, MovDir, Acel * d);
        rb.velocity = LerpVel;



    }

    void TurnPlayer(float XAmt, float D,  float Spd)
    {
        YTurn += (XAmt * D) * Spd;

        transform.rotation = Quaternion.Euler(0, YTurn, 0);


    }

    void LookUpDown(float YAmt, float d)
    {
        XTurn -= (YAmt *  d) *LookUpSpeed;
        XTurn = Mathf.Clamp(XTurn, MinLookAngle, MaxLookAngle);

        Head.transform.localRotation = Quaternion.Euler(XTurn, 0, 0);
    }

    void InAir()
    {
        InAirTimer = 0;
        currentState = PlayerStates.inair;


    }

    void OnGround()
    {
        GroundTimer = 0;
        currentState = PlayerStates.grounded;

    }
    void LedgeGrab(Vector3 LPos)
    {
        // reset all our ledge information
        LedgePos = LPos;
        OriginPos = transform.position;
        ActPullUpTime = 0;
        currentState = PlayerStates.ledgegrab;

    }

    bool CheckWall(float XM, float YM)
    {
        if (XM == 0 && YM == 0)
            return false;

        Vector3 WallDirection = transform.forward * YM + transform.right * XM;
        WallDirection = WallDirection.normalized;

        bool WallCol = Coli.CheckWalls(WallDirection);

        return WallCol;


    }
    void WallRun()
    {

        currentState = PlayerStates.onwall;



    }



}

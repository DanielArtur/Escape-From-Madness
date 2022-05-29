using System.Collections;
using UnityEngine;

/// <summary>
/// Movement system For Player. 
/// </summary>
[RequireComponent(typeof(Rigidbody))]
public class PlayerMovementv3 : MonoBehaviour
{
    public enum PlayerStates
    {
        Grounded,//on the ground
        InAir, //in the air
        OnWalls, //running on the walls
        LedgeGrab, //pulling up a ledge
    }
    ////////////////////////////////////////////////////////////////Input////////////////////////////////////////////////////////////////////
    // For Update()
    float XMoveInUpdate;
    float YMoveInUpdate;
    // For FixedUpdate()
    float horInputInFixed;
    float verInputInFixed;

    ////////////////////////////////////////////////////////////////FixedTimer////////////////////////////////////////////////////////////////////
    float DeltaForUpdate;
    float DeltaForFixed;

    ////////////////////////////////////////////////////////////////Refrences////////////////////////////////////////////////////////////////////
    [Header("References")]
    [SerializeField] private PlayerCollisionv2 playerCollision;
    [SerializeField] private Rigidbody Rigid;
    // [SerializeField] private Animator Anim;
    [SerializeField] private Transform faceOrientation;
    public Camera Cam; //what will function as our players head to tilt up and down (this is a pivot point_floor in our model that the cameras are children of
    [Tooltip("Walls that can be detected by rightWallCheck and leftWallCheck rays")]
    public LayerMask wallLayers; // Walls that can be detected by rightWallCheck and leftWallCheck rays


    ////////////////////////////////////////////////////////////////Physics////////////////////////////////////////////////////////////////////
    [Header("Physics")]
    private float currentMaxSpeed; //how fast we run forward
    public float maxSpeedOnGround = 18;
    public float maxSpeedOnWalls = 24;
    public float BackwardsSpeed; //how fast we run backwards
    public float InAirControl; //how much control you have over your movement direction when in air

    private float ActSpeed; //how much speed is applied to the rigidbody
    private float targetSpd; // calculated/finished speed
    public float Acceleration; //how fast we build speed
    public float Decceleration; //how fast we slow down
    public float DirectionControl = 8; //how much control we have over changing direction
    public PlayerStates CurrentState; //the current state the player is in
    private float InAirTimer; //how long we are in the air for (this is for use when wall running or falling off the ground
    private float OnGroundTimer;
    private float AdjustmentAmt; //the amount added to our player acceleration, this is used for adjusting to new speeds such as when we slide


    ////////////////////////////////////////////////////////////////Jumping////////////////////////////////////////////////////////////////////
    [Header("Jumping")]
    public float JumpHeight; //how high we jump

    ////////////////////////////////////////////////////////////////WallRunning////////////////////////////////////////////////////////////////////
    [Header("Wall Running")]
    public float WallRunTime = 2f; //how long we can run on walls
    private float ActWallRunTime = 0; //how long we are actually on a wall
    public float TimeBeforeWallRun = 0.2f; //how long we have to be in the air before we can wallrun
    public float WallRunUpwardsMovement = 2f; //how much we move up a wall when running on it (make this 0 to just slightly move down a wall we run on
    public float WallRunSpeedAcceleration = 2f; //how quickly we build speed to run up walls


    // Camera Tilt:
    public float tilt;
    [SerializeField] private float camTilt;
    [SerializeField] private float camTiltTime;

    ////////////////////////////////////////////////////////////////Wall Jumping////////////////////////////////////////////////////////////////////
    [Header("Wall Jumping")]
    public bool leftWallCheck;   // From witch direction to jump
    public bool rightWallCheck;
    [SerializeField] private float wallCheckDistance;  // at what diostance we can check walls
    public bool infiniteJumping = false;  // Can we jump from walls many times before landing
    [SerializeField] bool highJump = false;

    // WallJump force:
    [SerializeField] float wallJumpForce; // how far can we jump from wall
    [SerializeField] float wallRunJumpForwardVel;
    [SerializeField] float wallJumpHeight; // how high to jump from wall 
    // WallJump direction:
    private Vector3 wallJumpDir;

    ////////////////////////////////////////////////////////////////Crouching////////////////////////////////////////////////////////////////////
    [Header("Crouching")]
    public float CrouchSpeed = 10; //how fast we move when crouching
    private bool Crouch;

    // Colliders for crouching and standing
    [SerializeField] CapsuleCollider crouchCap; // Capsiule for crouching
    [SerializeField] CapsuleCollider standCap; // Capsule for standing

    [SerializeField] private float cam_CrouchHeight; // How low the ca,era goes when crouching
    [SerializeField] private float cam_SlideHeight; // How low the ca,era goes when sliding

    private Vector3 camTargetPos; // Camera target position according to the situation 
    private Vector3 defaultCamPos; // Camera standing/original position

    [SerializeField] private float cam_crouchingSpeed; // How fast we crouch
    [SerializeField] private float cam_standingSpeed; // How fast we go to stand
    [SerializeField] private float cam_slidingSpeed; // How fast we go to sliding

    private float cam_StepForStanding;
    private float cam_StepForCrouching;
    private float cam_StepForSliding;
    ////////////////////////////////////////////////////////////////Sliding////////////////////////////////////////////////////////////////////
    [Header("Sliding")]
    public float SlideAmt; //how far we slide when pressing crouch
    public float SlideSpeedLimit; //how fast we have to be traveling before a crouch will trigger a slide
    public float SlideControl; //how much we adjust to our slide speed and regain player control
    public bool canSlide = true;
    public bool sliding = false;
    public bool wasSliding = false;

    [SerializeField] float control_Sliding = 10; // How much control we have while sliding
    bool canStartSliding = false;

    ////////////////////////////////////////////////////////////////WallGrabbing////////////////////////////////////////////////////////////////////
    [Header("WallGrabbing")]
    public float PullUpTime; //the time it takes to pull onto a ledge
    private float ActPullTm; //the actual time it takes to pull up a ledge
    private Vector3 OrigPos; //the original Position before grabbing a ledge
    private Vector3 LedgePos; //the ledge position to move to
    private bool canGrab = true;

    ////////////////////////////////////////////////////////////////FOV Management////////////////////////////////////////////////////////////////////
    [Header("FOV Management")]
    public float cam_CurrentMaxFov;
    public float FOVSpeed; //how fast we must go before we reach max fov
    [SerializeField] float cam_defaultFOV;

    [SerializeField] float cam_WallFOV = 160;
    [SerializeField] float cam_DefaultMaxFOV = 120;
    [SerializeField] float cam_SlideFOV = 140;




    public bool firstTime = true;

    public bool candebug = true;
    ////////////////////////////////////////////////////////////////Start////////////////////////////////////////////////////////////////////
    void Start()
    {
        defaultCamPos = Cam.transform.localPosition;
        camTargetPos = defaultCamPos;


        Cam.fieldOfView = cam_defaultFOV;
        crouchCap.enabled = false;
        standCap.enabled = true;
        AdjustmentAmt = 1;

        cam_CurrentMaxFov = cam_DefaultMaxFOV;
        currentMaxSpeed = maxSpeedOnGround;
    }

    ////////////////////////////////////////////////////////////////Update////////////////////////////////////////////////////////////////////

    bool sloperun = false;
    void Update()
    {
        DeltaForUpdate = Time.deltaTime;

        XMoveInUpdate = Input.GetAxis("Horizontal");
        YMoveInUpdate = Input.GetAxis("Vertical");

        HandleFov(DeltaForUpdate);

        //Rotate our camera
        CameraTilt();




        if (sliding && !CheckSlidingForFOV())
        {
            Debug.Log("SLide");
            cam_StepForSliding = cam_slidingSpeed * Time.deltaTime;
            camTargetPos = Vector3.MoveTowards(Cam.transform.localPosition, defaultCamPos + Vector3.down * cam_SlideHeight, cam_StepForSliding);
            cam_CurrentMaxFov = cam_SlideFOV;

        }
        else
        {




            if (Crouch)
            {
                cam_StepForCrouching = cam_crouchingSpeed * Time.deltaTime;
                camTargetPos = Vector3.MoveTowards(Cam.transform.localPosition, defaultCamPos + Vector3.down * cam_CrouchHeight, cam_StepForCrouching);
                Debug.Log("Crouch");

            }
            else
            {
                cam_StepForStanding = cam_standingSpeed * Time.deltaTime;
                camTargetPos = Vector3.MoveTowards(Cam.transform.localPosition, defaultCamPos, cam_StepForStanding);



            }
        }




        //*********************************************Grounded*********************************************//

        if (CurrentState == PlayerStates.Grounded)
        {


            //if we press jump
            if (Input.GetButtonDown("Jump"))
            {
                //jump upwards
                JumpUp();
            }
        }
        //*********************************************InAir***********************************************//
        else if (CurrentState == PlayerStates.InAir)
        {
            //check for ledge grabs
            if (Input.GetButton("Grab") && canGrab)
            {
                Vector3 LedgePos = playerCollision.CheckLedges();
                if (LedgePos != Vector3.zero)
                {
                    LedgeGrab(LedgePos);
                }
            }

            //Check if there is a wall to run on
            bool Wall = CheckWalls(XMoveInUpdate, YMoveInUpdate);

            //we are on the wall
            if (Wall)
            {
                if (InAirTimer > TimeBeforeWallRun)
                {
                    SetOnWall();
                    return;
                }
            }

            //check for the ground 
            bool Grounded = playerCollision.CheckFloor(-faceOrientation.up);

            //we are on the ground (and have been in the air for a short time, to prevent multiple jump glitched
            if (Grounded && InAirTimer > 0.25f)
            {
                SetOnGround();
            }
        }
        //*********************************************OnWalls*********************************************//
        else if (CurrentState == PlayerStates.OnWalls)
        {

            //check for ledge grabs
            if (Input.GetButton("Grab"))
            {
                Vector3 LedgePos = playerCollision.CheckLedges();

                if (LedgePos != Vector3.zero)
                {
                    LedgeGrab(LedgePos);
                }
            }

            //Check if there is a wall to run on
            bool Wall = CheckWalls(XMoveInUpdate, YMoveInUpdate);

            //we are no longer on the wall, fall off it
            if (!Wall)
            {
                SetInAir();
                leftWallCheck = false;
                rightWallCheck = false;
                return;
            }

            //check for the ground 
            bool Grounded = playerCollision.CheckFloor(-faceOrientation.up);

            //we are on the ground
            if (Grounded)
            {
                SetOnGround();
            }
        }
        //*********************************************LedgeGrab**********************************************//
        else if (CurrentState == PlayerStates.LedgeGrab)
        {
            //clamp our rigid velocity to nothing
            Rigid.velocity = Vector3.zero;
            //tick ledge grab time 
            ActPullTm += DeltaForUpdate;

            //pull up the ledge
            float PullUpLerp = ActPullTm / PullUpTime;

            if (PullUpLerp < 0.5)
            {
                //lerp our player upwards to the leges y position
                float LAmt = PullUpLerp * 2;
                transform.position = Vector3.Lerp(OrigPos, new Vector3(OrigPos.x, LedgePos.y, OrigPos.z), LAmt);
            }
            else if (PullUpLerp <= 1)
            {
                //set new pull up position
                if (OrigPos.y != LedgePos.y)
                    OrigPos = new Vector3(transform.position.x, LedgePos.y, transform.position.z);


                //move to the ledge position
                float LAmt = (PullUpLerp - 0.5f) * 2;
                transform.position = Vector3.Lerp(OrigPos, LedgePos, LAmt);
            }
            else
            {
                //we have finished pulling up!
                SetOnGround();

            }
        }

        //AnimCtrl();
    }
    /*
    void AnimCtrl()
    {
        int State = 0;
        if (CurrentState == PlayerStates.InAir)
            State = 1;
        else if (CurrentState == PlayerStates.OnWalls)
            State = 2;
        else if (CurrentState == PlayerStates.LedgeGrab)
            State = 3;

        Anim.SetInteger("State", State);
        Anim.SetBool("Crouching", Crouch);

        Vector3 Vel = transform.InverseTransformDirection(Rigid.velocity);
        Anim.SetFloat("XVelocity", Vel.x);
        Anim.SetFloat("ZVelocity", Vel.z);
        Anim.SetFloat("YVelocity", Rigid.velocity.y);
        Anim.SetFloat("XInput", Input.GetAxis("Horizontal"));
    }
    */
    ////////////////////////////////////////////////////////////////FixedUpdate////////////////////////////////////////////////////////////////////
    public bool cantMove = false;

    private void FixedUpdate()
    {
        DeltaForFixed = Time.deltaTime;

        //get inputs
        horInputInFixed = Input.GetAxis("Horizontal");
        verInputInFixed = Input.GetAxis("Vertical");


        //*********************************************Grounded_Fixed***************************************************//
        if (CurrentState == PlayerStates.Grounded)
        {
            //tick our ground timer
            if (OnGroundTimer < 10)
                OnGroundTimer += DeltaForFixed;


            //get magnituded of our inputs
            float InputMagnitude = new Vector2(horInputInFixed, verInputInFixed).normalized.magnitude;

            //get the amount of speed, based on if we press forwards or backwards
            targetSpd = Mathf.Lerp(BackwardsSpeed, currentMaxSpeed, verInputInFixed); //using the vertical input as a lerp from if forward is being pressed

            //if we are crouching, our target speed is our crouch speed
            if (Crouch)
                targetSpd = CrouchSpeed;



            if (!sliding && !cantMove)
            {
                LerpSpeed(InputMagnitude, DeltaForFixed, targetSpd);
                MovePlayer(horInputInFixed, verInputInFixed, DeltaForFixed);

            }

            //check for crouching 
            if (Input.GetButton("Crouching"))
            {


                //start crouching
                if (!Crouch)
                    StartCrouch();



                if (playerCollision.onTheFloor && ActSpeed > SlideSpeedLimit || landOnSloupWithSliding && playerCollision.onTheFloor)
                {
                    canStartSliding = true;

                    Debug.Log("Proceed");
                    //StartCoroutine(SlideBlock());
                }
                //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                if (canStartSliding)
                {
                    sliding = true;
                    SlideSelf(horInputInFixed);



                }


            }
            else
            {

                //stand up
                bool check = playerCollision.CheckRoof(faceOrientation.up);
                if (!check)
                {
                    StopCrouching();

                }
            }

            //add to our player adjustment
            if (AdjustmentAmt < 1)
                AdjustmentAmt += DeltaForFixed * SlideControl;
            else
                AdjustmentAmt = 1;

            //check for the ground 
            bool Grounded = playerCollision.CheckFloor(-faceOrientation.up);

            //we are in the air
            if (!Grounded)
            {
                if (InAirTimer < 0.2f)
                    InAirTimer += DeltaForFixed;
                else
                {
                    SetInAir();
                    return;
                }
            }
            else
            {
                //we are on the ground to remove any increase in the air timer
                InAirTimer = 0;
            }




        }
        //*********************************************InAir_Fixed***************************************************//
        else if (CurrentState == PlayerStates.InAir)
        {

            //tick our Air timer
            if (InAirTimer < 10)
                InAirTimer += DeltaForFixed;

            MoveInAir(horInputInFixed, verInputInFixed, DeltaForFixed);

        }
        //*********************************************OnWalls_Fixed*************************************************//
        else if (CurrentState == PlayerStates.OnWalls)
        {


            //tick our wall run timer
            ActWallRunTime += DeltaForFixed;

            //move our player when on a wall
            WallMove(verInputInFixed, DeltaForFixed);

            //**************************************************************WALLJUMP*************************************************************/
            WallJump();
        }

    }





    ////////////////////////////////////////////////////////////////LateUpdate////////////////////////////////////////////////////////////////////
    private void LateUpdate()
    {
        // Update our target position for camera:
        Cam.transform.localPosition = camTargetPos;
    }



    ///////////////////////////////////////////////////////LerpSpeed/////////////////////////////////////////////////////////
    //lerp our current speed to our set max speed, by how much we are pressing the horizontal and vertical input
    void LerpSpeed(float InputMag, float D, float TargetSpeed)
    {
        //multiply our speed by our input amount
        float LerpAmt = TargetSpeed * InputMag;
        //get our acceleration (if we should speed up or slow down
        float Accel = Acceleration;
        if (InputMag == 0)
            Accel = Decceleration;
        //lerp by a factor of our acceleration
        ActSpeed = Mathf.Lerp(ActSpeed, LerpAmt, D * Accel);
    }


    ///////////////////////////////////////////////////////ReactOnLand/////////////////////////////////////////////////////////
    //when in the air or on a wall, we set our action speed to the velocity magnitude, this is so that when we reach the ground again, our speed will carry over our momentum
    void ReactOnLand(float ver, float hor)
    {
        // Debug.Log(Rigid.velocity.y);

        if (!Input.GetButton("Crouching"))
        {

            // Increase speed (ACTSPEED) if we use input while landing:
            if (ver != 0 || hor != 0)
            {
                float Mag = new Vector2(Rigid.velocity.x, Rigid.velocity.z).magnitude;
                ActSpeed = Mag * 2;


                return;
            }


            Vector3 velocityOnLanding = Rigid.velocity;
            velocityOnLanding.y = 0;
            Rigid.velocity = velocityOnLanding * 1.1f;

            return;
        }

        //Sliding on slope after landing
        else if (Rigid.velocity.y < -5)
        {
            cantMove = true;
            sloperun = true;

            // Check that we are landing on slope:
            playerCollision.CheckSlope();

            if (!playerCollision.onSlope)
            {
                //Sliding on the floor after landing
                landWithBoost = true;

                return;
            }


            landOnSloupWithSliding = true;
            VelocityYBeforeLanding = Rigid.velocity.y;


            // canStartSliding = true;

            return;
        }


    }


    ///////////////////////////////////////////////////////CheckWalls/////////////////////////////////////////////////////////
    bool CheckWalls(float X, float Y)
    {
        if (X == 0 && Y == 0) //if no direction input we are not wall running
            return false;

        if (ActWallRunTime >= WallRunTime) //if our wall run timer is more than the amount we can run on walls for, we cannot wall run
            return false;

        bool WallCol = playerCollision.CheckWall();

        return WallCol;
    }


    ///////////////////////////////////////////////////////SetInAir/////////////////////////////////////////////////////////
    void SetInAir()
    {
        if (infiniteJumping)
        {
            Debug.Log("Active");
            ActWallRunTime = 0;
        }

        StopCrouching(); //cannot crouch in air

        OnGroundTimer = 0; //remove the on ground timer
        CurrentState = PlayerStates.InAir;

        playerCollision.canCheck = true;
        currentMaxSpeed = maxSpeedOnGround;
    }


    ///////////////////////////////////////////////////////SetOnGround/////////////////////////////////////////////////////////
    void SetOnGround()
    {
        //set our current speed to our velocity
        ReactOnLand(verInputInFixed, horInputInFixed);

        ActWallRunTime = 0; //we are on the ground again, our wall run timer is reset
        InAirTimer = 0; //remove the in air timer
        CurrentState = PlayerStates.Grounded;
        cam_CurrentMaxFov = cam_DefaultMaxFOV;
        rightWallCheck = false;
        leftWallCheck = false;
        currentMaxSpeed = maxSpeedOnGround;


    }


    ///////////////////////////////////////////////////////SetOnWall/////////////////////////////////////////////////////////
    void SetOnWall()
    {
        OnGroundTimer = 0; //remove the on ground timer
        InAirTimer = 0; //remove the in air timer
        CalculateWallRunDir(playerCollision.wallRayHit); // Calculate direction along the wall
        CurrentState = PlayerStates.OnWalls;
        cam_CurrentMaxFov = cam_WallFOV;
        ActSpeed = maxSpeedOnWalls;


    }


    ///////////////////////////////////////////////////////LedgeGrab/////////////////////////////////////////////////////////
    void LedgeGrab(Vector3 Ledge)
    {
        //set our ledge position
        LedgePos = Ledge;
        OrigPos = transform.position;
        //reset ledge grab time
        ActPullTm = 0;
        //remove speed and velocity
        Rigid.velocity = Vector3.zero;
        ActSpeed = 0;
        //start ledge grabs
        CurrentState = PlayerStates.LedgeGrab;
    }


    ///////////////////////////////////////////////////////StartCrouch/////////////////////////////////////////////////////////
    void StartCrouch()
    {
        Crouch = true;

        standCap.enabled = false;
        crouchCap.enabled = true;

    }


    ///////////////////////////////////////////////////////StopCrouching/////////////////////////////////////////////////////////
    void StopCrouching()
    {
        sliding = false;
        sloperun = false;
        Crouch = false;

        crouchCap.enabled = false;
        standCap.enabled = true;

        firstTime = true;

        canStartSliding = false;
        landWithBoost = false;

        cantMove = false;

        landOnSloupWithSliding = false;

        cam_crouchingSpeed = 9f;
    }


    ///////////////////////////////////////////////////////MovePlayer/////////////////////////////////////////////////////////
    Vector3 lerpVelocityOfMovement;
    Vector3 movementDirection;

    public LayerMask normwalls;
    Vector3 directionAlongWall_OnGround;
    RaycastHit testray;

    void MovePlayer(float Hor, float Ver, float D)
    {


        if ((Physics.SphereCast(faceOrientation.transform.position, 0.9f, faceOrientation.forward, out testray, 1f, normwalls) && CheckPlayerVertical(testray.point, Ver, Hor)) || Physics.SphereCast(faceOrientation.transform.position, 0.9f, -faceOrientation.forward, out testray, 1f, normwalls) && CheckPlayerVertical(testray.point, Ver, Hor))
        {

            //T‰ss‰ tapauksessa oikea suunta sein‰‰ pitkin: 
            directionAlongWall_OnGround = Vector3.ProjectOnPlane((faceOrientation.forward * Ver) + (faceOrientation.right * Hor), testray.normal);

            movementDirection = directionAlongWall_OnGround.normalized;

        }
        else
        {
            //find the direction to move in, based on the direction inputs
            movementDirection = (faceOrientation.forward * Ver) + (faceOrientation.right * Hor);
            movementDirection = movementDirection.normalized;
        }


        //if we are no longer pressing and input, carryon moving in the last direction we were set to move in
        if (Hor == 0 && Ver == 0)
            movementDirection = Rigid.velocity.normalized;

        movementDirection = movementDirection * ActSpeed;

        //apply Gravity and Y velocity to the movement direction 
        movementDirection.y = Rigid.velocity.y;

        //apply adjustment to acceleration
        float Acel = DirectionControl * AdjustmentAmt;
        lerpVelocityOfMovement = Vector3.Lerp(Rigid.velocity, movementDirection, Acel * D);
        Rigid.velocity = lerpVelocityOfMovement;



    }


    ///////////////////////////////////////////////////////MoveInAir/////////////////////////////////////////////////////////
    Vector3 lerpVelocityInAir;
    Vector3 dirinAir;
    void MoveInAir(float Hor, float Ver, float D)
    {
        //find the direction to move in, based on the direction inputs
        dirinAir = (faceOrientation.forward * Ver) + (faceOrientation.right * Hor);
        dirinAir = dirinAir.normalized;
        //if we are no longer pressing and input, carryon moving in the last direction we were set to move in
        if (Hor == 0 && Ver == 0)
            dirinAir = Rigid.velocity.normalized;

        dirinAir = dirinAir * ActSpeed;

        //apply Gravity and Y velocity to the movement direction 
        dirinAir.y = Rigid.velocity.y;

        //lerp to our movement direction based on how much airal control we have
        lerpVelocityInAir = Vector3.Lerp(Rigid.velocity, dirinAir, InAirControl * D);
        Rigid.velocity = lerpVelocityInAir;

    }


    ///////////////////////////////////////////////////////WallMove/////////////////////////////////////////////////////////
    Vector3 lerpVelocity_WallRun;
    Vector3 movementDir_WallRun;
    void WallMove(float Ver, float D)
    {
        //get the direction to run up this wall if we press forward (keep in mind this only works if the wall is infront or to the side of the player as we run along on, on walls to our immediate right or left we slide down

        movementDir_WallRun = faceOrientation.up * Ver;
        movementDir_WallRun = movementDir_WallRun * WallRunUpwardsMovement;

        //our x z velocity are our momentum applied to our forward direction
        movementDir_WallRun += directionAlongWall_OnWall * ActSpeed;

        lerpVelocity_WallRun = Vector3.Lerp(Rigid.velocity, movementDir_WallRun, WallRunSpeedAcceleration * D);
        Rigid.velocity = lerpVelocity_WallRun;





    }


    ///////////////////////////////////////////////////////JumpUp/////////////////////////////////////////////////////////
    Vector3 velAmt;
    void JumpUp()
    {
        //only jump if we are still on the ground
        if (CurrentState == PlayerStates.Grounded)
        {
            //reduce our velocity on the y axis so our jump force can be added
            velAmt = Rigid.velocity;
            velAmt.y = 0;
            Rigid.velocity = velAmt;
            //add our jump force
            Rigid.AddForce(transform.up * JumpHeight, ForceMode.Impulse);
            //we are now in the air
            SetInAir();
        }
    }


    ///////////////////////////////////////////////////////HandleFOV/////////////////////////////////////////////////////////
    //increase our fov at high speed and reduce it at low speed
    void HandleFov(float D)
    {
        //get our velocity magnitude
        float mag = new Vector2(Rigid.velocity.x, Rigid.velocity.z).magnitude;
        //get appropritate fov 
        float LerpAmt = mag / FOVSpeed;
        float FieldView = Mathf.Lerp(cam_defaultFOV, cam_CurrentMaxFov, LerpAmt);
        //ease into this fov
        Cam.fieldOfView = Mathf.Lerp(Cam.fieldOfView, FieldView, 4 * D);
        //Debug.Log(mag);
    }


    ///////////////////////////////////////////////////////CheckSliding/////////////////////////////////////////////////////////
    private bool CheckSlidingForFOV()
    {
        //get our velocity magniture
        float mag = new Vector2(Rigid.velocity.x, Rigid.velocity.z).magnitude;

        if (mag < 5)
        {
            sliding = false;
            cam_CurrentMaxFov = cam_DefaultMaxFOV;
            return true;


        }
        else
        {
            return false;

        }

    }


    ///////////////////////////////////////////////////////SlideSelf/////////////////////////////////////////////////////////
    //slide our character forwards
    public Vector3 dirOnTheSLope;
    public Vector3 slopeSpeed_sliding;
    public float slopeSpeed;
    public float currentActSpeed_sliding;
    [SerializeField] float actSpeedOnFloor_sliding;
    [SerializeField] float actSpeedOnSlope_sliding;
    [SerializeField] float actSpeedOnLanding_sliding;
    [SerializeField] float speedLimit_sliding = 20;

    public bool landWithBoost = false;
    public bool landOnSloupWithSliding = false;
    public float VelocityYBeforeLanding;



    Vector3 targetVelocity_sliding;
    void SlideSelf(float hor)
    {
        //remove any control from player 
        AdjustmentAmt = 0;


        // In case we want to slide on slope, we will calculate special direction on the slope. Else the target velocity will be zero.
        if (playerCollision.onSlope)
            targetVelocity_sliding = new Vector3(playerCollision.slopeHitNormal.x, -playerCollision.slopeHitNormal.y, playerCollision.slopeHitNormal.z) * slopeSpeed;

        else
            targetVelocity_sliding = new Vector3(0, 0, 0);




        //At the beginning of sliding, we will multiply our velocity and later just lerp it to the targetvelocity. 
        if (firstTime)
        {

            //Push the player at the start of sliding.
            PushPlayerIntoSliding();



            // Set proper lerp value for specific situation:
            if (playerCollision.onSlope)
                currentActSpeed_sliding = actSpeedOnSlope_sliding;
            else if (landWithBoost)
                currentActSpeed_sliding = actSpeedOnLanding_sliding;
            else
                currentActSpeed_sliding = actSpeedOnFloor_sliding;



            firstTime = false;
        }



        //Add input control to sliding:
        targetVelocity_sliding += faceOrientation.right * (hor * control_Sliding);

        // Lerp our sliding velocity to targetspeed. (Target speed is slopeSpeed (more than 0) if we slide on slope)
        Vector3 velocityForSliding = Vector3.Lerp(Rigid.velocity, targetVelocity_sliding, DeltaForFixed * currentActSpeed_sliding);
        Rigid.velocity = velocityForSliding;


        cam_crouchingSpeed = 2.5f;

    }


    ///////////////////////////////////////////////////////SetSliding/////////////////////////////////////////////////////////
    /// <summary>
    /// Starts actual sliding with boost of velocity.
    /// </summary>
    void PushPlayerIntoSliding()
    {

        // Calculate current velocity magnitude: 
        float velocityMag_sliding = new Vector3(Rigid.velocity.x, Rigid.velocity.y, Rigid.velocity.z).magnitude;
        // Debug.Log("velocityMag_sliding: " + velocityMag_sliding);



        // If we move too fast, we wont get extra velocity for sliding.
        if (velocityMag_sliding > 20)
            return;





        //If we move too slow, we will get even more extra velocity. (It is for slow "land and slide" scenarios)
        if (velocityMag_sliding < 12 && landWithBoost)
        {
            Rigid.velocity *= 2.6f;
            Debug.Log("more boost");

            return;
        }


        //Slidaa taakse vaikka slidii ekana eteenp‰in.
        //TSekkaa landonsloup!!!!!!!!!
        //If we do not have any velocity at x and z except y when landing on slope, we will slide according to the slope.
        if (landOnSloupWithSliding)
        {

            float boost1 = Mathf.Abs(VelocityYBeforeLanding / 30);

            Debug.Log(boost1);

            Rigid.velocity = targetVelocity_sliding * boost1;


            return;
        }



        Debug.Log("skip");
        Rigid.velocity *= 2.2f;
    }


    ///////////////////////////////////////////////////////SlideBlock/////////////////////////////////////////////////////////
    IEnumerator SlideBlock()
    {
        canSlide = false;
        yield return new WaitForSeconds(1.5f);
        canSlide = true;


    }


    ///////////////////////////////////////////////////////OnDrawGizmosSelected/////////////////////////////////////////////////////////
    void OnDrawGizmosSelected()
    {
        //Wall check (movement with wall)
        Gizmos.color = Color.magenta;
        Vector3 dir = transform.TransformDirection(-faceOrientation.right) * wallCheckDistance;
        Gizmos.DrawRay(transform.position, dir);

        Gizmos.color = Color.magenta;
        Vector3 dir2 = transform.TransformDirection(faceOrientation.right) * wallCheckDistance;
        Gizmos.DrawRay(transform.position, dir2);

    }


    ///////////////////////////////////////////////////////CameraTilt/////////////////////////////////////////////////////////
    /// <summary>
    /// Rotates our comera when running in walls. The Rotation depends on which side of the wall is from the player.
    /// </summary>
    private void CameraTilt()
    {
        if (leftWallCheck)
        {

            tilt = Mathf.Lerp(tilt, -camTilt, camTiltTime * Time.deltaTime);
        }
        else if (rightWallCheck)
        {
            tilt = Mathf.Lerp(tilt, camTilt, camTiltTime * Time.deltaTime);

        }
        else if (tilt != 0)
        {

            tilt = Mathf.Lerp(tilt, 0, camTiltTime * Time.deltaTime);
        }


    }


    ///////////////////////////////////////////////////////CheckPlayerVertical/////////////////////////////////////////////////////////
    Vector3 hitPointLocal; //RayCastHit Position from Player's perspective.
    /// <summary>
    /// Checks whether wall is in front of the player or behind. (Used for fixing MoveAlongWall -feature)
    /// </summary>
    bool CheckPlayerVertical(Vector3 point, float Ver, float Hor)
    {
        hitPointLocal = faceOrientation.transform.InverseTransformPoint(point);

        if (hitPointLocal.z > 0 && Ver >= 0)
        {
            // In Front
            return CheckPlayerHorizontal(hitPointLocal, Hor);
        }

        if (hitPointLocal.z < 0 && Ver <= 0)
        {
            // Behind
            return CheckPlayerHorizontal(hitPointLocal, Hor);
        }

        return false;

    }


    ///////////////////////////////////////////////////////CheckPlayerHorizontal/////////////////////////////////////////////////////////
    /// <summary>
    /// Checks whether wall is on player's right or left. (Used for fixing MoveAlongWall -feature)
    /// </summary>
    bool CheckPlayerHorizontal(Vector3 hitPointLocal, float Hor)
    {

        if (hitPointLocal.x < 0 && Hor > 0)
        {
            // Left
            return false;
        }

        if (hitPointLocal.x > 0 && Hor < 0)
        {
            // Right
            return false;
        }
        return true;
    }


    ///////////////////////////////////////////////////////CalculateWallDir/////////////////////////////////////////////////////////
    Vector3 directionAlongWall_OnWall;
    /// <summary>
    /// Calculates direction for wallrunning. The direction is calculated using ProjectOnPlane method which gives the direction along the wall.
    /// </summary>
    /// <returns>Direction along thew all</returns>
    void CalculateWallRunDir(RaycastHit wallRayHit)
    {
        directionAlongWall_OnWall = Vector3.ProjectOnPlane(faceOrientation.forward, wallRayHit.normal);
        directionAlongWall_OnWall = directionAlongWall_OnWall.normalized;

    }


    ///////////////////////////////////////////////////////WallJump/////////////////////////////////////////////////////////
    void WallJump()
    {

        if (Input.GetButton("Jump") && ActWallRunTime > 0.1f)
        {

            if (leftWallCheck)
            {
                // Jump from left wall
                if (highJump)
                {

                    wallJumpDir = faceOrientation.forward * wallRunJumpForwardVel + transform.up * wallJumpHeight + playerCollision.wallRayHit.normal;
                    Rigid.velocity = new Vector3(Rigid.velocity.x, 0, Rigid.velocity.z);
                    Rigid.AddForce(wallJumpDir * wallJumpForce, ForceMode.Force);

                    return;
                }


                if (!highJump)
                {

                    wallJumpDir = transform.up * wallJumpHeight + playerCollision.wallRayHit.normal;
                    Rigid.velocity = new Vector3(Rigid.velocity.x, 0, Rigid.velocity.z);
                    Rigid.AddForce(wallJumpDir * wallJumpForce, ForceMode.Force);

                    return;
                }

            }
            else if (rightWallCheck)
            {
                //Jump from right wall

                if (highJump)
                {
                    wallJumpDir = faceOrientation.forward * wallRunJumpForwardVel + transform.up * wallJumpHeight + playerCollision.wallRayHit.normal;
                    Rigid.velocity = new Vector3(Rigid.velocity.x, 0, Rigid.velocity.z);
                    Rigid.AddForce(wallJumpDir * wallJumpForce, ForceMode.Force);

                    return;
                }


                if (!highJump)
                {

                    wallJumpDir = transform.up * wallJumpHeight + playerCollision.wallRayHit.normal;
                    Rigid.velocity = new Vector3(Rigid.velocity.x, 0, Rigid.velocity.z);
                    Rigid.AddForce(wallJumpDir * wallJumpForce, ForceMode.Force);

                    return;
                }

            }

        }

    }






}

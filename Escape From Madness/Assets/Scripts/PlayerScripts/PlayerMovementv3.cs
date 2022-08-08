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
    public float horInputInFixed;
    public float verInputInFixed;

    ////////////////////////////////////////////////////////////////FixedTimer////////////////////////////////////////////////////////////////////
    float DeltaForUpdate;
    float DeltaForFixed;

    ////////////////////////////////////////////////////////////////Refrences////////////////////////////////////////////////////////////////////
    [Header("Scripts")]
    [SerializeField] private PlayerCollisionv2 playerCollision;
    [SerializeField] StickToFloor stickToFloor;
    [SerializeField] internal CameraController cameraController;
    

    [Header("Other References")]
    [SerializeField] public Rigidbody Rigid;
    [SerializeField] public Transform faceOrientation;
    [SerializeField] public Animator animator;
    [SerializeField] public GameObject FPSHands;
    [SerializeField] private GameObject orientationForLowerBody;
    public Camera Cam;
    

    [Tooltip("Walls that can be detected by rightWallCheck and leftWallCheck rays")]
    public LayerMask wallLayers; // Walls that can be detected by rightWallCheck and leftWallCheck rays


    ////////////////////////////////////////////////////////////////Physics////////////////////////////////////////////////////////////////////
    [Header("Physics")]
    [Tooltip("Current player velocioty magnitude")]
    public float velocityMagnitude_InFixed;
    public float velocityMagnitudeBeforeLand_InFixed;

    public float velocityMagnitude_InUpdate;

    private float currentMaxSpeed; //how fast we run forward
    public float maxSpeedOnGround = 18;
    public float maxSpeedAlongWalls = 12;
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
    public float previousInAirTimer; //InAirTimer value before resetting

    public bool wasActivated = false;

    private float OnGroundTimer;
    private float AdjustmentAmt; //the amount added to our player acceleration, this is used for adjusting to new speeds such as when we slide

    private float yVelBeforeLanding; // Y velocity before landing
    ////////////////////////////////////////////////////////////////Jumping////////////////////////////////////////////////////////////////////
    [Header("Jumping")]
    public float JumpHeight; //how high we jump

    ////////////////////////////////////////////////////////////////WallRunning////////////////////////////////////////////////////////////////////
    [Header("Wall Running")]
    [Tooltip("how long we can run on walls")]
    public float WallRunTime = 2f; //
    [Tooltip("how long we are actually on a wall")]
    private float ActWallRunTime = 0; //
    [Tooltip("how long we have to be in the air before we can wallrun")]
    public float TimeBeforeWallRun = 0.2f; //
    [Tooltip("how much we move up a wall when running on it (make this 0 to just slightly move down a wall we run on)")]
    public float WallRunUpwardsMovement = 2f; //
    [Tooltip("how quickly we build speed to run up walls")]
    public float WallRunSpeedAcceleration = 2f; //


    // Camera Tilt:
    public float tilt; // Camera rotation
    [Tooltip("How much our camera rotates around the z-axis when running on wall")]
    [SerializeField] private float camTilt;
    [Tooltip("How fust our camera tilt (rotation) changes")]
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
    [Tooltip("how fast we move when crouching")]
    public float CrouchSpeed = 10; //how fast we move when crouching
    public bool Crouching = false;

    // Colliders for crouching and standing
    [SerializeField] CapsuleCollider crouchCap; // Capsiule for crouching
    [SerializeField] CapsuleCollider standCap; // Capsule for standing

    [SerializeField] private float cam_CrouchHeight; // How low the caera goes when crouching
    [SerializeField] private float cam_SlideHeight; // How low the caera goes when sliding

    private Vector3 camTargetPos; // Camera target position according to the situation 
    private Vector3 defaultCamPos; // Camera standing/original position


    public float cam_currentCrouchingSpeed; // Current cam speed for crouching
    public float cam_currentSlideSpeed; // Current cam speed for crouching


    [Tooltip("How fast we crouch at the moment")]
    [SerializeField] private float cam_defaultCrouchingSpeed = 9;
    [Tooltip("How fast we go to stand")]
    [SerializeField] private float cam_standingSpeed;
    [Tooltip("How fast we go to sliding")]
    [SerializeField] private float cam_defaultSlidingSpeed = 12;
    [Tooltip("How fast we go to sliding when landing and having a high Y velocity")]
    [SerializeField] private float cam_landSlidingSpeed = 26;
    [Tooltip("How fast we stand to crouch height right after sliding")]
    [SerializeField] private float cam_exitSlidingSpeed = 2.5f;

    //0,53846153846153846154
    private float cam_lowerLandSlidingSpeed;

    [Tooltip("Y velocity above this value will result in faster crouch speed")]
    [SerializeField] float maxYVelocity;

    //These are technical variables. (Ignore)
    private float camStepSpeed;


    ////////////////////////////////////////////////////////////////Sliding////////////////////////////////////////////////////////////////////
    [Header("Sliding")]
    [Tooltip("how far we slide when pressing crouch")]
    public float SlideAmt; //how far we slide when pressing crouch
    [Tooltip("how fast we have to be traveling before a crouch will trigger a slide")]
    public float SlideSpeedLimit; //how fast we have to be traveling before a crouch will trigger a slide!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    [Tooltip("how much we adjust to our slide speed and regain player control")]
    public float SlideControl; //how much we adjust to our slide speed and regain player control
    [Tooltip("How long it should take to be able to slide again")]
    [SerializeField] float slideCoolDown = 1.2f;


    // Velocity Boosts:
    [SerializeField] float defaultVelBoost_sliding = 2.2f;
    [SerializeField] float increasedVelBoost_sliding = 2.6f;
    [SerializeField] float slopeVelBoost_sliding = 2.2f;
    [SerializeField] float lowSlopeVelBoost_sliding = 1.6f;

    // Velocity Boost for another push. Note. These values should be lower than normal boost values!
    [SerializeField] float defaultVelBoost_slideAgain = 1.2f;
    [SerializeField] float increasedVelBoost_slideAgain = 1.7f;
    [SerializeField] float slopeVelBoost_slideAgain = 1.2f;
    [SerializeField] float lowSlopeVelBoost_slideAgain = 1.1f;

    private Vector3 boostedVelocity;
    //For debug
    // public bool canSlide = true;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    public bool isSliding = false;
    public bool wasSliding = false;
    public bool slideBlock = false;

    [Tooltip("How much control we have while sliding")]
    [SerializeField] float control_Sliding = 10; // How much control we have while sliding

    public bool canSlide = false;
    public bool firstTime = true; // At the beginning of the sliding, we will receive boost. (velocity boost) 
    public bool anotherTime = false; // If we were sliding and lost contact, we will regain a right to get that boost to slide again on land.

    //SpeedLimits:
    [Tooltip("Speed above this value will result in no velocity boost")]
    [SerializeField] float maxSpeedLimit_sliding = 20; // Speed above this value will result in no velocity boost.

    [Tooltip("Speed below this value will result in velocity boost")]
    [SerializeField] float boostSpeedLimit_sliding = 12; // Speed below this value will result in velocity boost.

    //Velocity boost for sliding:
    [Tooltip("By default we multiply our velocity by this value when sliding")]
    [Range(0.0f, 5.0f)]
    [SerializeField] float defaultBoost = 2.2f; // By default we multiply our velocity by this value when sliding.

    [Tooltip("If our velocity is low enought, we will get i´ncreased boost in velocity")]
    [Range(0.0f, 5.0f)]
    [SerializeField] float increasedBoost = 2.6f; // If our velocity is low enought, we will get i´ncreased boost in velocity. 

    public float timeForSlide = 0; // How long it should take to be able to slide after StopCrouching()
    public bool blockSlidingAfterCrouching = false;

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


    // Test
    // Local values for FPS Hands:
    bool wasAnimated = false;
    float InStandTimer; // How long we have been standing. This information is used to prevent player from spamming crouch.
    public bool dontMoveCamera = false;
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

        cam_currentCrouchingSpeed = cam_defaultCrouchingSpeed;
        cam_currentSlideSpeed = cam_defaultSlidingSpeed;

        cam_lowerLandSlidingSpeed = cam_landSlidingSpeed * 0.53846153846153846154f;

    }

    ////////////////////////////////////////////////////////////////Update////////////////////////////////////////////////////////////////////


    void Update()
    {
        DeltaForUpdate = Time.deltaTime;

        XMoveInUpdate = Input.GetAxis("Horizontal");
        YMoveInUpdate = Input.GetAxis("Vertical");

        //Calculate our current velocity magnitude:
        velocityMagnitude_InUpdate = new Vector2(Rigid.velocity.x, Rigid.velocity.z).magnitude;


        HandleFov(DeltaForUpdate);

        //Rotate our camera
        CameraTilt();


        MoveCamera();


        if (!isSliding)
            orientationForLowerBody.transform.rotation = faceOrientation.transform.rotation;



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


        //Calculate our current velocity magnitude:
        velocityMagnitude_InFixed = new Vector2(Rigid.velocity.x, Rigid.velocity.z).magnitude;

        //Block sliding after crouching. This will prevent player from spamming sliding.
        if (blockSlidingAfterCrouching)
        {
            if (timeForSlide < 0.5f)
                timeForSlide += DeltaForFixed;

            else
            {
                blockSlidingAfterCrouching = false;
                slideBlock = false;
                timeForSlide = 0;
            }
        }


        








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


            //If we are crouching, our target speed is our crouch speed
            if (Crouching)
                targetSpd = CrouchSpeed;
            else
                InStandTimer += Time.deltaTime;

            //Dont call MovePlayer and LerpSpeed if we want to slide. (This will prevent random bugs)
            if (!cantMove)
            {
                LerpSpeed(InputMagnitude, DeltaForFixed, targetSpd);
                MovePlayer(horInputInFixed, verInputInFixed, DeltaForFixed);

            }


            //Check for crouching and sliding
            if (Input.GetButton("Crouch"))
                ActionOnGround();
            else
            {
                StopActionOnGround();






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


            //Collect data about our velocity before landing. This information is used for sliding etc.
            yVelBeforeLanding = Rigid.velocity.y;
            velocityMagnitudeBeforeLand_InFixed = velocityMagnitude_InFixed;

            if (InAirTimer > 0.6f && !wasAnimated)
            {
                wasAnimated = true;
               
                ArmAnimations.instance.PlayInAirAnimation();
                LegAnimations.instance.PlayInAirAnimations(); 
               
               
            }

            previousInAirTimer = InAirTimer;

        }
        //*********************************************OnWalls_Fixed*************************************************//
        else if (CurrentState == PlayerStates.OnWalls)
        {


            //tick our wall run timer
            ActWallRunTime += DeltaForFixed;

            //move our player when on a wall
            WallMove(verInputInFixed, DeltaForFixed);


            WallJump();


        }

    }





    ////////////////////////////////////////////////////////////////LateUpdate////////////////////////////////////////////////////////////////////
    private void LateUpdate()
    {
        
        if (!dontMoveCamera)
        { // Update our target position for camera:
             Cam.transform.localPosition = camTargetPos;
            Debug.Log("run");
        } 
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
        // If our x and y velocities are too low, make flip on landing
        if (previousInAirTimer > 1 && velocityMagnitudeBeforeLand_InFixed < 8 && !playerCollision.onSlope)
        {
            Debug.Log("MakeFlip");
             MakeFlip.instance.StartFlip();
            return;
        }


        if (!Input.GetButton("Crouch"))
        {

            // Increase speed (ACTSPEED) if we use input while landing:
            if (ver != 0 || hor != 0)
            {
                float Mag = new Vector2(Rigid.velocity.x, Rigid.velocity.z).magnitude;
                ActSpeed = Mag * 2;


                return;
            }



            // Dont apply any boost if our Velocity X is zero. This will eliminate the bug where OnCollisionExit() is called when landing on the ground. (This only happens with Collision Detection set to Continuous Speculative for RigidBody.)
            if (Rigid.velocity.x > 6)
            {

                //  Debug.Log("Running");
                Vector3 velocityOnLanding = Rigid.velocity;
                velocityOnLanding.y = 0;
                Rigid.velocity = velocityOnLanding * 1.1f;

                return;
            }
        }


        //Sliding right after landing:
        else if (velocityMagnitude_InFixed > 4)
        {
            StartSliding();


            // Check that we are landing on slope:
            playerCollision.CheckSlope();

            if (!playerCollision.onSlope)
            {
                //Sliding on the floor after landing
                landWithBoost = true;

                return;
            }


            landOnSloupWithSliding = true;





            return;
        }


    }

    ///////////////////////////////////////////////////////ActionOnGround/////////////////////////////////////////////////////////
    ///Determines the proper action when pressing C. (SLIDE or CROUCH)
    void ActionOnGround()
    {

        if (playerCollision.onTheFloor && !canSlide)
        {

            if (velocityMagnitude_InFixed > SlideSpeedLimit && !slideBlock || landOnSloupWithSliding)
                StartSliding();

            else if (!Crouching && InStandTimer > 0.6f)
                StartCrouching();

        }

        if (canSlide)
            Slide(horInputInFixed);


    }

    ///////////////////////////////////////////////////////StopActionOnGround/////////////////////////////////////////////////////////
    ///Cancels sliding and crouching if C isnt pressed
    void StopActionOnGround()
    {
        //Stand up:
        bool check = playerCollision.CheckRoof(faceOrientation.up);

        if (check && canSlide)
        {
            StopSliding();
            StartCrouching();

            return;
        }

        if (canSlide)
            StopSliding();

        if (!check && Crouching)
            StopCrouching();


        cam_currentCrouchingSpeed = cam_defaultCrouchingSpeed;

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



        if (Crouching)
            StopCrouching(); //cannot crouch in air

        OnGroundTimer = 0; //remove the on ground timer
        CurrentState = PlayerStates.InAir;

        playerCollision.canCheck = true;
        currentMaxSpeed = maxSpeedOnGround;


        //If the player slides and in the same time loses contact with the ground, he will get another boost on land while holding sliding. 
        if (isSliding)
        {
            anotherTime = true;

        }


        wasActivated = false;

        // Activate falling animation:
        //  cameraController.FallAnimation();
       wasAnimated = false;
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

        playerCollision.wasOnSlope = false;
        stickToFloor.dontStickToFloor = false;

       
        ArmAnimations.instance.PlayOnGroundAnimations();
        LegAnimations.instance.PlayOnGroundAimations(); ;
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

        playerCollision.wasOnSlope = false;

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
    void StartCrouching()
    {
        Crouching = true;

        standCap.enabled = false;
        crouchCap.enabled = true;
        LegAnimations.instance.PlayCrouchAnimation();
        InStandTimer = 0;
    }


    ///////////////////////////////////////////////////////StopCrouching/////////////////////////////////////////////////////////
    void StopCrouching()
    {
        timeForSlide = 0;

        Crouching = false;

        crouchCap.enabled = false;
        standCap.enabled = true;

        firstTime = true;

        canSlide = false;
        landWithBoost = false;



        landOnSloupWithSliding = false;

        cam_currentCrouchingSpeed = 9f;

        blockSlidingAfterCrouching = true;
        slideBlock = true;

        LegAnimations.instance.StopCrouchAnimation();
    }

    void StopSliding()
    {
        isSliding = false;

        crouchCap.enabled = false;
        standCap.enabled = true;

        firstTime = true;

        canSlide = false;

        landWithBoost = false;

        cantMove = false;

        landOnSloupWithSliding = false;

        StartCoroutine(BlockSliding());

        cam_currentSlideSpeed = cam_defaultSlidingSpeed;

        LegAnimations.instance.StopSlidingAnimation();
        ArmAnimations.instance.StopSlidingAnimation();
    }
    ///////////////////////////////////////////////////////MovePlayer/////////////////////////////////////////////////////////
    Vector3 lerpVelocityOfMovement;
    Vector3 movementDirection;

    public LayerMask normwalls;
    Vector3 directionAlongWall_OnGround;
    RaycastHit testray;
    bool setAlongWall = true;
    void MovePlayer(float Hor, float Ver, float D)
    {


        if ((Physics.SphereCast(faceOrientation.transform.position, 0.9f, faceOrientation.forward, out testray, 1f, normwalls) && CheckPlayerVertical(testray.point, Ver, Hor)) || Physics.SphereCast(faceOrientation.transform.position, 0.9f, -faceOrientation.forward, out testray, 1f, normwalls) && CheckPlayerVertical(testray.point, Ver, Hor))
        {
            if (setAlongWall)
            {
                setAlongWall = false;
                currentMaxSpeed = maxSpeedAlongWalls;
                Debug.Log(currentMaxSpeed);
            }
            //In this case, calculate the right path along the wall
            directionAlongWall_OnGround = Vector3.ProjectOnPlane((faceOrientation.forward * Ver) + (faceOrientation.right * Hor), testray.normal);

            movementDirection = directionAlongWall_OnGround.normalized;

        }
        else
        {
            if (!setAlongWall)
            {
                currentMaxSpeed = maxSpeedOnGround;
                setAlongWall = true;
                Debug.Log(currentMaxSpeed);

            }

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

            if (isSliding)
                StopSliding();

            stickToFloor.dontStickToFloor = true;
            LegAnimations.instance.PlayInAirAnimations();
            ArmAnimations.instance.PlayJumpingAnimation();
            wasAnimated = true;
        }
    }


    ///////////////////////////////////////////////////////HandleFOV/////////////////////////////////////////////////////////
    //increase our fov at high speed and reduce it at low speed

    float FieldView;
    bool wasBlocked = false;
    bool freezeFOV = false;
    void HandleFov(float D)
    {
        //get appropritate fov 
        float LerpAmt = velocityMagnitude_InUpdate / FOVSpeed;


        FieldView = Mathf.Lerp(cam_defaultFOV, cam_CurrentMaxFov, LerpAmt);


        FixFOV();




        //ease into this fov
        Cam.fieldOfView = Mathf.Lerp(Cam.fieldOfView, FieldView, 4 * D);
        //Debug.Log(mag);
    }

    void FixFOV()
    {
        if (CurrentState == PlayerStates.InAir || CurrentState == PlayerStates.OnWalls)
            return;


        if (horInputInFixed != 0 && verInputInFixed == 0 || verInputInFixed < 0)
        {
            FieldView = cam_defaultFOV;
            wasBlocked = true;
        }

        if (wasBlocked)
            if (horInputInFixed == 0 || verInputInFixed != 0)
            {
                wasBlocked = false;
                StartCoroutine(StopFOVManagement());
            }

        if (freezeFOV && verInputInFixed == 0)
            FieldView = cam_defaultFOV;



    }

    ///////////////////////////////////////////////////////CheckSliding/////////////////////////////////////////////////////////
    private bool CheckSlidingForFOV()
    {

        if (velocityMagnitude_InUpdate < 5)
        {
            // sliding = false;
            StopSliding();
            cam_CurrentMaxFov = cam_DefaultMaxFOV;
            return true;
        }

        else
            return false;



    }

    ///////////////////////////////////////////////////////StartSliding/////////////////////////////////////////////////////////
    /// <summary>
    /// Make proper changes for sliding 
    /// </summary>
    void StartSliding()
    {
        cantMove = true;

        //Shrink our capsule collider:
        standCap.enabled = false;
        crouchCap.enabled = true;

        canSlide = true;

        isSliding = true;

        if (yVelBeforeLanding < maxYVelocity && !wasActivated)
        {
            cam_currentSlideSpeed = cam_landSlidingSpeed;
            Debug.Log("Landing Speed and yVel: " + yVelBeforeLanding);
            wasActivated = true;
        }
        else if (previousInAirTimer > 1f && !wasActivated)
        {
            cam_currentSlideSpeed = cam_lowerLandSlidingSpeed;
            Debug.Log("Landing Speed2");
            wasActivated = true;

        }


        cam_currentCrouchingSpeed = cam_exitSlidingSpeed;



        LegAnimations.instance.PlaySlidingAnimation();
        ArmAnimations.instance.PlaySlidingAnimation();
    }


    ///////////////////////////////////////////////////////Slide/////////////////////////////////////////////////////////
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



    Vector3 velocityForSliding;
    Vector3 targetVelocity_sliding;
    void Slide(float hor)
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
            Debug.Log("FirstTime");
            //Push the player at the start of sliding.
            PushPlayerIntoSliding();

            // Set proper lerp speed for sliding. Depends on situation.
            SetSpeedForSliding();

            firstTime = false;
        }

        else if (anotherTime)
        {
            PushAgainIntoSliding();
            SetSpeedForSliding();
            anotherTime = false;
        }



        //Add input control to sliding:
        targetVelocity_sliding += faceOrientation.right * (hor * control_Sliding);

        // Lerp our sliding velocity to targetspeed. (Target speed is slopeSpeed (more than 0) if we slide on slope)
        velocityForSliding = Vector3.Lerp(Rigid.velocity, targetVelocity_sliding, DeltaForFixed * currentActSpeed_sliding);
        Rigid.velocity = velocityForSliding;



        Debug.Log("Sliding");
    }


    ///////////////////////////////////////////////////////PushPlayerIntoSliding/////////////////////////////////////////////////////////
    /// <summary>
    /// Starts actual sliding with boost of velocity.
    /// </summary>
    void PushPlayerIntoSliding()
    {

        // Debug.Log("Push: " + yVelBeforeLanding);

        // Debug.Log("Mag: " + velocityMagnitude_InFixed);



        // If we move too fast, we wont get extra velocity for sliding.
        if (velocityMagnitude_InFixed > 20)
        {
            if (landOnSloupWithSliding)
                Rigid.velocity *= lowSlopeVelBoost_sliding;

            return;
        }




        //If we move too slow, we will get even more extra velocity. (It is for slow "land and slide" scenarios)
        if (velocityMagnitude_InFixed < 12 && landWithBoost)
        {
            boostedVelocity = Rigid.velocity;
            boostedVelocity.y = 0;
            Rigid.velocity = boostedVelocity * increasedVelBoost_sliding;

            Debug.Log(Rigid.velocity.y);

            return;
        }



        //If we do not have any velocity at x and z except y when landing on slope, we will slide according to the slope. (See line: 661)
        if (landOnSloupWithSliding)
        {
            Debug.Log("slope");
            Rigid.velocity *= slopeVelBoost_sliding;
            return;
        }



        boostedVelocity = Rigid.velocity;
        boostedVelocity.y = 0;
        Rigid.velocity = boostedVelocity * defaultVelBoost_sliding;



    }


    ///////////////////////////////////////////////////////PushAgainIntoSliding/////////////////////////////////////////////////////////
    void PushAgainIntoSliding()
    {


        // If we move too fast, we wont get extra velocity for sliding.
        if (velocityMagnitude_InFixed > 27)
        {

            //In this situation previousInAirTimer is used to prevent the player from getting another boost while sliding down the slope.
            if (landOnSloupWithSliding && previousInAirTimer > 2)
            {
                Rigid.velocity *= lowSlopeVelBoost_slideAgain;
                Debug.Log("Give a little boost on slope");

                return;
            }

            Debug.Log("Stop");
            return;
        }

        if (previousInAirTimer < 0.5)
            return;

        Debug.Log("Pass");


        if (landOnSloupWithSliding && previousInAirTimer > 1)
        {
            Debug.Log("LandOnsloupver2");
            Rigid.velocity *= slopeVelBoost_slideAgain;
            return;
        }




        // 2nd option:
        if (previousInAirTimer > 1f)
        {
            boostedVelocity = Rigid.velocity;
            boostedVelocity.y = 0;
            Rigid.velocity = boostedVelocity * increasedVelBoost_slideAgain;
            Debug.Log("Bigger: " + velocityMagnitude_InFixed);

            //1.7
            return;


        }





        Debug.Log("default: " + velocityMagnitude_InFixed);
        boostedVelocity = Rigid.velocity;
        boostedVelocity.y = 0;
        Rigid.velocity = boostedVelocity * defaultVelBoost_slideAgain;

    }


    ///////////////////////////////////////////////////////BlockSliding/////////////////////////////////////////////////////////
    IEnumerator BlockSliding()
    {
        slideBlock = true;
        yield return new WaitForSeconds(slideCoolDown);

        if (!blockSlidingAfterCrouching)
            slideBlock = false;


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
    /// Rotates our camera when running on walls. The Rotation depends on which side of the wall is from the player.
    /// </summary>
    private void CameraTilt()
    {
        if (leftWallCheck)
            tilt = Mathf.Lerp(tilt, -camTilt, camTiltTime * Time.deltaTime);


        else if (rightWallCheck)
            tilt = Mathf.Lerp(tilt, camTilt, camTiltTime * Time.deltaTime);


        else if (tilt != 0)
        {
            tilt = Mathf.Lerp(tilt, 0, camTiltTime * Time.deltaTime);

            //Round the camera tilt to zero:
            if (tilt < 0 && tilt > -0.05f)
                tilt = 0;
            else if (tilt > 0 && tilt < 0.05f)
                tilt = 0;
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



    /// <summary>
    /// Sets proper value for a specific situatuation:
    /// </summary>
    void SetSpeedForSliding()
    {

        if (playerCollision.onSlope)
            currentActSpeed_sliding = actSpeedOnSlope_sliding;
        else if (landWithBoost)
            currentActSpeed_sliding = actSpeedOnLanding_sliding;
        else
            currentActSpeed_sliding = actSpeedOnFloor_sliding;



    }



    IEnumerator StopFOVManagement()
    {
        freezeFOV = true;
        yield return new WaitForSeconds(0.5f);
        freezeFOV = false;



    }




    void MoveCamera()
    {
        

        if (isSliding && !CheckSlidingForFOV())
        {

            camStepSpeed = cam_currentSlideSpeed * Time.deltaTime;
            camTargetPos = Vector3.MoveTowards(Cam.transform.localPosition, defaultCamPos + Vector3.down * cam_SlideHeight, camStepSpeed);
            cam_CurrentMaxFov = cam_SlideFOV;

        }



        else
        {




            if (Crouching)
            {
                camStepSpeed = cam_currentCrouchingSpeed * Time.deltaTime;
                camTargetPos = Vector3.MoveTowards(Cam.transform.localPosition, defaultCamPos + Vector3.down * cam_CrouchHeight, camStepSpeed);


            }
            else
            {
                camStepSpeed = cam_standingSpeed * Time.deltaTime;
                camTargetPos = Vector3.MoveTowards(Cam.transform.localPosition, defaultCamPos, camStepSpeed);



            }
        }



    }

}

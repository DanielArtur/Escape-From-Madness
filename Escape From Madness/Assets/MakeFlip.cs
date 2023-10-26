using System.Collections;
using Unity.Rendering.HybridV2;
using UnityEngine;


public class MakeFlip : MonoBehaviour
{

    public static MakeFlip Instance;

    [Header("References")]
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] private Transform cameraTransform;

    [SerializeField] GameObject mainBody_mesh;
    [SerializeField] GameObject hands_mesh;
    [SerializeField] GameObject secondBody;

    [SerializeField] Transform headPoint;


    [Space(20), Header("Settings")]
    [SerializeField] float vdistanceForFlip = 10;

    [SerializeField, Tooltip("The speed of the roll")] float Speed = 0.3f;

    [SerializeField, Tooltip("How long it will take to decrease rolling speed to 0")]
    float decreaseDuration = 2f;

    [SerializeField, Tooltip("How fast the camera will return to its normal position")]
    float returnPosDuration = 2f;

    [SerializeField, Tooltip("How fast the camera will return to its normal Z rotation")]
    float returnZRotDuration = 2f;

    [SerializeField, Tooltip("How fast the camera will return to its normal rotation")]
    float returnRotDuration = 2f;

    [Tooltip("Layers that are considered as obstacles")]
    [SerializeField] LayerMask layers;

    [SerializeField, Tooltip("How fast the camera will return to its original point")]
    float camReturnSpeed = 4;

    [SerializeField, Tooltip("How long it will take to decrease rolling speed to 0")]
    float decreaseSpeedDurationv2 = 2f;

    [SerializeField, Tooltip("How fast the camera will return to its normal position")]
    float returnPosDurationv2 = 2f;


    // Technical variables:
    bool rolling = false;

    Vector3 camPrevPos; // Default camera position to return after a roll.
    Transform Player;
    Transform OrientationForBody;

    float currentSpeed; // Current speed of the roll.

    // Cam rotation before the flip
    Quaternion previousCamRotation;

    [HideInInspector] public bool return_Position = false;  // Is true at the end of the roll.
    [HideInInspector] public bool return_Rotation = false;  // Is true at the end of the roll.

    [HideInInspector] public bool canMove_roll = false;  // When player can actually shift while rolling.
    [HideInInspector] public bool speedDecrease = false; // When the speed of the roll movement can be decreased.




    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);

        //Mark cameras original point:
        camPrevPos = cameraTransform.localPosition;

        // Assign all references:
        Player = gameObject.transform.parent.gameObject.transform;
        OrientationForBody = mainBody_mesh.transform.parent.transform;
    }

    public void Start()
    {
        currentSpeed = Speed;

    }

    public void Update()
    {
        if (rolling)
        {
            // Hold the camera where SecondBody's head is located. Also set camera rotation to head's rotation.
            if (!return_Position)
            {
                cameraTransform.position = headPoint.position;
                Debug.Log("Test");
                //Test
            }
            if (!return_Rotation)
                cameraTransform.rotation = headPoint.rotation;

            //Start rolling in the perfect moment. This gives realistic feeling while rolling.
            if (canMove_roll)
            {
                // Move position while rolling.
                Player.Translate(OrientationForBody.forward * currentSpeed);
            }
        }

    }


    /// <summary>
    /// This method is responsible for starting the roll. It deactivates main mesh and activates second variant.
    /// </summary>
    public void StartFlip()
    {
        // If player is too close to object, the roll will not be executed.
        if (Physics.Raycast(new Vector3(Player.position.x, Player.position.y * 1.1f, Player.position.z), OrientationForBody.forward * 6, 10f, layers))
        {
            Debug.Log("Player is too close to wall");
            return;
        }

        // Store the rotation of the camera before starting the flip.
        previousCamRotation = cameraTransform.localRotation;

        // Dont let player use movement while rolling:
        playerMovement.cantMove = true;

        // Dont let the camera be affected by the player´s input while rolling.
        playerMovement.dontMoveCamera = true;
        CameraController.Instance.canMoveCamera = false;

        rolling = true;

        //Activate our model for the roll and deactivate main player model.
        mainBody_mesh.SetActive(false);
        hands_mesh.SetActive(false);

        secondBody.SetActive(true);


        
    }



    /// <summary>
    /// This method is responsible for ending the roll.
    /// </summary>
    public void StopFlip()
    {
        Debug.Log("Stop flip");

        rolling = false;
        canMove_roll = false;

        // Unlock the movement
        playerMovement.cantMove = false;
        playerMovement.dontMoveCamera = false;

        // Return the camera rotation to the original rotation:
        //   CameraController.Instance.StartReturnCursor(previousCamRotation, 0.8f);
        //   CameraController.Instance.canMoveCamera = true;

        // Enable the default mesh and disable the second mesh (SecondBody).
        secondBody.SetActive(false);

        mainBody_mesh.SetActive(true);
        hands_mesh.SetActive(true);

        // Reset the flip speed:
        currentSpeed = Speed;

        return_Rotation = false;
        return_Position = false;
    }


    /// <summary>
    /// Decreases the rolling speed by given time. This method is called in Animation event.
    /// </summary>
    public IEnumerator DecreaseRollingSpeed()
    {

        float t = 0;


        // Decrease the speed until its 0 or the roll is over.
        while (t <= decreaseDuration && rolling)
        {
            t += Time.deltaTime;

            currentSpeed = Mathf.Lerp(currentSpeed, 0, t / decreaseDuration);

            yield return null;

        }



    }


    public IEnumerator DecreaseRollingSpeedv2()
    {

        float t = 0;
        float start = currentSpeed;

        // Decrease the speed until its 0 or the roll is over.
        while (t <= decreaseSpeedDurationv2 && rolling)
        {
            t += Time.deltaTime;

             currentSpeed = Mathf.Lerp(start, 0, t / decreaseSpeedDurationv2);

            yield return null;

        }

        Debug.Log("v2 on");

    }

    float currentDurationStart;

    /// <summary>
    /// This method returns camera to its original position after flip
    /// </summary>
    /// <returns></returns>
    public IEnumerator ReturnCameraToOriginalPosition()
    {
        float t = 0;
        
        float currentDuration = returnPosDuration;
        Vector3 start = cameraTransform.localPosition;
        float mag = cameraTransform.localPosition.magnitude;

         mag = (mag / 100) * 80;

        bool speedUp = false;
        while (t <= returnPosDuration)
        {
            t += Time.deltaTime;

            if(speedUp)
                currentDuration = Mathf.Lerp(currentDurationStart, 0, t / returnPosDuration);


            Debug.Log("v3");
            //Return camera to the default position if the rolling animation is almost over.
            cameraTransform.localPosition = Vector3.Lerp(start, camPrevPos, t / currentDuration);


            if (cameraTransform.localPosition.magnitude > mag)
            {
                speedUp = true;
                 currentDurationStart = currentDuration;
                Debug.Log("Decrease");
            }

            yield return null;
        }

        cameraTransform.localPosition = camPrevPos;

    }

    public IEnumerator ReturnCameraToOriginalPositionv2()
    {
        float t = 0;
        Vector3 start = cameraTransform.localPosition;

        while (t <= returnPosDurationv2)
        {
            t += Time.deltaTime;


            //Return camera to the default position if the rolling animation is almost over.
            cameraTransform.localPosition = Vector3.Lerp(start, camPrevPos, t / returnPosDurationv2);

            yield return null;
        }

        cameraTransform.localPosition = camPrevPos;
        Debug.Log("v2");
    }




    /// <summary>
    /// This method activates the courotines responsible for returning the camera to its original position and rotation. It also stops the camera from following the headpoint of SecondBody. (See 75)
    /// </summary>
    public void StartPositionReturnCourotine()
    {

        return_Position = true;

        if (!v2 || v3)
            StartCoroutine(ReturnCameraToOriginalPosition());
        else
            StartCoroutine(ReturnCameraToOriginalPositionv2());
        
    }

    public void StartRotationReturnCourotine()
    {

        return_Rotation = true;
        
        // StartCoroutine(ReturnCameraToOriginalRotationZ());
        CameraController.Instance.ReturnRotation_Start(previousCamRotation, returnRotDuration);
    }


    /// <summary>
    /// This method activates the courotine responsible for decreasing the players speed at the end of the roll.
    /// </summary>
    public void StartSpeedReduction()
    {

        if (!v2)  //Test
            StartCoroutine(DecreaseRollingSpeed());
        else
            StartCoroutine(DecreaseRollingSpeedv2());
    }


    public void UnlockMovementForBody()
    {
        playerMovement.cantMove = false;

    }


    public bool v2;
    public bool v3;
}

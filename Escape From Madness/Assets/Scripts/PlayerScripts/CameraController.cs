using System.Collections;
using UnityEngine;

/// <summary>
/// This  Script is responsible for cam movement and "fov control"
/// </summary>
public class CameraController : MonoBehaviour
{

    public static CameraController Instance;

    [Header("References")]
    [SerializeField] private PlayerMovementv3 PlayerController;
    [SerializeField] private Transform orientationForPlayer;


    [Header("Turning")]
    public float TurnSpeed; //how fast we turn when on the ground
    private float TurnSpeedInAir; //how fast we turn when in air
    private float TurnSpeedOnWalls; //how fast we turn when on the walls
    private float LookUpSpeed; //how fast we look up and down
    private float YTurn; //how much we have turned left and right
    private float XTurn; //how much we have turned Up or Down
    [Space(6f)] public float MaxLookAngle = 65; //how much we can look up
    public float MinLookAngle = -30; //how much we can look down

    // Input variables
    private float CamX;
    private float CamY;

    // These variables control the temporary limits of the camera:
    float yLowest;
    float yMaximum;

    [Space(8f), SerializeField, Tooltip("This value will be cut down from new yRotation. It will affect the minimum margin")] float lowestClamp = 55;
    [SerializeField, Tooltip("This value will be cut down from new yRotation. It will affect the maximum margin")] float maximumClamp = 55;

    // Other:
    public bool canMoveCamera = true; // Whether camera can be moved
    bool wasLimited = false;



    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);


        // ??
        TurnSpeedInAir = TurnSpeed / 2;
        TurnSpeedOnWalls = TurnSpeed / 4.33333333333333333333f;
        LookUpSpeed = TurnSpeed / 1.315789473684210526f;


    }



    void Update()
    {

        //get our players rotation amount for turning
        CamX = Input.GetAxis("MouseX");
        CamY = Input.GetAxis("MouseY");

        if (!canMoveCamera)
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


    void TurnCamera(float Hor, float turn, float Ver)
    {
        //add our inputs to our turn value
        YTurn += Hor * turn;

        XTurn -= Ver * LookUpSpeed;
        XTurn = Mathf.Clamp(XTurn, MinLookAngle, MaxLookAngle);

        //  Debug.Log("YTurn: " + YTurn);

        if (PlayerController.isSliding)
        {
            if (!wasLimited)
                SetLimitForCameraRotation(lowestClamp, maximumClamp);

            YTurn = Mathf.Clamp(YTurn, yLowest, yMaximum);
        }

        else
            wasLimited = false;

        //turn our character

        //  transform.eulerAngles += new Vector3(-CamY, CamX, 0);
        transform.rotation = Quaternion.Euler(XTurn, YTurn, PlayerController.tilt);
        orientationForPlayer.rotation = Quaternion.Euler(0, YTurn, 0);
        //   orientationForPlayer.rotation = Quaternion.Euler(0, transform.rotation.y, 0);



    }


    //!!!!
    /// <summary>
    /// This method applies a limit to the rotation of the camera. 
    /// </summary>
    void SetLimitForCameraRotation(float lowest, float maximum)
    {
        wasLimited = true;
        yLowest = YTurn - lowest;
        yMaximum = YTurn + maximum;

    }



    /// <summary>
    /// This method starts the IENumerator that returns the camera to a specific rotation.
    /// </summary>
    /// <param name="previousRotation"></param>
    /// <param name="duration"></param>
    public void ReturnRotation_Start(Quaternion previousRotation, float duration)
    {
        StartCoroutine(ReturnRotation(previousRotation, duration));


    }




    /// <summary>
    /// This method returns camera rotation to original rotation.
    /// </summary>
    /// <returns></returns>
    IEnumerator ReturnRotation(Quaternion previousRotation, float duration)
    {
        float t = 0;

        Quaternion start = transform.rotation;

        while (t < duration)
        {
            t += Time.deltaTime;

            transform.rotation = Quaternion.Lerp(start, previousRotation, t / duration);

            //Debug.Log("Running cursor return and " + transform.rotation);
            yield return null;
        }
        transform.rotation = previousRotation;
        canMoveCamera = true;

        Debug.Log("Can move camera");
    }



}
using UnityEngine;


/// <summary>
/// This script controls the timing of the actual position shift during rolling.
/// </summary>

public class RollMovementController : MonoBehaviour
{
    [SerializeField] MakeFlip makeFlip;


    /// <summary>
    /// Dont move the player immediately after the start of the animation. (This is made to give good feeling from the roll)
    /// </summary>
    public void StartRollMovement()
    {
        makeFlip.canMove_roll = true;
        Debug.Log("Start RollMovement");
    }

   



    /// <summary>
    /// Starts to move camera to the original position. This method is called by Animation Event at the end of the rolling animation to get more realistic feeling.
    /// </summary>
    public void ReturnPosition()
    {
        // The DecreaseRollingSpeed() and ReturnCameraToOriginalPos() are called in the makeFlip script because SecondBody will be deactivated before the end of the ReturnCameraToOriginalPos courotine. This will prevent courotine interference.
        makeFlip.StartPositionReturnCourotine();
    }

    public void ReturnRotation()
    {
        makeFlip.StartRotationReturnCourotine();


    }


    /// <summary>
    /// Decreases position shift speed at the end of the roll. Gives more realistic feeling to the roll.
    /// </summary>
    public void DecreaseRollSpeed()
    {
        makeFlip.StartSpeedReduction();

    }


    public void UnlockMovement()
    {

        makeFlip.UnlockMovementForBody();


    }


}

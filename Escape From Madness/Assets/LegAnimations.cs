using UnityEngine;

public class LegAnimations : MonoBehaviour
{
    //Singelton
    static public LegAnimations instance;

    [Header("Instances")]
    [SerializeField] Animator animator;
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] MoveBody moveBody;

    Vector2 currentAnimationBlendVector; 
    Vector2 animationVelocity;

    [Header("Settings")]
    [SerializeField, Tooltip("How long it takes to change animation")] float animationSmoothTime = 0.1f; 
  
    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    private void FixedUpdate()
    {
        //Smooth our input values. This makes transitions between animations slower.
        currentAnimationBlendVector = Vector2.SmoothDamp(currentAnimationBlendVector, new Vector2(playerMovement.horInputInFixed, playerMovement.verInputInFixed), ref animationVelocity, animationSmoothTime);

        // Send data to our BlendTree:
        animator.SetFloat("moveX", currentAnimationBlendVector.x);
        animator.SetFloat("moveZ", currentAnimationBlendVector.y);
    }


    public void PlayInAirAnimations()
    {
        moveBody.SetPositionForAirAnimations();
        animator.SetBool("InAir", true);
      
    }



    public void PlayOnGroundAimations()
    {
        moveBody.SetDefaultBodyPosition();
        animator.SetBool("InAir", false);
       
    }

    public void PlayCrouchAnimation()
    {

        animator.SetBool("Crouching", true);

    }

    public void StopCrouchAnimation()
    {

        animator.SetBool("Crouching", false);


    }

    public void PlaySlidingAnimation()
    {

        moveBody.SetPositionForSliding();
        animator.SetBool("Sliding", true);

    }

    public void StopSlidingAnimation()
    {

        moveBody.SetPositionFromSlidingToDefault();
        animator.SetBool("Sliding", false);

    }

}

using UnityEngine;

public class ArmAnimations : MonoBehaviour
{
    //Singelton:
    static public ArmAnimations instance;

    [Header("Instances")]
    [SerializeField] Animator animator;
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] HandPosition handPosition;


    private void Awake()
    {
        if(instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    private void FixedUpdate()
    {
        // Send data to our BlendTree:
        animator.SetFloat("moveX", playerMovement.horInputInFixed);
        animator.SetFloat("moveZ", playerMovement.verInputInFixed);
    }

  
    public void PlayOnGroundAnimations()
    {
        handPosition.SetDefaultArmPosition();
        animator.SetBool("InAir", false);
        animator.SetBool("Jumping", false);

    }

  
    public void PlayJumpingAnimation()
    {
        handPosition.SetPositionForJumping();
        animator.SetBool("Jumping", true);
       

    }

    public void PlayInAirAnimation()
    {
        handPosition.SetPositionInAir();
        animator.SetBool("InAir", true);


    }

    public void PlaySlidingAnimation()
    {
        animator.SetBool("Sliding", true);
    }
    public void StopSlidingAnimation()
    {
        animator.SetBool("Sliding", false);
    }
}

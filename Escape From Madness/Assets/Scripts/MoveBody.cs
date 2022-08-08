
using UnityEngine;

public class MoveBody : MonoBehaviour
{
    [SerializeField] public Animator animator;

    public void SetPositionForAirAnimations()
    {
        animator.SetBool("InAir", true);
       
    }

    public void SetDefaultBodyPosition()
    {

        animator.SetBool("InAir", false);
        animator.SetBool("Sliding", false);
    }

    public void SetPositionForSliding()
    {


        animator.SetBool("Sliding", true);
    }

    public void SetPositionFromSlidingToDefault()
    {


        animator.SetBool("Sliding", false);
    }

}

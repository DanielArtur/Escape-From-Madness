
using UnityEngine;

public class HandPosition : MonoBehaviour
{
    [SerializeField] Animator animator;


  

    public void SetPositionForJumping()
    {
        animator.SetBool("Jumping", true);
      

    }
    public void SetPositionInAir()
    {
        animator.SetBool("InAir", true);


    }

    public void SetDefaultArmPosition()
    {
      
        animator.SetBool("InAir", false);
        animator.SetBool("Jumping", false);
    }
}

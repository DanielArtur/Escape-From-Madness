using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    // referenssi pelaajn kontrolleriin:
    public CharacterController controller;

    // liikkumiseen liittyvät muuttujat;
    public float currentSpeed = 12f; 
    public float gravity = -9.81f;
    public float jumpHeight = 3f;

    [SerializeField] private float sprintSpeed; // Juoksun nopeus
    [SerializeField] private float walkSpeed; // Kävelyn nopeus
    [SerializeField] private float chrouchSpeed; // chrouchin nopeus


    // Pelaajan animaatio
    [SerializeField] private Animator anim;

    public Transform groundCheck;
    public float groundDistance = 0.4f;
    public LayerMask groundMask;

    Vector3 velocity;
    bool isGrounded;

   

    private Transform playerTransform;
    private float height;  // Pituus

    public float slideSpeed = 20;
    private bool isSliding = false;
    private Vector3 slideForward;
    private float slideTimer = 0.0f;
    [SerializeField] public float slideTimerMax = 2.5f;

    


    private void Start()
    {
        controller = GetComponent<CharacterController>();

        playerTransform = transform;
        height = controller.height;
    }


    void Update()
    {
   
        float speed = walkSpeed;

        // Painetaanko shift-paniketta?
        if(controller.isGrounded && Input.GetKey(KeyCode.LeftShift))
        {
            // Juoksu
            speed = sprintSpeed;
        }
        // crouchaaminen: > c
        if(Input.GetKey(KeyCode.LeftControl) && !Input.GetKey(KeyCode.LeftShift))
        {
            controller.height = 3;
            // Hidastetaan pelaajaa kyykyssä:
            currentSpeed = chrouchSpeed;
            
        } else
        {
            controller.height = height;
        }

        // Likuminen
        if(Input.GetKeyDown(KeyCode.LeftControl) && !isSliding)
        {
            slideTimer = 0.0f;
            isSliding = true;
            slideForward = playerTransform.forward;
            Debug.Log("slide");

        }

        if(isSliding)
        {
            controller.height = 3;
            currentSpeed = slideSpeed;
            velocity = slideForward * currentSpeed;
            slideTimer += Time.deltaTime;
        }

        if(slideTimer > slideTimerMax)
        {

            isSliding = false;

        }



        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

        if (isGrounded && velocity.y < 0)
        {
            velocity.y = -2f;
        }

        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");




        Vector3 move = transform.right * x + transform.forward * z;

        controller.Move(move * speed * Time.deltaTime);

        if (Input.GetAxis("Horizontal") != 0 || Input.GetAxis("Vertical") != 0)
        {
            anim.SetTrigger("Running");


        }
        else
        {

            anim.SetTrigger("Staying");


        }


        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            velocity.y = Mathf.Sqrt(jumpHeight * -2 * gravity);
        }

        velocity.y += gravity * Time.deltaTime;

        controller.Move(velocity * Time.deltaTime);

       
       


    }

}

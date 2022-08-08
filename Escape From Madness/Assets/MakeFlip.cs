using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeFlip : MonoBehaviour
{

    public static MakeFlip instance;


    [Header("References")]
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] private Transform cameraTransform;
    [SerializeField] Transform point;

    [Header("Settings")]
    [SerializeField] float rotationDuration = 1;

  


    private void Awake()
    {
        if(instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    public void StartFlip()
    {
        playerMovement.dontMoveCamera = true;
        transform.rotation = cameraTransform.rotation;
        playerMovement.cameraController.canMove = false;


        StartCoroutine(Rotate(rotationDuration));

        //  playerMovement.Rigid.AddForce(playerMovement.faceOrientation.forward * 4, ForceMode.Impulse);


    }




    void StopFlip()
    {
        playerMovement.dontMoveCamera = true;
        playerMovement.cameraController.canMove = true;

        Debug.Log("Stop");

    }

    IEnumerator Rotate(float duration)
    {

        float t = 0.0f;

        while (t < duration)
        {
            t += Time.deltaTime;

            
            cameraTransform.RotateAround(point.transform.position, cameraTransform.right, 360 / (duration * (1 / Time.deltaTime)));
            yield return null;

        }
        
        StopFlip();

    }

}

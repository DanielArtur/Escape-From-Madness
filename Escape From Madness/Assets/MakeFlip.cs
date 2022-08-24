using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeFlip : MonoBehaviour
{

    public static MakeFlip instance;


    [Header("References")]
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] private Transform cameraTransform;
    [SerializeField] Transform OrientationForLowerBody;
    [SerializeField] GameObject lowerBody;
    [SerializeField] Transform point;
    [SerializeField] Transform pointForLowerBody;

    [Header("Settings")]
    [SerializeField] float rotationDuration = 1;
    [SerializeField] float rotationDuration2 = 0.9f;



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

       // StartCoroutine(RotateLowerBody(rotationDuration2));
        //StartCoroutine(Rotate(rotationDuration));

        //  playerMovement.Rigid.AddForce(playerMovement.faceOrientation.forward * 4, ForceMode.Impulse);


    }




    void StopFlip()
    {
        playerMovement.dontMoveCamera = true;
        playerMovement.cameraController.canMove = true;

        OrientationForLowerBody.localPosition = new Vector3(0, 0, 0);
        lowerBody.transform.localPosition = new Vector3(0, 0.06000137f, -2.4f);
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


    IEnumerator RotateLowerBody(float duration)
    {

        float t = 0.0f;
        float triggerValue = (duration / 100) * 100;
        float triggerValue2 = (duration / 100) * 10;
        bool wasActivated = false;

        while (t < duration)
        {
            t += Time.deltaTime;


            OrientationForLowerBody.transform.RotateAround(point.transform.position, OrientationForLowerBody.transform.right, 360 / (duration * (1 / Time.deltaTime)));

            if (t >= triggerValue2 && !wasActivated)
            {
                wasActivated = true;
                lowerBody.SetActive(false);

                Debug.Log("First trigger value breached");
            }
            if (t >= triggerValue)
            {
                lowerBody.SetActive(true);
                Debug.Log("Second trigger value breached");
            }

            yield return null;

        }

        

    }

}

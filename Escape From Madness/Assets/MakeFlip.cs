using UnityEngine;

public class MakeFlip : MonoBehaviour
{

    public static MakeFlip instance;

    [Header("References")]
    [SerializeField] PlayerMovementv3 playerMovement;
    [SerializeField] private Transform cameraTransform;

    [SerializeField] GameObject mainBody_mesh;
    [SerializeField] GameObject hands_mesh;
    [SerializeField] GameObject secondBody;

    [SerializeField] Transform headPoint;
    
    bool rolling = false;
    Vector3 camPrevPos;


   
    private void Awake()
    {
        if(instance == null)
            instance = this;
        else
            Destroy(gameObject);

        //Mark cameras original point:
        camPrevPos = cameraTransform.localPosition;

     

    }

    public void Update()
    {
        if(rolling)
        {
            cameraTransform.rotation = headPoint.rotation;
            cameraTransform.position = headPoint.position;

        }

        else if(!rolling && Vector3.Distance(cameraTransform.localPosition, camPrevPos) > 0.001f)
        {

            cameraTransform.localPosition = Vector3.MoveTowards(cameraTransform.localPosition, camPrevPos, 1f * Time.deltaTime);

        }

    }



    public void StartFlip()
    {
        playerMovement.dontMoveCamera = true;
        playerMovement.cameraController.canMove = false;

        rolling = true;

        mainBody_mesh.SetActive(false);
        hands_mesh.SetActive(false);

        secondBody.SetActive(true);

        //  playerMovement.Rigid.AddForce(playerMovement.faceOrientation.forward * 4, ForceMode.Impulse);


    }




    public void StopFlip()
    {
        rolling = false;

        playerMovement.dontMoveCamera = true;
        playerMovement.cameraController.canMove = true;

        secondBody.SetActive(false);

        mainBody_mesh.SetActive(true);
        hands_mesh.SetActive(true);

        Debug.Log("Stop");

       

    }

   

}

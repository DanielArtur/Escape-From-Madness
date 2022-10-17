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
    
    
    [Space(20), Header("Settings")]
    [SerializeField] float  distanceForFlip = 10; 



    // Technical variables:
    bool rolling = false;

    Vector3 camPrevPos;
    Transform Player;
    Transform OrientationForBody;

    [SerializeField] Transform OrientationForBody2;

    private void Awake()
    {
        if(instance == null)
            instance = this;
        else
            Destroy(gameObject);

        //Mark cameras original point:
        camPrevPos = cameraTransform.localPosition;

        Player = gameObject.transform.parent.gameObject.transform;
        OrientationForBody = mainBody_mesh.transform.parent.transform;
    }

    public void Update()
    {
        if(rolling)
        {
            cameraTransform.rotation = headPoint.rotation;
            cameraTransform.position = headPoint.position;

            Player.transform.position = Vector3.MoveTowards(Player.transform.position, mainBody_mesh.transform.forward, distanceForFlip * Time.deltaTime);
            Debug.Log(OrientationForBody.rotation.y);
        }

        else if(!rolling && Vector3.Distance(cameraTransform.localPosition, camPrevPos) > 0.001f)
        {

            cameraTransform.localPosition = Vector3.MoveTowards(cameraTransform.localPosition, camPrevPos, 2f * Time.deltaTime);

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

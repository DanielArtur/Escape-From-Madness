using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wallSlideCollCheck : MonoBehaviour
{
    [SerializeField] PlayerCollisionv2 PlayerCol;
    private void OnTriggerEnter(Collider col)
    {
        
        if (col.CompareTag("WallRun") && PlayerCol.canCheck)
       {
            PlayerCol.blockWallRun = true;
            

        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.CompareTag("WallRun"))
        {
            PlayerCol.blockWallRun = false;
          

        }
    }
}

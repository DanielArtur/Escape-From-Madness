using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private void Awake()
    {
        Physics.gravity = new Vector3(0, -30, 0);
        Application.targetFrameRate = 360;
        Cursor.lockState = CursorLockMode.Confined;
        Cursor.visible = false;
    }
   
    
   
}

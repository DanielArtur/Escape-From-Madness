using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] int targetFrameRate = 180;

    private void Awake()
    {
        Physics.gravity = new Vector3(0, -30, 0);
        Application.targetFrameRate = targetFrameRate;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }
   
    
   
}

using QFSW.QC;
using UnityEngine;

public class ConsoleCommands : MonoBehaviour
{
    [Header("References")]
    [SerializeField] PlayerMovementv3 playerMovementv3;


    [Header("returnPlayer")]
    [SerializeField] GameObject Player;
    [SerializeField] Transform respawnPoint;
    private void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
    }

    [Command("returnPlayer", MonoTargetType.All)]
    private void returnPlayer()
    {
        Player.transform.position = respawnPoint.transform.position;



    }

    [Command("SetGravity", MonoTargetType.All)]
    private void SetGravity(float Gravity)
    {
        Physics.gravity = new Vector3(0, Gravity, 0);



    }

    [Command("SetFPSLimit", MonoTargetType.All)]
    private void SetFPSLimit(int fpsLimit)
    {
        Application.targetFrameRate = fpsLimit;



    }
}

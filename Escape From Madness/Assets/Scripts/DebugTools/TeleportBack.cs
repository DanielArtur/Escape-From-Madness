using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportBack : MonoBehaviour
{
    // Where the player will be:
    [SerializeField] Transform destination;

    [SerializeField] GameObject player;


    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            player.transform.position = destination.transform.position;
            player.GetComponent<Rigidbody>().velocity = Vector3.zero;       
        
        }
    }
}

using UnityEngine;

public class TeleportBackOnPress : MonoBehaviour
{
    Vector3 startPosition;

    Rigidbody rb;
    private void Awake()
    {
        startPosition = transform.position;
    }

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (Input.GetKey("e"))
        {
            rb.velocity = Vector3.zero;
            transform.position = startPosition;
            Debug.Log("Return player To its staritng position...");
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InvertGravity : MonoBehaviour
{
    private Rigidbody2D rb;
    private PlayerController Player;
    void Start()
    {
        Player = GetComponent<PlayerController>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space)) {
            rb.gravityScale *= -1;
        }
    }
}

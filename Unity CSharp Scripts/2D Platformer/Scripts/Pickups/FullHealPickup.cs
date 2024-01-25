using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FullHealPickup : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        // Only Heal if colliding with the player
        if(collision.tag == "Player")
        {
            Health playerHealth = collision.gameObject.GetComponent<Health>();
            playerHealth.ReceiveHealing(playerHealth.maximumHealth);
            Destroy(this.gameObject);
        }
    }
}

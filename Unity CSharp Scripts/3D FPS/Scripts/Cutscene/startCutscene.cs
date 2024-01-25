using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class startCutscene : MonoBehaviour
{
    //this is the reffrence to the player and the camera
    public GameObject Player;
    public GameObject cutsceneCam;

    /*makes reffrence to the box colider in game and starts the cutscene cam while turning off
     the player state off*/
    void OnTriggerEnter(Collider collider)
    {
        this.gameObject.GetComponent<BoxCollider>().enabled = false;
        cutsceneCam.SetActive(true);
        Player.SetActive(false);
        StartCoroutine(FinishCut());

        /*dictates when the cutscene will stop and the player stated turns back on while the
         cutscene cam turns off*/
        IEnumerator FinishCut()
        {
            yield return new WaitForSeconds(10);
            Player.SetActive(true);
            cutsceneCam.SetActive(false);
        }


    }
}

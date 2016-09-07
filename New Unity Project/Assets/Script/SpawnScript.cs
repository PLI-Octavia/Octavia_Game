using UnityEngine;
using System.Collections;

public class SpawnScript : MonoBehaviour {
    
    public Calcul calcul;
    public GameObject[] all_number;
    // Use this for initialization
	void Start () {
        	
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            this.calcul = new Calcul();
            calcul.generateCalcul();

            Instantiate(all_number[calcul.x], transform.position ,Quaternion.identity);
            Instantiate(all_number[calcul.y], transform.position, Quaternion.identity);
        }
    }
}
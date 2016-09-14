using UnityEngine;
using System.Collections;
using System;

public class SpawnScript : MonoBehaviour {
    
    public Calcul calcul;
    public GameObject[] all_number;
    public GameObject[] all_operation;
   
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            int resultat;
            this.calcul = new Calcul();
            calcul.generateCalcul();

            Instantiate(all_number[calcul.x], transform.position ,Quaternion.identity);
            Instantiate(all_operation[calcul.operation], new Vector3((transform.position.x + 0.5f), transform.position.y, 0.0f), Quaternion.identity);
            Instantiate(all_number[calcul.y], new Vector3((transform.position.x + 1), transform.position.y, 0.0f), Quaternion.identity);
            Instantiate(all_operation[3], new Vector3((transform.position.x + 1.6f), transform.position.y, 0.0f), Quaternion.identity);

            resultat = calcul.doCalcul(calcul.x, calcul.y, calcul.operation);
            ParthNumber(resultat);
        }
    }

    void ParthNumber(int resultat)
    {
        string res = res = resultat.ToString();
        int i = 0;
        float x = 2.1f;

        while (i != res.Length)
        { 
            Instantiate(all_number[(int)Char.GetNumericValue(res[i])], new Vector3((transform.position.x + x), transform.position.y, 0.0f), Quaternion.identity);
            x += 0.3f;
            i++;
        }
    }

}
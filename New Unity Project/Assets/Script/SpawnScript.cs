﻿using UnityEngine;
using System.Collections;
using System;

public class SpawnScript : MonoBehaviour {
    
    public Calcul calcul;
    public GameObject[] all_number;
    public GameObject[] all_operation;
    private GameObject EmptyGameObject;

	// Update is called once per frame
	void Update () {
        //Pour le moment on fait l'apparation au clic on vera plus tard de faire au temps
        if (Input.GetKeyDown(KeyCode.Space))
        {
            int resultat;

            //On génère l'objet vide qui va contenir le calcul et on attribue tout ce dont on aura besoin
            this.EmptyGameObject = new GameObject();
            EmptyGameObject.transform.position = new Vector3(-5, 4, 0);
            EmptyGameObject.AddComponent<DetectClick>();
            EmptyGameObject.AddComponent<BoxCollider2D>();
            //On génère le calcul
            this.calcul = new Calcul();
            calcul.generateCalcul();

            //Link du premier chiffre au parent
            GameObject Param1Child = Instantiate(all_number[calcul.x]) as GameObject;
            Param1Child.transform.parent = EmptyGameObject.transform;
            Param1Child.transform.position = transform.position;

            //Link du premier opérateur au parent
            GameObject OpChild = Instantiate(all_operation[calcul.operation]) as GameObject;
            OpChild.transform.parent = EmptyGameObject.transform;
            OpChild.transform.position = new Vector3((transform.position.x + 0.5f), transform.position.y, 0.0f);

            //Link du deuxième chiffre au parent
            GameObject Param2Child = Instantiate(all_number[calcul.y]) as GameObject;
            Param2Child.transform.parent = EmptyGameObject.transform;
            Param2Child.transform.position = new Vector3((transform.position.x + 1f), transform.position.y, 0.0f);

            //Link du deuxième opérateur au parent
            GameObject EgalChild = Instantiate(all_operation[3]) as GameObject;
            EgalChild.transform.parent = EmptyGameObject.transform;
            EgalChild.transform.position = new Vector3((transform.position.x + 1.6f), transform.position.y, 0.0f);
                        
            resultat = calcul.doCalcul(calcul.x, calcul.y, calcul.operation);
            ParthNumber(resultat);
        }
    }

    void ParthNumber(int resultat)
    {
        //On convertit le resultat du calcul en String afin de parther les chiffres
        string res = res = resultat.ToString();
        int i = 0;
        float x = 2.1f;

        while (i != res.Length)
        {
            //On génère les chiffres un par un et on les places
            GameObject AnwserChild = Instantiate(all_number[(int)Char.GetNumericValue(res[i])]) as GameObject;
            AnwserChild.transform.parent = EmptyGameObject.transform;
            AnwserChild.transform.position = new Vector3((transform.position.x + x), transform.position.y, 0.0f);
            x += 0.3f;
            i++;
        }
    }

}
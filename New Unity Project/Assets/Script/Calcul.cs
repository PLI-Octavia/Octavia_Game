using UnityEngine;
using System.Collections;
using System;

public class Calcul {

    public int x;
    public int y;
    public int operation;

    //Fonction qui génère les paramètres du calcule de façon aléatoire
    public void generateCalcul()
    {
        System.Random rnd = new System.Random();

        this.operation = rnd.Next(0, 3);
        this.x = rnd.Next(0, 9);
        if (this.operation == 1)
            this.y = rnd.Next(0, this.x);
        else
            this.y = rnd.Next(0, 9);
        
    }

    //Calcule l'opération et retourne le bon ou le mauvais résultats en fonction du besoin
    public int doCalcul(int x, int y, int op, int correct)
    {
        int resultat;

        if (op == 0)
        {
            resultat = x + y;
        }
        else if (op == 1)
        {
            resultat = x - y;
        }
        else
        {
            resultat = x * y;
        }
        if (correct == 1)
            return (resultat);
        else
        {
            System.Random rnd = new System.Random();
            resultat = rnd.Next(0, resultat);
            return resultat;
        }
    }

}
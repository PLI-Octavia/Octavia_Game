using UnityEngine;
using System.Collections;
using System;

public class Calcul {

    public int x;
    public int y;
    public int operation;

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

    public int doCalcul(int x, int y, int op)
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
        return (resultat);
    }

}
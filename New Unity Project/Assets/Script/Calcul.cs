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
       
        this.x = rnd.Next(0,9);
        this.y = rnd.Next(0, 9);
        Debug.Log("X : " + x + "Y:" + y);
    }
}
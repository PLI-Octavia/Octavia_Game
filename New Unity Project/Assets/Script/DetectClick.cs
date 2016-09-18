using UnityEngine;
using System.Collections;

public class DetectClick : MonoBehaviour {

    private float speed = 1.0f;
    public int isCorrect;
	// Use this for initialization
	void Start () {
        
	}
	
	// Update is called once per frame
	void Update () {
        transform.Translate(Vector3.down * Time.deltaTime * speed);
    }

    //Fonction qui appelé quand on clic sur un calcule
    void OnMouseDown()
    {  
        if (isCorrect == 1)
        {
            Debug.Log("C'est gagné");
        }
        else
        {
            Debug.Log("C'est Perdu");
        }
        this.CleanCalcul();
    }

    //On détruit le GameObject et tous ses enfants
    private void CleanCalcul()
    {
        int i = 0;

        while (i != transform.childCount)
        {
            Transform tmp = this.gameObject.transform.GetChild(i);
            GameObject.Destroy(tmp.gameObject);
            i++;
        }
        GameObject.Destroy(this.gameObject);
    }
}
    
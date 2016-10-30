using UnityEngine;
using System.Collections;
using GlobalDatas;

public class DetectClick : MonoBehaviour {

    private float speed = 1.0f;
    public bool isCorrect;

	// Use this for initialization
	void Start () {
        
	}
	
	// Update is called once per frame
	void Update () {
        transform.Translate(Vector3.down * Time.deltaTime * speed);

        //Si la limite est atteinte on verifie si le calcul était bon ou pas
        if (transform.position.y <= -3.30)
        {
            if (isCorrect == false)
                GameManagement.Life -= 1;
            else
                GameManagement.Score += 1;
            this.CleanCalcul();
            GameManagement.ChangeLevel();
            GameManagement.checkDeath();
        }
    }

    //Fonction qui appelé quand on clic sur un calcule
    void OnMouseDown()
    {
        if (isCorrect == false)
        {
            GameManagement.Score += 1;
        }
        else
        {
            GameManagement.Life -= 1;
            
        }
        this.CleanCalcul();
        GameManagement.ChangeLevel();
        GameManagement.checkDeath();
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
    
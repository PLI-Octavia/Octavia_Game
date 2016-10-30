using UnityEngine;
using System.Collections;
using GlobalDatas;

public class LifeManagement : MonoBehaviour {

    private int LastLife;
    private GameObject[] life;
    public GameObject lifePrefabs;
    
	// Use this for initialization
	void Start () {
        int i = 0;
        float initX = 1.0f;
        float initY = -4.5f;

        life = new GameObject[5];
        this.LastLife = GameManagement.Life;
        while (i < 5)
        {
            GameObject tmp = Instantiate(this.lifePrefabs) as GameObject;
            tmp.transform.position =  new Vector3(initX, initY, 0.0f);
            life[i] = tmp;
            initX += 1.0f;
            Debug.Log(i);
            i++;
        }
	}
	
	// Update is called once per frame
	void Update () {
	    if (GameManagement.Life != this.LastLife)
        {
            GameObject.Destroy(this.life[GameManagement.Life]);
            this.LastLife = GameManagement.Life;
        }
	}
}

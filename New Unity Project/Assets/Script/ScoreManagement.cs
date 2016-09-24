using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using GlobalDatas;

public class ScoreManagement : MonoBehaviour {

    private int lastScore = 0;
	// Use this for initialization
	void Start () {
	 
	}
	
	// Update is called once per frame
	void Update () {
	    if (GameManagement.Score != lastScore)
        {
            Text tmp = GetComponent<Text>();
            lastScore = GameManagement.Score;
            tmp.text = "Score : " + GameManagement.Score;
        }
	}
}
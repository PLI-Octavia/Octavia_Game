using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using GlobalDatas;

public class EndScriptScore : MonoBehaviour {

	// Use this for initialization
	void Start () {
            Text tmp = GetComponent<Text>();
            tmp.text = " " + GameManagement.Score;
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}

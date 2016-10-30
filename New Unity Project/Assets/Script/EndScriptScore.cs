using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using GlobalDatas;
using System.Runtime.InteropServices;

public class EndScriptScore : MonoBehaviour {

    [DllImport("__Internal")]
    private static extern int SendScore(int score);
    // Use this for initialization
    void Start () {
        SendScore(GameManagement.Score);
        Text tmp = GetComponent<Text>();
        tmp.text = " " + GameManagement.Score;
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}

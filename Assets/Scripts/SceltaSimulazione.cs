using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceltaSimulazione : MonoBehaviour {

    public static string scelta;

    public static void Start(){
        scelta = "";
    }

    public void scegliSi() {
        scelta = "si";
    }

    public void scegliNo() {
        scelta = "no";
    }
    
    public string getScelta() {
        return scelta;
    }
}

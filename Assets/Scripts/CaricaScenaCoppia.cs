using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CaricaScenaCoppia : MonoBehaviour
{
    
    public void caricaScena()
    {
        SceneManager.LoadScene("ScenaCoppia", LoadSceneMode.Single);
    }
}

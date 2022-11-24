using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CaricaScenaPosizione : MonoBehaviour
{
    
    public void caricaScena()
    {
        SceneManager.LoadScene("ScenaPosizione", LoadSceneMode.Single);
    }
}

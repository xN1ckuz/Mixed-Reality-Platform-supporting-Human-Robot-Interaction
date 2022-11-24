using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CaricaScenaVelocita : MonoBehaviour
{
    
    public void caricaScena()
    {
        SceneManager.LoadScene("ScenaVelocita", LoadSceneMode.Single);
    }
}

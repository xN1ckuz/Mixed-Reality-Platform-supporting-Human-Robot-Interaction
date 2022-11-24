using UnityEngine;
using UnityEngine.SceneManagement;

public class CaricaScenaMenuPrincipale : MonoBehaviour {
    
    public void caricaScena(){
        SceneManager.LoadScene("ScenaMenuPrincipale", LoadSceneMode.Single);
    }

}

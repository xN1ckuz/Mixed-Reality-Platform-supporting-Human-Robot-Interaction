using QRTracking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EsciSimulazione : MonoBehaviour {
    public void Esci() {
        GameObject qrCodesManager = GameObject.Find("QRCodesManager");
        qrCodesManager.GetComponent<QRCodesManager>().pulisciLista();
        GameObject qrCode = GameObject.Find("QRCodesManager").GetComponent<QRCodesVisualizer>().qrCodeObject;
        if(qrCode != null) {
            Destroy(qrCode);
        }
        SceneManager.LoadScene("ScenaMenuPrincipale", LoadSceneMode.Single);
    }
}

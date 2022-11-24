using QRTracking;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GestioneQR : MonoBehaviour {

    private GameObject qrCode; 

    public void gestisci() {
        GameObject toggleQr = GameObject.Find("ToggleQR");
        GameObject iconAndText = toggleQr.transform.GetChild(4).gameObject;
        TextMeshPro testo = iconAndText.transform.GetChild(0).GetComponent<TextMeshPro>();
        qrCode = GameObject.Find("QRCodesManager").GetComponent<QRCodesVisualizer>().qrCodeObject;
        if(qrCode != null){
            if(qrCode.activeSelf) {
                qrCode.SetActive(false);
                testo.SetText("Attiva Codice QR");
            } else {
                qrCode.SetActive(true);
                testo.SetText("Disattiva Codice QR");
            }
        }
    }
}

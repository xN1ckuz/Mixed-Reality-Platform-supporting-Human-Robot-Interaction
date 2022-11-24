using QRTracking;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CalibrazioneQRCode : MonoBehaviour {

    private Vector3 vettoreTrasformazionePosizione = new Vector3(0.499475f, -0.12405f, 0.25069f);
    private TextMeshPro calibrazione;
    private GameObject panda;
    private QRCodesManager qrCodesManager;
    private bool coroutineRunning = false;
    public AudioSource audioSource;
    private Vector3 posizionePanda;
    private Vector3 rotazionePanda;



    public void Calibra(){
        calibrazione = GameObject.Find("calibrazione").GetComponent<TextMeshPro>();
        qrCodesManager = GameObject.Find("QRCodesManager").GetComponent<QRCodesManager>();
        panda = GameObject.Find("panda_link0");
        calibrazione.SetText("Calibrating...");
        if (!coroutineRunning) {
            StartCoroutine(calibraCoroutine());
        } else {
            calibrazione.SetText("A calibration is already running.");
        }
    }


    IEnumerator calibraCoroutine(){
        coroutineRunning = true;
        qrCodesManager.StartQRTracking();
        AggiornamentoRobot aggiornaRobot  = GameObject.Find("Panda").GetComponent<AggiornamentoRobot>();
        if (aggiornaRobot.isSfereAttive()){
            aggiornaRobot.disattivaSfere();
        }
        yield return new WaitForSeconds(5);
        GameObject qrCode = qrCodesManager.GetComponent<QRCodesVisualizer>().qrCodeObject;
        GameObject pannello = GameObject.Find("PannelloScenaSimulazione");
        if (qrCode != null && qrCode.transform.position != new Vector3(0, 0, 0)){
            //Assegno la rotazione del QRCode al Panda
            Vector3 rotazione = qrCode.transform.rotation.eulerAngles;
            panda.transform.eulerAngles = rotazione;
            //Aggiusto la rotazione
            panda.transform.Rotate(180, 0, 0, Space.Self);
            //Compenso una eventuale leggera rotazione del QR
            panda.transform.Rotate(-rotazione.x, 0, 0, Space.Self);
            //Assegno la posizione del QRCode al Panda
            panda.transform.position = qrCode.transform.position;
            //Traslazione del robot dal QRCode
            panda.transform.Translate(vettoreTrasformazionePosizione, Space.Self);
            posizionePanda = panda.transform.position;
            rotazionePanda = panda.transform.eulerAngles;
            yield return new WaitForSeconds(5);
            aggiornaRobot.attivaRobot();
            //Segnale Acustico di avvenuta calibrazione
            audioSource.Play();
            yield return new WaitWhile(() => audioSource.isPlaying);
            SceneManager.LoadScene("ScenaSceltaSimulazione", LoadSceneMode.Additive);
            pannello.SetActive(false);
            SceltaSimulazione.Start();
            yield return new WaitUntil(() => !SceltaSimulazione.scelta.Equals(""));
            if (SceltaSimulazione.scelta.Equals("si")) {
                calibrazione.SetText("Calibration Done");
                aggiornaRobot.disattivaRobot();
                aggiornaRobot.attivaSfere();
            } else {
                calibrazione.SetText("Calibrate Again");
                aggiornaRobot.disattivaRobot();
                aggiornaRobot.disattivaSfere();
                panda.transform.position = new Vector3(0, 0, 0);
            }
            SceneManager.UnloadSceneAsync("ScenaSceltaSimulazione");
            pannello.SetActive(true);
        } else {
            calibrazione.SetText("Error. QRCode not found. Do the Calibration Again");
        }
        qrCodesManager.StopQRTracking();
        qrCodesManager.GetComponent<QRCodesVisualizer>().clear();
        coroutineRunning = false;
    }

    public Vector3 getPosizione(){
        return posizionePanda;
    }

    public Vector3 getRotazione()
    {
        return rotazionePanda;
    }



}

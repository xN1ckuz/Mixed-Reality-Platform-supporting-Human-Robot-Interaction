using TMPro;
using UnityEngine;

public class ButtonSpheres : MonoBehaviour {

    private TextMeshPro t0;
    private TextMeshPro t1;
    private CalibrazioneQRCode calibrazioneQRCode;
    private GameObject panda;
    private AggiornamentoRobot ar;

    public void Start(){
        t0 = GameObject.Find("ToggleSpheres").transform.GetChild(4).transform.GetChild(0).GetComponent<TextMeshPro>();
        t1 = GameObject.Find("calibrazione").GetComponent<TextMeshPro>();
        calibrazioneQRCode = GameObject.Find("ButtonCalibraOnPressed").GetComponent<CalibrazioneQRCode>();
        panda = GameObject.Find("Panda");
        ar = panda.GetComponent<AggiornamentoRobot>();
    }

    public void Update(){
        if (ar.isSfereAttive()){
            t0.SetText("Hide Joint Spheres");
        } else {
            t0.SetText("Show Joint Spheres");
        }
    }

    public void sphereAction(){
        if(calibrazioneQRCode.getPosizione() == new Vector3(0, 0, 0)) {
            t1.SetText("You need to perform a calibration first");
        } else {
            if (ar.isSfereAttive()) {
                ar.disattivaSfere();
            } else {
                ar.attivaSfere();
            }
        }
    }
}

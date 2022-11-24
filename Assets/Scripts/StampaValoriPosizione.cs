using RosSharp.RosBridgeClient;
using System;
using TMPro;
using UnityEngine;

public class StampaValoriPosizione : MonoBehaviour {
    
    //Dichiarazione Variabili Principali
    private SubscriberPosizione subscriberPosizione;
    private const string misura = " rad";

    //Dichiarazione TextMeshPro
    private TextMeshPro tmp1;
    private TextMeshPro tmp2;
    private TextMeshPro tmp3;
    private TextMeshPro tmp4;
    private TextMeshPro tmp5;
    private TextMeshPro tmp6;
    private TextMeshPro tmp7;
    private TextMeshPro tmp8;
    private TextMeshPro tmp9;
    
    void Start(){
        subscriberPosizione = GameObject.Find("ROSConnector").GetComponent<SubscriberPosizione>();
        
        //Assegnazione delle TextMeshPro
        tmp1 = GameObject.Find("labelPosizione1").GetComponent<TextMeshPro>();
        tmp2 = GameObject.Find("labelPosizione2").GetComponent<TextMeshPro>();
        tmp3 = GameObject.Find("labelPosizione3").GetComponent<TextMeshPro>();
        tmp4 = GameObject.Find("labelPosizione4").GetComponent<TextMeshPro>();
        tmp5 = GameObject.Find("labelPosizione5").GetComponent<TextMeshPro>();
        tmp6 = GameObject.Find("labelPosizione6").GetComponent<TextMeshPro>();
        tmp7 = GameObject.Find("labelPosizione7").GetComponent<TextMeshPro>();
        tmp8 = GameObject.Find("labelPosizione8").GetComponent<TextMeshPro>();
        tmp9 = GameObject.Find("labelPosizione9").GetComponent<TextMeshPro>();
    }

    void Update(){
        if(subscriberPosizione.getPosizioni().Count != 0){
            aggiorna(tmp1, subscriberPosizione.getPosizioni()[0]);
            aggiorna(tmp2, subscriberPosizione.getPosizioni()[1]);
            aggiorna(tmp3, subscriberPosizione.getPosizioni()[2]);
            aggiorna(tmp4, subscriberPosizione.getPosizioni()[3]);
            aggiorna(tmp5, subscriberPosizione.getPosizioni()[4]);
            aggiorna(tmp6, subscriberPosizione.getPosizioni()[5]);
            aggiorna(tmp7, subscriberPosizione.getPosizioni()[6]);
            aggiorna(tmp8, subscriberPosizione.getPosizioni()[7]);
            aggiorna(tmp9, subscriberPosizione.getPosizioni()[8]);
        } else {
            tmp1.SetText("");
            tmp2.SetText("");
            tmp3.SetText("");
            tmp4.SetText("");
            tmp5.SetText("");
            tmp6.SetText("");
            tmp7.SetText("");
            tmp8.SetText("");
            tmp9.SetText("");
        }   
    }

    private void aggiorna(TextMeshPro t, double posizione){
        t.SetText(String.Format("{0:0.0000}", posizione) + misura);
    }
}

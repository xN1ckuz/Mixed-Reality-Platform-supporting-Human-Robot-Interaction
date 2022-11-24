using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;
using QRTracking;
using System;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Input;

public class AggiornamentoRobot : MonoBehaviour {
    
    private SubscriberPosizione subscriberPosizione;

    //Oggetti dei Giunti
    private GameObject panda_link0;
    private GameObject panda_link1;
    private GameObject panda_link2;
    private GameObject panda_link3;
    private GameObject panda_link4;
    private GameObject panda_link5;
    private GameObject panda_link6;
    private GameObject panda_link7;
    private GameObject panda_hand;

    //Angolo di Posizione dei vari giunti
    private float posizionePandaLink1;
    private float posizionePandaLink2;
    private float posizionePandaLink3;
    private float posizionePandaLink4;
    private float posizionePandaLink5;
    private float posizionePandaLink6;
    private float posizionePandaLink7;

    //Sfere di avviso sulla Posizione
    private GameObject sfera_link1;
    private GameObject sfera_link2;
    private GameObject sfera_link3;
    private GameObject sfera_link4;
    private GameObject sfera_link5;
    private GameObject sfera_link6;
    private GameObject sfera_link7;

    //Valori Limite dei giunti (in Radianti), specifici del Franka Emika Panda
    private const float max_link1 = 2.8973f;
    private const float min_link1 = -2.8973f;
    private const float max_link2 = 1.7628f;
    private const float min_link2 = -1.7628f;
    private const float max_link3 = 2.8973f;
    private const float min_link3 = -2.8973f;
    private const float max_link4 = -0.0698f;
    private const float min_link4 = -3.0718f;
    private const float max_link5 = 2.8973f;
    private const float min_link5 = -2.8973f;
    private const float max_link6 = 3.7525f;
    private const float min_link6 = -0.0175f;
    private const float max_link7 = 2.8973f;
    private const float min_link7 = -2.8973f;

    //Valori di scarto (20° e 35° trasformati in radianti)
    private const float scarto1 = 0.3490f;
    private const float scarto2 = 0.6108f;

    //Colori Migliorati
    private Color32 verde = new Color32(0, 102, 0, 255);
    private Color32 giallo = new Color32(204, 204, 0, 255);
    private Color32 rosso = new Color32(153, 0, 0, 255);

    private bool aggiornaPanda = false;
    private bool setPosizione = false;

    void Start(){
        subscriberPosizione = GameObject.Find("ROSConnector").GetComponent<SubscriberPosizione>();

        //Assegnazione Giunti
        panda_link0 = GameObject.Find("panda_link0");
        panda_link1 = GameObject.Find("panda_link1");
        panda_link2 = GameObject.Find("panda_link2");
        panda_link3 = GameObject.Find("panda_link3");
        panda_link4 = GameObject.Find("panda_link4");
        panda_link5 = GameObject.Find("panda_link5");
        panda_link6 = GameObject.Find("panda_link6");
        panda_link7 = GameObject.Find("panda_link7");
        panda_hand = GameObject.Find("panda_hand");
        
        //Assegnazione Sfere
        sfera_link1 = GameObject.Find("sfera_link1");
        sfera_link2 = GameObject.Find("sfera_link2");
        sfera_link3 = GameObject.Find("sfera_link3");
        sfera_link4 = GameObject.Find("sfera_link4");
        sfera_link5 = GameObject.Find("sfera_link5");
        sfera_link6 = GameObject.Find("sfera_link6");
        sfera_link7 = GameObject.Find("sfera_link7");

        //Disattivo il robot
        disattivaRobot();
        disattivaSfere();
    }
    
    void Update(){
        //Aggiornamento Posizione dei Giunti
        if (subscriberPosizione.getPosizioni().Count != 0){
            //Settaggio Posizione Iniziale
            if (!aggiornaPanda){
                posizionePandaLink1 = (float)((subscriberPosizione.getPosizioni()[0] * 180) / Math.PI);
                posizionePandaLink2 = (float)((subscriberPosizione.getPosizioni()[1] * 180) / Math.PI);
                posizionePandaLink3 = (float)((subscriberPosizione.getPosizioni()[2] * 180) / Math.PI);
                posizionePandaLink4 = (float)((subscriberPosizione.getPosizioni()[3] * 180) / Math.PI);
                posizionePandaLink5 = (float)((subscriberPosizione.getPosizioni()[4] * 180) / Math.PI);
                posizionePandaLink6 = (float)((subscriberPosizione.getPosizioni()[5] * 180) / Math.PI);
                posizionePandaLink7 = (float)((subscriberPosizione.getPosizioni()[6] * 180) / Math.PI);
                panda_link1.transform.Rotate(0, -posizionePandaLink1, 0, Space.Self);
                panda_link2.transform.Rotate(0, -posizionePandaLink2, 0, Space.Self);
                panda_link3.transform.Rotate(0, -posizionePandaLink3, 0, Space.Self);
                panda_link4.transform.Rotate(0, -posizionePandaLink4, 0, Space.Self);
                panda_link5.transform.Rotate(0, -posizionePandaLink5, 0, Space.Self);
                panda_link6.transform.Rotate(0, -posizionePandaLink6, 0, Space.Self);
                panda_link7.transform.Rotate(0, -posizionePandaLink7, 0, Space.Self);
                aggiornaPanda = true;
            }
            //Modifica Posizione in tempo Reale
            //Panda_joint1
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[0] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink1))) {
                float differenza1 = (float) ((subscriberPosizione.getPosizioni()[0] * 180) / Math.PI) - posizionePandaLink1;
                posizionePandaLink1 = (float)((subscriberPosizione.getPosizioni()[0] * 180) / Math.PI);
                panda_link1.transform.Rotate(0, -differenza1, 0, Space.Self);
            }
            //Panda_joint2
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[1] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink2))) {
                float differenza2 = (float)((subscriberPosizione.getPosizioni()[1] * 180) / Math.PI) - posizionePandaLink2;
                posizionePandaLink2 = (float)((subscriberPosizione.getPosizioni()[1] * 180) / Math.PI);
                panda_link2.transform.Rotate(0, -differenza2, 0, Space.Self);
            }
            //Panda_joint3
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[2] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink3))) {
                float differenza3 = (float)((subscriberPosizione.getPosizioni()[2] * 180) / Math.PI) - posizionePandaLink3;
                posizionePandaLink3 = (float)((subscriberPosizione.getPosizioni()[2] * 180) / Math.PI);
                panda_link3.transform.Rotate(0, -differenza3, 0, Space.Self);
            }
            //Panda_joint4
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[3] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink4))){
                float differenza4 = (float)((subscriberPosizione.getPosizioni()[3] * 180) / Math.PI) - posizionePandaLink4;
                posizionePandaLink4 = (float)((subscriberPosizione.getPosizioni()[3] * 180) / Math.PI);
                panda_link4.transform.Rotate(0, -differenza4, 0, Space.Self);
            }
            //Panda_joint5
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[4] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink5))){
                float differenza5 = (float)((subscriberPosizione.getPosizioni()[4] * 180) / Math.PI) - posizionePandaLink5;
                posizionePandaLink5 = (float)((subscriberPosizione.getPosizioni()[4] * 180) / Math.PI);
                panda_link5.transform.Rotate(0, -differenza5, 0, Space.Self);
            }
            //Panda_joint6
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[5] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink6))){
                float differenza6 = (float)((subscriberPosizione.getPosizioni()[5] * 180) / Math.PI) - posizionePandaLink6;
                posizionePandaLink6 = (float)((subscriberPosizione.getPosizioni()[5] * 180) / Math.PI);
                panda_link6.transform.Rotate(0, -differenza6, 0, Space.Self);
            }
            //Panda_joint7
            if (!String.Format("{0:0.000}", (float)((subscriberPosizione.getPosizioni()[6] * 180) / Math.PI)).Equals(String.Format("{0:0.000}", posizionePandaLink7))){
                float differenza7 = (float)((subscriberPosizione.getPosizioni()[6] * 180) / Math.PI) - posizionePandaLink7;
                posizionePandaLink7 = (float)((subscriberPosizione.getPosizioni()[6] * 180) / Math.PI);
                panda_link7.transform.Rotate(0, -differenza7, 0, Space.Self);
            }
            //Colore Sfere
            coloreSfera(sfera_link1, (float)subscriberPosizione.getPosizioni()[0], min_link1, max_link1);
            coloreSfera(sfera_link2, (float)subscriberPosizione.getPosizioni()[1], min_link2, max_link2);
            coloreSfera(sfera_link3, (float)subscriberPosizione.getPosizioni()[2], min_link3, max_link3);
            coloreSfera(sfera_link4, (float)subscriberPosizione.getPosizioni()[3], min_link4, max_link4);
            coloreSfera(sfera_link5, (float)subscriberPosizione.getPosizioni()[4], min_link5, max_link5);
            coloreSfera(sfera_link6, (float)subscriberPosizione.getPosizioni()[5], min_link6, max_link6);
            coloreSfera(sfera_link7, (float)subscriberPosizione.getPosizioni()[6], min_link7, max_link7);
        }
        //Eventuale Debug, da rimuovere in seguito
        if (!setPosizione){
            setPosizione = true;
        }
    }

    private void coloreSfera(GameObject sfera, float posizione, float min, float max) {
        if(posizione < max && posizione >= max - scarto1) {
            sfera.GetComponent<Renderer>().material.SetColor("_Color", rosso);
        } else if (posizione < max - scarto1 && posizione >= max - scarto2) {
            sfera.GetComponent<Renderer>().material.SetColor("_Color", giallo);
        } else if (posizione < max - scarto2 && posizione >= min + scarto2) {
            sfera.GetComponent<Renderer>().material.SetColor("_Color", verde);
        } else if (posizione > min + scarto1 && posizione < min + scarto2) {
            sfera.GetComponent<Renderer>().material.SetColor("_Color", giallo);
        } else if (posizione > min && posizione <= min + scarto1) {
            sfera.GetComponent<Renderer>().material.SetColor("_Color", rosso);
        }
    }

    public void attivaRobot() {
        panda_link0.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        Debug.Log(panda_link0.transform.childCount);
        panda_link1.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_link2.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_link3.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_link4.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_link5.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_link6.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_link7.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(true);
        panda_hand.SetActive(true);
    }

    public void disattivaRobot() {
        panda_link0.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link1.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link2.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link3.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link4.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link5.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link6.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_link7.transform.GetChild(0).transform.GetChild(0).transform.GetChild(0).gameObject.SetActive(false);
        panda_hand.SetActive(false);
    }

    public bool isSfereAttive() {
        if (sfera_link1.activeSelf) {
            return true;
        } else {
            return false;
        }
    }
    public void attivaSfere() {
        sfera_link1.SetActive(true);
        sfera_link2.SetActive(true);
        sfera_link3.SetActive(true);
        sfera_link4.SetActive(true);
        sfera_link5.SetActive(true);
        sfera_link6.SetActive(true);
        sfera_link7.SetActive(true);
    }
    public void disattivaSfere() {
        sfera_link1.SetActive(false);
        sfera_link2.SetActive(false);
        sfera_link3.SetActive(false);
        sfera_link4.SetActive(false);
        sfera_link5.SetActive(false);
        sfera_link6.SetActive(false);
        sfera_link7.SetActive(false);
    }

    public GameObject getRobotBase(){
        return panda_link0;
    }
}

using RosSharp.RosBridgeClient;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using System.Linq;

public class StampaValoriVelocita : MonoBehaviour
{
    //Dichiarazione Variabili Principali
    public RosConnector rosConnector;
    public SubscriberVelocita subscriberVelocita;
    public string misura = " rad/s";
    
    //Dichiarazione label
    public GameObject labelVelocita1;
    public GameObject labelVelocita2;
    public GameObject labelVelocita3;
    public GameObject labelVelocita4;
    public GameObject labelVelocita5;
    public GameObject labelVelocita6;
    public GameObject labelVelocita7;
    public GameObject labelVelocita8;
    public GameObject labelVelocita9;
    //Dichiarazione TextMeshPro
    public TextMeshPro tmp1;
    public TextMeshPro tmp2;
    public TextMeshPro tmp3;
    public TextMeshPro tmp4;
    public TextMeshPro tmp5;
    public TextMeshPro tmp6;
    public TextMeshPro tmp7;
    public TextMeshPro tmp8;
    public TextMeshPro tmp9;


    // Start is called before the first frame update
    void Start()
    {
        subscriberVelocita = rosConnector.GetComponent<SubscriberVelocita>();
        //Assegnazione delle label
        labelVelocita1 = GameObject.Find("labelVelocita1");
        labelVelocita2 = GameObject.Find("labelVelocita2");
        labelVelocita3 = GameObject.Find("labelVelocita3");
        labelVelocita4 = GameObject.Find("labelVelocita4");
        labelVelocita5 = GameObject.Find("labelVelocita5");
        labelVelocita6 = GameObject.Find("labelVelocita6");
        labelVelocita7 = GameObject.Find("labelVelocita7");
        labelVelocita8 = GameObject.Find("labelVelocita8");
        labelVelocita9 = GameObject.Find("labelVelocita9");
        tmp1 = labelVelocita1.GetComponent<TextMeshPro>();
        tmp2 = labelVelocita2.GetComponent<TextMeshPro>();
        tmp3 = labelVelocita3.GetComponent<TextMeshPro>();
        tmp4 = labelVelocita4.GetComponent<TextMeshPro>();
        tmp5 = labelVelocita5.GetComponent<TextMeshPro>();
        tmp6 = labelVelocita6.GetComponent<TextMeshPro>();
        tmp7 = labelVelocita7.GetComponent<TextMeshPro>();
        tmp8 = labelVelocita8.GetComponent<TextMeshPro>();
        tmp9 = labelVelocita9.GetComponent<TextMeshPro>();
    }

    // Update is called once per frame
    void Update()
    { 
        if(subscriberVelocita.getVelocita().Count != 0)
        {
            tmp1.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[0]) + misura);
            tmp2.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[1]) + misura);
            tmp3.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[2]) + misura);
            tmp4.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[3]) + misura);
            tmp5.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[4]) + misura);
            tmp6.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[5]) + misura);
            tmp7.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[6]) + misura);
            tmp8.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[7]) + misura);
            tmp9.SetText(String.Format("{0:0.0000}", subscriberVelocita.getVelocita()[8]) + misura);
        } else
        {
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
}

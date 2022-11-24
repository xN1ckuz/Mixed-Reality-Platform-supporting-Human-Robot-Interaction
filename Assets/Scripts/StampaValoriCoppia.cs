using RosSharp.RosBridgeClient;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using System.Linq;

public class StampaValoriCoppia : MonoBehaviour
{
    //Dichiarazione Variabili Principali
    public RosConnector rosConnector;
    public SubscriberCoppia subscriberCoppia;
    public string misura = " Nm";
    
    //Dichiarazione label
    public GameObject labelCoppia1;
    public GameObject labelCoppia2;
    public GameObject labelCoppia3;
    public GameObject labelCoppia4;
    public GameObject labelCoppia5;
    public GameObject labelCoppia6;
    public GameObject labelCoppia7;
    public GameObject labelCoppia8;
    public GameObject labelCoppia9;
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
        subscriberCoppia = rosConnector.GetComponent<SubscriberCoppia>();
        //Assegnazione delle label
        labelCoppia1 = GameObject.Find("labelCoppia1");
        labelCoppia2 = GameObject.Find("labelCoppia2");
        labelCoppia3 = GameObject.Find("labelCoppia3");
        labelCoppia4 = GameObject.Find("labelCoppia4");
        labelCoppia5 = GameObject.Find("labelCoppia5");
        labelCoppia6 = GameObject.Find("labelCoppia6");
        labelCoppia7 = GameObject.Find("labelCoppia7");
        labelCoppia8 = GameObject.Find("labelCoppia8");
        labelCoppia9 = GameObject.Find("labelCoppia9");
        tmp1 = labelCoppia1.GetComponent<TextMeshPro>();
        tmp2 = labelCoppia2.GetComponent<TextMeshPro>();
        tmp3 = labelCoppia3.GetComponent<TextMeshPro>();
        tmp4 = labelCoppia4.GetComponent<TextMeshPro>();
        tmp5 = labelCoppia5.GetComponent<TextMeshPro>();
        tmp6 = labelCoppia6.GetComponent<TextMeshPro>();
        tmp7 = labelCoppia7.GetComponent<TextMeshPro>();
        tmp8 = labelCoppia8.GetComponent<TextMeshPro>();
        tmp9 = labelCoppia9.GetComponent<TextMeshPro>();
    }

    // Update is called once per frame
    void Update()
    {
        if (subscriberCoppia.getCoppia().Count != 0)
        {
            tmp1.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[1]) + misura);
            tmp3.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[0]) + misura);
            tmp2.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[2]) + misura);
            tmp4.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[3]) + misura);
            tmp5.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[4]) + misura);
            tmp6.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[5]) + misura);
            tmp7.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[6]) + misura);
            tmp8.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[7]) + misura);
            tmp9.SetText(String.Format("{0:0.0000}", subscriberCoppia.getCoppia()[8]) + misura);
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
}

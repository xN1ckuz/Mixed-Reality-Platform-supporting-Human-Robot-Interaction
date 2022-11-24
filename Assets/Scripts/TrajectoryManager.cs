using RosSharp.RosBridgeClient;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Scripting;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Input;

public class TrajectoryManager : MonoBehaviour {

    private StringPublisher stringPublisher;
    private SubscriberTraiettoria subscriberTraiettoria;
    private WaypointPosePublisher waypointPosePublisher;
    private GameObject end_effector;
    private TextMeshPro t0;
    private TextMeshPro t1;
    private static List<GameObject> listaSfere;
    private static List<GameObject> listaWaypoints;
    private CalibrazioneQRCode calibrazioneQRCode;
    private List<Pose> waypoints;
    private Color32 orange;
    private Color32 azzurro;
    private AggiornamentoRobot aggiornaRobot;

    private bool coroutineRunning = false;
    private static bool waypointSent = false;
    
    public void Start(){
        orange = new Color32(255, 102, 0, 255);
        azzurro = new Color32(0, 102, 204, 255);
        listaSfere = new List<GameObject>();
        listaWaypoints = new List<GameObject>();
        end_effector = FindByName("End_Effector");
        aggiornaRobot = FindByName("Panda").GetComponent<AggiornamentoRobot>();
        end_effector.SetActive(false);
        stringPublisher = GameObject.Find("ROSConnector").GetComponent<StringPublisher>();
        subscriberTraiettoria = GameObject.Find("ROSConnector").GetComponent<SubscriberTraiettoria>();
        t0 = GameObject.Find("calibrazione").GetComponent<TextMeshPro>();
        calibrazioneQRCode = GameObject.Find("ButtonCalibraOnPressed").GetComponent<CalibrazioneQRCode>();
        t1 = GameObject.Find("ToggleHideTrajectory").transform.GetChild(4).transform.GetChild(0).GetComponent<TextMeshPro>();
        waypoints = new List<Pose>();
        waypointPosePublisher = GameObject.Find("ROSConnector").GetComponent<WaypointPosePublisher>();
    }

    static GameObject FindByName(string goName){
        GameObject go = null;
        foreach (GameObject obj in Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[]){
            if (obj.name.Equals(goName)){
                go = obj;
                return go;
            }
        }
        return null;
    }

    public void gestisciSfereTraiettoria(){
        if (!coroutineRunning){
            if (listaSfere.Count == 0) {
                t0.SetText("You need to generate first the trajectory." +
                    "Move the end effector to generate a trajectory.");
            } else {
                cancellaSfere(listaSfere);
                cancellaSfere(listaWaypoints);
                end_effector.transform.localPosition = new Vector3(0, 0, 0);
                Quaternion quaternione = Quaternion.Euler(0, 0, 0);
                end_effector.transform.localRotation = quaternione;
                end_effector.SetActive(false);
                aggiornaRobot.disattivaRobot();
                t0.SetText("Trajectory deleted, move the end-effector to generate a new trajectory.");
            }
        } else {
            t0.SetText("Wait, a Trajectory is generating");
        }
    }

    public void pubblicaMessaggio(){
        subscriberTraiettoria.clearTrajectoryPoints();
        stringPublisher.inviaMessaggio();
        t0.SetText("Loading Trajectory");
        if (!coroutineRunning){
            if (calibrazioneQRCode.getPosizione() != new Vector3(0, 0, 0)){
                StartCoroutine(aggiornaTraiettoria());
            } else {
                t0.SetText("You need to perform a calibration first");
                return;
            }
        } else {
            t0.SetText("Wait, a trajectory is generating");
            return;
        }
        //DA ATTIVARE PER DEBUGGING SU UNITY, COMMENTARE SOPRA
        //StartCoroutine(aggiornaTraiettoria());      
    }

    IEnumerator aggiornaTraiettoria(){
        coroutineRunning = true;
        yield return new WaitForSeconds(1f);
        List<Point> trajectory_points = new List<Point>(subscriberTraiettoria.getTrajectoryPoints());
        Debug.Log("Sono dentro aggiorna");
        Debug.Log("Numero di Sfere: " + trajectory_points.Count.ToString());
        if (trajectory_points.Count == 0){
            t0.SetText("Network Error. Try Again");
            coroutineRunning = false;
            yield break;
        }
        StartCoroutine(spawnSphere(trajectory_points));
        t0.SetText("Trajectory Generated");
        coroutineRunning = false;
    }

    public void cancellaSfere(List<GameObject> list){
        foreach(GameObject go in list){
            Destroy(go);
        }
        list.Clear();
    }

    public List<GameObject> getListaSfere(){
        return listaSfere;
    }

    IEnumerator spawnSphere(List<Point> points){
        listaWaypoints.Clear();
        for (int i=0; i < points.Count; i++){
            if (i == 0){
                yield return new WaitForSeconds(points[i].time);
            } else {
                yield return new WaitForSeconds(points[i].time - points[i-1].time);
            }

            //Creazione delle sfere
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            listaSfere.Add(sphere);

            //Setto grandezza e colore delle sfere
            sphere.transform.localScale = new Vector3(0.015f, 0.015f, 0.015f);
            sphere.GetComponent<Renderer>().material.SetColor("_Color", azzurro);

            //Posizione e rotazione della terna base del robot rispetto al QRCode
            Vector3 posizionePanda = calibrazioneQRCode.getPosizione();
            Vector3 rotazionePanda = calibrazioneQRCode.getRotazione();
            sphere.transform.position = posizionePanda;
            sphere.transform.eulerAngles = rotazionePanda;

            //Terna delle posizioni della traiettoria
            float pos_x = (float)points[i].positions[0];
            float pos_y = (float)points[i].positions[1];
            float pos_z = (float)points[i].positions[2];
            sphere.transform.Translate(new Vector3((-pos_y), pos_z, pos_x), Space.Self);
            
            //Terna della rotazione del punto della traiettoria
            float rot_x = (float)((points[i].positions[3] * 180) / Math.PI);
            float rot_y = (float)((points[i].positions[4] * 180) / Math.PI);
            float rot_z = (float)((points[i].positions[5] * 180) / Math.PI);
            sphere.transform.Rotate(rot_y, rot_z, rot_x, Space.Self);

            //Disattiva la prima e l'ultima sfera
            if (i == 0 || i == points.Count - 1){
                sphere.SetActive(false);
            }          
        }
        createWaypoints();
        yield return null;
    }

    //Crea ogni 5 sfere un punto di via (Scartando la prima e l'ultima posizione)
    private void createWaypoints(){
        for(int i = 0; i < listaSfere.Count; i++){
            if((i % 5) == 0 && i != 0 && i != listaSfere.Count-1){
                listaWaypoints.Add(listaSfere[i]);
                listaSfere[i].GetComponent<Renderer>().material.SetColor("_Color", orange);
                listaSfere[i].AddComponent<NearInteractionGrabbable>();
                listaSfere[i].AddComponent<ObjectManipulator>();
                listaSfere[i].transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
            }
        }
    }

    //Invia a ROS i waypoint
    public void sendWaypoints(){
        if (listaSfere.Count != 0){
            waypoints.Clear();
            for (int i = 0; i < listaWaypoints.Count; i++){
                Vector3 position = aggiornaRobot.getRobotBase().transform.InverseTransformPoint
                    (listaWaypoints[i].transform.position);
                Quaternion rotation = listaWaypoints[i].transform.localRotation;
                Pose pose = new Pose(position, rotation);
                waypoints.Add(pose);
            }
            cancellaSfere(listaSfere);
            cancellaSfere(listaWaypoints);
            waypointPosePublisher.inviaMessaggio();
            waypointSent = true;
            subscriberTraiettoria.clearTrajectoryPoints();
            t0.SetText("Loading Trajectory with defined Waypoints");
            StartCoroutine(aggiornaTraiettoria());
        } else {
            t0.SetText("You need first to generate the trajectory");
            waypointSent = false;
        }
    }

    public List<Pose> getWaypoints(){
        return waypoints;
    }

    public bool isWaypointsSent(){
        return waypointSent;
    }

}

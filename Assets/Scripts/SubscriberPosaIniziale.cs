using UnityEngine;
using TMPro;

namespace RosSharp.RosBridgeClient
{
    public class SubscriberPosaIniziale : UnitySubscriber<MessageTypes.Geometry.PoseStamped>
    {
        
        public Vector3 position;
        public Quaternion rotation;
        private bool isMessageReceived;
        private GameObject end_effector;
        private CalibrazioneQRCode calibrazioneQRCode;
        private GameObject panda_hand;
        private TextMeshPro calibrazione;

        protected override void Start()
        {
            base.Start();
            end_effector = FindByName("End_Effector");
            calibrazioneQRCode = GameObject.Find("ButtonCalibraOnPressed").GetComponent<CalibrazioneQRCode>();
            calibrazione = GameObject.Find("calibrazione").GetComponent<TextMeshPro>();
            panda_hand = GameObject.Find("panda_hand");
        }

        private void Update(){
            if (isMessageReceived)
                ProcessMessage();
        }

        protected override void ReceiveMessage(MessageTypes.Geometry.PoseStamped message){
            position = GetPosition(message).Ros2Unity();
            rotation = GetRotation(message).Ros2Unity();
            isMessageReceived = true;
            ProcessMessage();
        }

        public Vector3 getPosition(){
            return position;
        }

        public Quaternion getRotation(){
            return rotation;
        }

        public bool isRicevuto(){
            return isMessageReceived;
        }

        private void ProcessMessage(){
            /*Vector3 posizioneFinale = end_effector.transform.position;
            Vector3 posizioneFinale2 = new Vector3((posizioneFinale.x + position.x), (posizioneFinale.y + position.y), (posizioneFinale.z + position.z)); 
            end_effector.transform.position = posizioneFinale2;
            end_effector.transform.rotation = rotation;
            //end_effector.transform.localPosition = position;
            //end_effector.transform.localRotation = rotation;
            calibrazione.SetText("Pos end: " + end_effector.transform.position);*/
            
        }

        /*
        private void ProcessMessage()
        {
            end_effector.transform.Rotate(rotation.y, rotation.z, rotation.x, Space.World);
            Vector3 posizionePanda = calibrazioneQRCode.getPosizione();
            end_effector.transform.position = posizionePanda;
            end_effector.transform.Translate((-position.y), position.z, position.x, Space.World);
        }
        */

        private Vector3 GetPosition(MessageTypes.Geometry.PoseStamped message){
            return new Vector3(
                (float)message.pose.position.x,
                (float)message.pose.position.y,
                (float)message.pose.position.z);
        }

        private Quaternion GetRotation(MessageTypes.Geometry.PoseStamped message){
            return new Quaternion(
                (float)message.pose.orientation.x,
                (float)message.pose.orientation.y,
                (float)message.pose.orientation.z,
                (float)message.pose.orientation.w);
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
    }
}



using UnityEngine;
using TMPro;

namespace RosSharp.RosBridgeClient {

    public class EndEffectorPosePublisher : UnityPublisher<MessageTypes.Geometry.PoseStamped>{
        public string FrameId = "End-Effector";
        private GameObject panda;
        private GameObject end_effector;
        private MessageTypes.Geometry.PoseStamped message;
        private CalibrazioneQRCode calibrazioneQRCode;
        private Vector3 posizioneDaMandare;
        private Quaternion rotazioneDaMandare;
        private TextMeshPro calibrazione;

        protected override void Start(){
            calibrazioneQRCode = GameObject.Find("ButtonCalibraOnPressed").GetComponent<CalibrazioneQRCode>();
            calibrazione = GameObject.Find("calibrazione").GetComponent<TextMeshPro>();
            end_effector = FindByName("End_Effector");
            panda = FindByName("panda_link0");
            base.Start();
            InitializeMessage();
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

        public void inviaMessaggio(){
            end_effector.transform.parent = panda.transform;
            Vector3 posizioneEndEffector = end_effector.transform.localPosition;
            posizioneDaMandare = posizioneEndEffector;
            rotazioneDaMandare = end_effector.transform.localRotation;
            //calibrazione.SetText("Posizione endEf: " + end_effector.transform.position  + " -- Mando la Posizione: " + posizioneDaMandare);
            UpdateMessage();
        }

        private void InitializeMessage(){
            message = new MessageTypes.Geometry.PoseStamped{
                header = new MessageTypes.Std.Header(){
                    frame_id = FrameId
                }
            };
        }

        private void UpdateMessage(){
            message.header.Update();
            GetGeometryPoint(posizioneDaMandare.Unity2Ros(), message.pose.position);
            GetGeometryQuaternion(rotazioneDaMandare.Unity2Ros(), message.pose.orientation);
            Publish(message);
        }

        private static void GetGeometryPoint(Vector3 position, MessageTypes.Geometry.Point geometryPoint){
            geometryPoint.x = position.x;
            geometryPoint.y = position.y;
            geometryPoint.z = position.z;
        }

        private static void GetGeometryQuaternion(Quaternion quaternion, MessageTypes.Geometry.Quaternion geometryQuaternion){
            geometryQuaternion.x = quaternion.x;
            geometryQuaternion.y = quaternion.y;
            geometryQuaternion.z = quaternion.z;
            geometryQuaternion.w = quaternion.w;
        }
    }

}


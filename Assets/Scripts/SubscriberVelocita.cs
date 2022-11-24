using System.Collections.Generic;

namespace RosSharp.RosBridgeClient {

    public class SubscriberVelocita : UnitySubscriber<MessageTypes.Sensor.JointState> {
        
        public List<string> jointNames;
        public List<double> velocity = new List<double>();

        protected override void ReceiveMessage(MessageTypes.Sensor.JointState message) {
            int index;
            int conta = velocity.Count;
            if (conta == 0){
                for (int i = 0; i < message.name.Length; i++){
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1){
                        velocity.Add(message.velocity[i]);
                    }
                }
            } else {
                for (int i = 0; i < message.name.Length; i++){
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1){
                        velocity[i] = message.velocity[i];
                    }
                }
            }
        }

        public List<double> getVelocita(){
            return velocity;
        }

    }
}
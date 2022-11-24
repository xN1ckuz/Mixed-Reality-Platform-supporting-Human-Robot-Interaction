using System.Collections.Generic;

namespace RosSharp.RosBridgeClient {

    public class SubscriberPosizione : UnitySubscriber<MessageTypes.Sensor.JointState> {
        public List<string> jointNames;
        public List<double> positions = new List<double>();

        protected override void ReceiveMessage(MessageTypes.Sensor.JointState message) {
            int index;
            int conta = positions.Count;
            if (conta == 0){
                for (int i = 0; i < message.name.Length; i++){
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1){
                        positions.Add(message.position[i]);
                    }
                }
            } else {
                for (int i = 0; i < message.name.Length; i++) {
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1) {
                        positions[i] = message.position[i];
                    }
                }
            }
        }

        public List<double> getPosizioni()
        {
            return positions;
        }

    }
}
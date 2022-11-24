using System.Collections.Generic;

namespace RosSharp.RosBridgeClient {

    public class SubscriberCoppia : UnitySubscriber<MessageTypes.Sensor.JointState> {
        public List<string> jointNames;
        public List<double> effort = new List<double>();

        protected override void ReceiveMessage(MessageTypes.Sensor.JointState message) {
            int index;
            int conta = effort.Count;
            if (conta == 0){
                for (int i = 0; i < message.name.Length; i++){
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1){
                        effort.Add(message.effort[i]);
                    }
                }
            } else {
                for (int i = 0; i < message.name.Length; i++) {
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1) {
                        effort[i] = message.effort[i];
                    }
                }
            }

        }

        public List<double> getCoppia()
        {
            return effort;
        }

    }
}

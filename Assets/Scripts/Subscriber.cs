using System.Collections.Generic;

namespace RosSharp.RosBridgeClient
{
    public class Subscriber : UnitySubscriber<MessageTypes.Sensor.JointState>
    {
        public List<string> jointNames;
        public List<double> positions = new List<double>();
        public List<float> velocity = new List<float>();
        public List<float> effort = new List<float>();

        protected override void ReceiveMessage(MessageTypes.Sensor.JointState message)
        {
            int index;
            int conta = positions.Count;
            if (conta == 0)
            {
                for (int i = 0; i < message.name.Length; i++)
                {
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1)
                    {
                        positions.Add(message.position[i]);
                        velocity.Add((float)message.velocity[i]);
                        effort.Add((float)message.effort[i]);
                    }
                }
            } else
            {
                for (int i = 0; i < message.name.Length; i++)
                {
                    index = jointNames.IndexOf(message.name[i]);
                    if (index != -1)
                    {
                        positions[i] = (float)message.position[i];
                        velocity[i] = (float)message.velocity[i];
                        effort[i] = (float)message.effort[i];
                    }
                }
            }
            
        }
    }
}
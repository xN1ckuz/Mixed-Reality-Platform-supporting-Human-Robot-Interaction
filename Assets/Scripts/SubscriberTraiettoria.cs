using RosSharp.RosBridgeClient.MessageTypes.Trajectory;
using System.Collections.Generic;
using UnityEngine;
using RosSharp.RosBridgeClient;

namespace RosSharp.RosBridgeClient {

    public struct Point {
        public Point(double[] pos, float t){
            positions = pos;
            time = t;
        }

        public double[] positions { get; set; }
        public float time { get; set; }

    }

    public class SubscriberTraiettoria : UnitySubscriber<MessageTypes.Trajectory.JointTrajectory> {
        
        public List<string> jointNames;
        public List<JointTrajectoryPoint> points = new List<JointTrajectoryPoint>();
        public List<Point> trajectory_points = new List<Point>();

        protected override void ReceiveMessage(MessageTypes.Trajectory.JointTrajectory message){
            if (points.Count == 0){
                for (int i = 0; i < message.points.Length; i++){
                    Point punto = new Point();
                    punto.positions = message.points[i].positions;
                    int secs = (int)message.points[i].time_from_start.secs;
                    int nsecs = (int)message.points[i].time_from_start.nsecs;
                    punto.time = secs + (nsecs/1000000000f);
                    trajectory_points.Add(punto);
                }
            }
        }

        public List<Point> getTrajectoryPoints(){
            return trajectory_points;
        }

        public void clearTrajectoryPoints(){
            trajectory_points.Clear();
        }
    }

}
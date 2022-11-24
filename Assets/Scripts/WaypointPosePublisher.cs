using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RosSharp.RosBridgeClient {

    public class WaypointPosePublisher : UnityPublisher<MessageTypes.Geometry.PoseArray>{
        
        public string FrameId = "Waypoints-Pose";
        private MessageTypes.Geometry.PoseArray message;

        private List<Pose> waypoints;
        private TrajectoryManager trajectoryManager;

        protected override void Start(){
            trajectoryManager = GameObject.Find("TrajectoryManager").GetComponent<TrajectoryManager>();
            base.Start();
            InitializeMessage();
        }

        public void inviaMessaggio(){
            UpdateMessage();
        }

        private void InitializeMessage(){
            message = new MessageTypes.Geometry.PoseArray{
                header = new MessageTypes.Std.Header(){
                    frame_id = FrameId
                }
            };
        }

        private void UpdateMessage(){
            message.header.Update();
            waypoints = trajectoryManager.getWaypoints();
            Debug.Log("Numero di Waypoints (Publisher): " + waypoints.Count.ToString());
            List<MessageTypes.Geometry.Pose> poseList = new List<MessageTypes.Geometry.Pose>();
            for (int i = 0; i<waypoints.Count; i++){
                MessageTypes.Geometry.Pose pose = new MessageTypes.Geometry.Pose();
                GetGeometryPoint(waypoints[i].position.Unity2Ros(), pose.position);
                GetGeometryQuaternion(waypoints[i].rotation.Unity2Ros(), pose.orientation);
                poseList.Add(pose);
            }
            message.poses = poseList.ToArray();
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


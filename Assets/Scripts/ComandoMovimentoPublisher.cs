using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RosSharp.RosBridgeClient{

    public class ComandoMovimentoPublisher : UnityPublisher<MessageTypes.Std.String>{

        private MessageTypes.Std.String message;

        protected override void Start(){
            base.Start();
            InitializeMessage();
        }

        public void inviaMessaggio(){
            UpdateMessage();
        }

        private void InitializeMessage(){
            message = new MessageTypes.Std.String{
                data = "Muovi robot"
            };
        }

        private void UpdateMessage(){
            Publish(message);
        }
    }

}

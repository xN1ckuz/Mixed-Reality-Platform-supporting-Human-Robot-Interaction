# Mixed Reality Platform supporting Human-Robot Interaction
This work is focused on development of a MR platform that integrates cut-ting-edge technologies, i.e. a Head Mounted Display (HMD), and a cobot in a shared environment. The experimental setup includes the Microsoft's Mixed Reality HMD HoloLens 2 and the Franka Emika Robot System. 

## Experimental Setup
  - HMD: Microsoft HoloLens 2
  - Robot: Franka Emika Panda

## Development Tools
  - Unity3D 2020.3.8f (64bit)
  - Mixed Reality Toolkit 2.7.2
  - ROSharp Library UWP Version
  - SampleQRCodes for QRCode reading
  - ROS Kinetic and Ubuntu 16.04 on Server Machine
  - Visual Studio Community 2019

### QRCode Calibration
The position of the QRCode is assigned to the robot hologram first, and then the hologram is translated by using a transformation matrix

$$ \\mathbit{mathbit}{\mathbit{T}}=\left[\begin{matrix}\mathbit{R}&\mathbit{p}\\\mathbf{0}_3^T&1\\\end{matrix}\right], $$
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

## Methods
Now we will explain how we implemented the Human-Robot interface and how the two talks each other.

### QRCode Calibration
The position of the QRCode is assigned to the robot hologram first, and then the hologram is translated by using the transformation matrix:

$$
T = \begin{bmatrix}
R & p \\
0^T_3 & 1 \\
\end{bmatrix}
$$

where $\textit{\textbf{R}}$ is the rotation matrix between robot origin and QR Code origin, $\textbf{\textit{0}}^\textbf{\textit{T}}_\textbf{\textit{3}}$ is the 1x3 null vector and $\textit{\textbf{p}}$ is the distance vector betwenn robot and QR Code origin.
The QRCode pose detection could be affected by errors due to the orientation of the human point of view. A rotation compensation is added to the transformation matrix $\textbf{\textit{T}}$ errors due to the orientation of the human point of view, so the robot hologram is always aligned with QRCode.

# AMF-Localization

Real-Time and Adaptive Multisensor Fusion Localization Framework with Degradation Detection in GNSS-Denied Environments

The code is being continuously updated.



## 1. Introduction

Robust and accurate localization is a fundamental technology for the safe and efficient operation of intelligent vehicles and advanced driver-assistance systems. However, in complex and large-scale environments, conventional vehicle localization methods often suffer from heavy dependence on the global navigation satellite system (GNSS), low accuracy, and poor robustness in challenging environments, such as sensor degradation or highway scenarios.

## 2. Prerequisited

### 2.1 Ubuntu and ROS

- Ubuntu 20.04
- ROS-Noetic

### 2.2 PCL && Eigen && OpenCV

PCL >= 1.10.0,    Follow [PCL Installation](https://pointclouds.org/). 

Eigen >= 3.3.7,      Follow [Eigen Installation](https://eigen.tuxfamily.org/index.php?title=Main_Page).

## 3. Build

Clone the repository and catkin_make:

```
cd ~/catkin_ws/src
git clone https://github.com/NEU-REAL/AMF-Localization
cd ../
catkin_make
source ~/catkin_ws/devel/setup.bash
```

## 4. Run the package

Please note that you should edit the `config/xxx.yaml` to adapt your private dataset.

### 4.1 Run on your dataset

```
roslaunch amf_localization localization_dataset.launch
rosbag play YOUR_DATASET.bag --clock
```



## 5. Acknowledgments

Thanks for [FAST-LIO2](https://github.com/hku-mars/FAST_LIO) and [LIVW-Localization](https://github.com/NEU-REAL/LIVW-Localization). 


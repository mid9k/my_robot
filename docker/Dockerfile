FROM osrf/ros:noetic-desktop-full

# 必要なツールのインストール
RUN apt-get update && apt-get install -y \
    git \
    nano \
    python3-catkin-tools \
    python3-rosdep \
    python3-pip \
    ros-noetic-joy \
    ros-noetic-teleop-twist-joy \
    ros-noetic-ros-control \
    ros-noetic-ros-controllers \
    ros-noetic-gazebo-ros-control \
    ros-noetic-move-base \
    ros-noetic-gmapping \
    ros-noetic-map-server \
    ros-noetic-amcl \
    ros-noetic-robot-localization \
    ros-noetic-urdf-geometry-parser \
    && rm -rf /var/lib/apt/lists/*

# rosdepの初期化
RUN rosdep init || echo "rosdep already initialized" && \
    rosdep update

# ワークスペースのセットアップ
WORKDIR /root/catkin_ws
RUN echo "source /opt/ros/noetic/setup.bash" >> /root/.bashrc
RUN echo "source /root/catkin_ws/devel/setup.bash" >> /root/.bashrc
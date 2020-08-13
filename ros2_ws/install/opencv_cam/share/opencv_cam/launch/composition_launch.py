"""
Dynamically compose OpencvCamNode and ImageSubscriberNode in a component_container.

Limitations of this container:
 -- stdout is not set to flush after each line, so the most recent log messages may be delayed
"""

import launch
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    container = ComposableNodeContainer(
        name='opencv_cam',
        namespace='pi_car',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            ComposableNode(
                package='opencv_cam',
                plugin='opencv_cam::OpencvCamNode',
                name='image_publisher',
                parameters=[{
                    'camera_info_path': '/home/ubuntu/.ros/camera_info/camera.yaml',
                    'width' : 1920,
                   'height' : 1080

                }]
                # extra_arguments=[{'use_intra_process_comms': True}],
            )
        ]
    )

    return launch.LaunchDescription([container])

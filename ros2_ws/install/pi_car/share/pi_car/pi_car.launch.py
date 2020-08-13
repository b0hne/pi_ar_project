import launch
from launch_ros.actions import Node
ns = 'pi_car'
def generate_launch_description():
    return launch.LaunchDescription([
        Node(
            package='pi_car',
            namespace=ns,
            executable='pi_car'
        ),

        Node(
                name='image_publisher',
                namespace=ns,
                package='opencv_cam',
                executable='opencv_cam_main',
                parameters=[{
                    'camera_info_path': '/home/ubuntu/.ros/camera_info/camera.yaml',
                    'width' : 1920,
                   'height' : 1080

                }]
        )
    ])


            
            
            
            # parameters=[{
            #         'camera_info_path': '/home/ubuntu/.ros/camera_info/camera.yaml',
            #         'width' : 1920,
            #        'height' : 1080
            #        }]
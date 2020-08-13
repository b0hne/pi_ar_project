# CMake generated Testfile for 
# Source directory: /home/ubuntu/ros2_ws/src/ros2_bno055_driver/test
# Build directory: /home/ubuntu/ros2_ws/build/bno055_driver/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(bno055_serial_tests "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/ubuntu/ros2_ws/build/bno055_driver/test_results/bno055_driver/bno055_serial_tests.gtest.xml" "--package-name" "bno055_driver" "--output-file" "/home/ubuntu/ros2_ws/build/bno055_driver/ament_cmake_gtest/bno055_serial_tests.txt" "--command" "/home/ubuntu/ros2_ws/build/bno055_driver/test/bno055_serial_tests" "--gtest_output=xml:/home/ubuntu/ros2_ws/build/bno055_driver/test_results/bno055_driver/bno055_serial_tests.gtest.xml")
set_tests_properties(bno055_serial_tests PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ubuntu/ros2_ws/build/bno055_driver/test/bno055_serial_tests" TIMEOUT "10" WORKING_DIRECTORY "/home/ubuntu/ros2_ws/build/bno055_driver/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ubuntu/ros2_ws/src/ros2_bno055_driver/test/CMakeLists.txt;12;ament_add_gtest;/home/ubuntu/ros2_ws/src/ros2_bno055_driver/test/CMakeLists.txt;0;")
subdirs("../gtest")

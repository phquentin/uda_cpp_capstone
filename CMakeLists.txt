cmake_minimum_required(VERSION 3.0.2)
project(uda_cpp_capstone)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
)

include_directories(
 include
  ${catkin_INCLUDE_DIRS}
)

add_executable(Move src/MovementNode.cpp src/CircleNode.cpp src/Move.cpp)
target_link_libraries(Move ${catkin_LIBRARIES})









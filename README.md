## Description

This repository contains the implementation of the ros package uda_cpp_capstone with a "move" node to pass the final project of the udacity c++ nanodegree programm. The implemented ros package starts a turtlebot simulation and makes the turtle move in form of given geomtric shapes according to a user input. For detailed information see the sections [Expected Behavior](#expected-behavior) and [File & Class Structure](#file-class-strucutre).

## Dependencies

- ROS including turtlesim package
- cmake >= 2.8.3
- make >= 4.1
- gcc/g++ >= 5.4

## Building & Running Instructions

### Building

1. Source ros: `source /opt/ros/<distro>/setup.bash`
2. Create a catkin workspace folder: `mkdir catkin_ws && cd catkin_ws && mkdir src`
3. Build the catkin workspace: `catkin_build`
4. Go into /src directory:  `cd src/`
5. Clone this repo:  `git clone https://github.com/phquentin/uda_cpp_capstone.git`
6. Go back to the top level of the catkin worspace and build the ros package: `cd .. && catkin_make`

### Running

1. Source ros: `source /opt/ros/<distro>/setup.bash`
2. Source the created catkin workspace: `source <path_to_catkin_ws>/catkin_ws/devel/setup.bash`
3. Run the launch file of the package: `roslaunch uda_cpp_capstone uda_cpp_cappstone.launch`
4. Follow the instructions within the opened terminal

## <a name="expected-behavior"></a> Expected Behavior

When the launch file uda_cpp_cappstone.launch is executed it starts a ros master, a Move node with the name move_node of the uda_cpp_capstone package and a turtlesim_node with the name sim of the ros turtlesim package. Furhtermore, within the opened terminal a user input is requested. If the user inputs 1 the move_node publishes the inputs for a random movement to the topic /turtle1/cmd_vel to which the sim node is subscribed, so that the turtle will do a random momvement. If the user inputs 2 the turtle will spiral movement respectivley.

## <a name="file-class-strucutre"></a> File & Class Structure

### `Move.cpp`

Implements the main function that creates and starts the move_node according to the user input.

### `MovementNode.h` & `MovementNode.cpp`

Declare and define the abstract MovementNode class.

### `ShapeMovement.h` & `ShapeMovement.cpp`

Declare and define the child classes SpiralNode and RandomNode.

## Addressed Rubric Points

### Loops, Functions, I/O

- The project demonstrates an understanding of C++ functions and control structures: Find loops and if statements in Move.cpp, functions in ShapeMovement.cpp
- The project accepts user input and processes the input: See user requested and processed input in Move.cpp

### Object Oriented Programming

- The project uses Object Oriented Programming techniques: See class RandomNode and SpiralNode with their respective class attributes and functions in ShapeMovement.h and ShapeMovement.cpp
- Classes use appropriate access specifiers for class members: See parent class MovementNode in MovementNode.h, class SpiralNode and RandomNode in ShapeMovement.h
- Classes follow an appropriate inheritance hierarchy: Class SpiralNode and RandomNode are child classes of abstract class MovementNode. They specify the movement according to their name and inherit the same ros attributes. See MovementNode.h/cpp and ShapeMovement.h/cpp
- Derived class functions override virtual base class functions: The derived class functions publish_move() in class RandomNode and class SpiralNode override the virtual function publish_move() of the parent class. See MovementNode.h and ShapeMovement.h 





## Description

## Dependencies

## Building & Running Instructions

### Building

1. Source ros: `source /opt/ros/<distro>/setup.bash`
2. Create a catkin workspace folder: `mkdir catkin_ws/src`
3. Build the catkin workspace: `cd catkin_ws/ && catkin_build`
4. Go into /src directory:  `cd src/`
5. Clone this repo:  `git clone https://github.com/phquentin/uda_cpp_capstone.git`
6. Go back to the top level of the catkin worspace and build the ros package: `cd .. && catkin_make`

### Running

1. Source ros: `source /opt/ros/<distro>/setup.bash`
2. Source the created catkin workspace: `source <path_to_catkin_ws>/catkin_ws/devel/setup.bash`
3. Run the launch file of the package: `roslaunch uda_cpp_capstone uda_cpp_cappstone.launch`
4. Follow the instructions within the opened terminal

## Expected Behavior

## File & Class Structure

## Addressed Rubric Points

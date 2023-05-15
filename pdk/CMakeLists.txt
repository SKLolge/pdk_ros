cmake_minimum_required(VERSION 3.5.0)
project(pdk_ros)

set(CMAKE_CXX_STANDARD 11)
add_compile_options(-std=c++11)

find_package(Protobuf REQUIRED)

set(PDK_INTERFACE_LIB "/opt/pdk/lib/libpdk_interface.so")
set(PDK_IMPORT_DIR "/opt/pdk/include")

set(PROTOBUF_FILE_LIST
  ${PDK_IMPORT_DIR}/pdk/pdk_MsgHeader.proto
  ${PDK_IMPORT_DIR}/pdk/pdk_SensorMsgHeader.proto
  ${PDK_IMPORT_DIR}/pdk/pdk_RadarDetectionImage.proto
  ${PDK_IMPORT_DIR}/pdk/pdk_RadarStatus.proto
  ${PDK_IMPORT_DIR}/pdk/pdk_RadarObjectList.proto
)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTOBUF_FILE_LIST})

find_package(catkin REQUIRED COMPONENTS
  roscpp  
  std_msgs
  geometry_msgs  
  pdk_ros_msg
  message_generation  
)

#add_message_files(FILES ros_pdk.msg)
## Generate added messages and services with any dependencies listed here
#generate_messages(
#  DEPENDENCIES  std_msgs geometry_msgs pdk_ros_msg
# )

catkin_package(
  CATKIN_DEPENDS roscpp std_msgs pdk_ros_msg
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include  
  ${PROTOBUF_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
)



add_executable(${PROJECT_NAME}_node src/pdk_ros_node.cpp ${PROTO_SRCS})

target_include_directories(${PROJECT_NAME}_node 
  PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
  PRIVATE ${PDK_IMPORT_DIR}
)

## Specify libraries to link a library or executable target against
target_link_libraries(${PROJECT_NAME}_node
  PRIVATE ${PDK_INTERFACE_LIB}
  PRIVATE protobuf::libprotobuf  
  ${catkin_LIBRARIES}
 )

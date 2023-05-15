#include "ros/ros.h"
#include "pdk/pdk_interface.hpp"
#include "pdk/MountingParameters.hpp"
#include "pdk/pdk_RadarObjectList.pb.h"
#include "pdk/pdk_CameraImage.pb.h"
#include "pdk/pdk_MountingParameters.pb.h"
#include "pdk/pdk_MsgHeader.pb.h"
#include "pdk/pdk_RadarDetectionImage.pb.h"
#include "pdk/pdk_RadarFreespace.pb.h"
#include "pdk/pdk_RadarObjectList.pb.h"
#include "pdk/pdk_RadarStatus.pb.h"
#include "pdk/pdk_SensorMsgHeader.pb.h"
#include "pdk/pdk_VehicleDynamics.pb.h"
#include "std_msgs/String.h"

class PDK_ROS{
private:    
    ros::Publisher m_pdk_tracking_pub;
    ros::Publisher m_pdk_version_pub;
    ros::NodeHandle m_nh;

public:    
    PDK_ROS(ros::NodeHandle *nh);
    void pdk_getVersion_Publisher();
    void pdk_objectTracking_Publischer();
};
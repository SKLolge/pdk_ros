#include "ros/ros.h"
#include "pdk_ros_node.h"
#include "pdk/pdk_interface.hpp"
#include "pdk/pdk_RadarObjectList.pb.h"
#include "pdk_ros_msg/pdk_version.h"
#include "pdk_ros_msg/pdk_RadarObjectList.h"
#include "std_msgs/String.h"

ros::Publisher pdk_tracking_pub;

void vehicleDynamics(const CVehicleDynamics &vdy){
    
    //
    
}

void objTracking(const std::string &buffer)
{    
    pb::PDK::RadarObjectList objList{};  
    objList.ParseFromString(buffer);
    
    for (auto objITR = 0; objITR < objList.u_nofusedobjects(); objITR++){
        pb::PDK::RadarObjectList_RadarObject fusionObj = objList.a_radarobjectlist(objITR);
        
        pdk_ros_msg::pdk_RadarObjectList detectedObj;

        detectedObj.header.frame_id = "base_link";
        detectedObj.header.stamp = ros::Time::now();
     

        detectedObj.u_ObjId = fusionObj.u_objid();
        
        detectedObj.f_DistX = fusionObj.f_distx();
        detectedObj.f_DistY = fusionObj.f_disty();
        
        detectedObj.f_VrelX = fusionObj.f_vrelx();
        detectedObj.f_VrelY = fusionObj.f_vrely();
        
        detectedObj.f_ArelX = fusionObj.f_arelx();
        detectedObj.f_ArelY = fusionObj.f_arely();

        detectedObj.f_DistXStd = fusionObj.f_distxstd();
        detectedObj.f_DistYStd = fusionObj.f_distystd();
        
        detectedObj.f_VrelXStd = fusionObj.f_vrelxstd();
        detectedObj.f_VrelYStd = fusionObj.f_vrelystd();

        detectedObj.f_ArelXStd = fusionObj.f_arelxstd();
        detectedObj.f_ArelYStd = fusionObj.f_arelystd();

        detectedObj.f_LDeltaX_left = fusionObj.f_ldeltax_left();
        detectedObj.f_LDeltaX_mid = fusionObj.f_ldeltax_mid();
        detectedObj.f_LDeltaX_right = fusionObj.f_ldeltax_right();

        detectedObj.f_LDeltaY_left = fusionObj.f_ldeltay_left();
        detectedObj.f_LDeltaY_mid = fusionObj.f_ldeltay_mid();
        detectedObj.f_LDeltaY_right = fusionObj.f_ldeltay_right();

        detectedObj.f_RCS = fusionObj.f_rcs();

        detectedObj.f_ObjectScore = fusionObj.f_objectscore();
        detectedObj.u_LifeCycles = fusionObj.u_lifecycles();
        
        detectedObj.f_VabsX = fusionObj.f_vabsx();
        detectedObj.f_VabsY = fusionObj.f_vabsy();
        
        detectedObj.f_AabsX = fusionObj.f_aabsx();
        detectedObj.f_AabsY = fusionObj.f_aabsy();

        detectedObj.f_VabsXStd = fusionObj.f_vabsxstd();
        detectedObj.f_VabsYStd = fusionObj.f_vabsystd();
        
        detectedObj.f_AabsXStd = fusionObj.f_aabsxstd();
        detectedObj.f_AabsYStd = fusionObj.f_aabsystd();

        //Filter some objects out:
        if(detectedObj.f_DistX < 100 && detectedObj.f_DistY < 100 && detectedObj.f_ObjectScore > 0.75){
            pdk_tracking_pub.publish(detectedObj);
        }
    }
}


int main(int argc, char** argv)
{    
    ros::init(argc, argv,"pdk");
    ros::NodeHandle nh("~");

    ros::Publisher pdk_version_pub = nh.advertise<pdk_ros_msg::pdk_version>("version", 1000);
    pdk_tracking_pub = nh.advertise<pdk_ros_msg::pdk_RadarObjectList>("tracking", 1000);

    ros::Rate loop_rate(10);

    std::string PDKconfigFile = "/opt/pdk/etc/pdk_config.json";
    PDK::CInterface::Init(PDKconfigFile);

    PDK::CInterface::SetTrackingCallback(objTracking);
    //PDK::CInterface::SetSensorObjectsCallback(objTracking);
    PDK::CInterface::SetVehicleDynamicsCallback(vehicleDynamics);

    /*while(ros::ok())
    {
        pdk_ros_msg::pdk_version pdkVersion;
        pdkVersion.pdk_version = PDK::GetVersion();
        pdk_version_pub.publish(pdkVersion);

        ros::spinOnce();
        loop_rate.sleep();
    } */
    ros::spin();  
   return 0;
}
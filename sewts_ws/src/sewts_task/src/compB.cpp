#include "ros/ros.h"
#include "sewts_task/AddTwoInts.h"
#include <cstdlib>
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv,"initialized");
  /*if (argc != 1)
  {
    ROS_INFO("error");
    return 1;
  }*/


  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<sewts_task::AddTwoInts>("add_two_ints");
  sewts_task::AddTwoInts srv;
  srv.request.id = atoll(argv[1]);
  //srv.request.b = atoll(argv[2]);
  if (client.call(srv))
  {
    //ROS_INFO("found:",srv.response.status);
      ROS_INFO_STREAM("Msg: " << srv.response.status);
  }
  else
  {
    ROS_ERROR("Failed to call service ");
    return 1;
  }

  return 0;
}

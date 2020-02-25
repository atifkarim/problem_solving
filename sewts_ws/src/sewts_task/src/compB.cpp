#include "ros/ros.h"
#include "sewts_task/AddTwoInts.h"
#include <cstdlib>
#include "std_msgs/String.h"



using namespace std;


int main(int argc, char **argv)
{
  ros::init(argc, argv,"initialized");
  /*if (argc != 1)
  {
    ROS_INFO("error");
    return 1;
  }*/

  bool stat;
  int inpt;
  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<sewts_task::AddTwoInts>("add_two_ints");
  sewts_task::AddTwoInts srv;
  srv.request.id = atoll(argv[1]);
  //srv.request.id1 = atoll(argv[2]);
  if (client.call(srv))
  {
    //ROS_INFO("found:",srv.response.status);
      ROS_INFO_STREAM("Msg: " << srv.response.status);
      stat= srv.response.status;
      if (stat==true)
      {
        cout<<"Product found"<<endl;
	cout<<"To check Name of product Press : 1\nTo check price of product Press : 2\n";
	cin>>inpt;
        srv.request.id1=inpt;
	if (client.call(srv))
	{
	 ROS_INFO_STREAM("The result is: " << srv.response.status1);
	}
      }
      //ROS_INFO_STREAM("Msg here: " << srv.response.status1);
  }
  else
  {
    ROS_ERROR("Failed to call service ");
    return 1;
  }

  return 0;
}

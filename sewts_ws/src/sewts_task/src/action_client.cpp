#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <sewts_task/ProductSearchAction.h> 

using namespace sewts_task;
typedef actionlib::SimpleActionClient<sewts_task::ProductSearchAction> Client;

void activeCb()
{
  ROS_INFO("Goal just went active");
}


float feedbackCb(const ProductSearchFeedbackConstPtr& feedback)
{
  float r = feedback->percent_complete;
  std::cout<<"feedback"<<r;
}

int main (int argc, char **argv)
{
  ros::init(argc, argv, "product_client");

  Client ac("product", true);

  ROS_INFO("Waiting for action server to start.");
  ac.waitForServer();
  ROS_INFO("Action server started, sending goal.");

  sewts_task::ProductSearchGoal goal;
  sewts_task::ProductSearchResult result;
  sewts_task::ProductSearchFeedback feedback;

  int d,e;
  bool ex=true;

  do
  {
  
  std::cout<<"Enter your ID: ";
  std::cin>>d;
  goal.goal_check_product=d;
  ac.sendGoal(goal);
  //ac.sendGoal(goal,&feedbackCb);
  ac.waitForResult(ros::Duration(5.0));
  //ac.getResult();
  //ProductSearchFeedbackConstPtr feedback;
  bool availability_product=ac.getResult()->result_presence_of_product;

  if (availability_product==true)
  {d=0;
  goal.goal_check_product=d;
  std::cout<<"--------------------------------------------------------------------------------------------------------------------------"<<std::endl;
  std::cout<<"Object found\nPress 1 for check Price\nPress 2 for check weight\nPlease press desire button\n";
  std::cout<<"--------------------------------------------------------------------------------------------------------------------------"<<std::endl;
  std::cin>>e;
  goal.goal_check_product_description=e;
  ac.sendGoal(goal);
  ac.waitForResult(ros::Duration(5.0));
  ac.getResult();
  
  int s=ac.getResult()->result_product_description;
  if (s==0)
  {std::cout<<"User pressed wrong product description button !!!!"<<std::endl;
   std::cout<<"Price -- 1, Weight -- 2"<<std::endl;
  }
  else
  {std::cout<<"Desired description value is: "<< s <<std::endl;
  }
//  std::cout<<"got price  "<< s <<std::endl;
  e=0;
  goal.goal_check_product_description=e;
  char exit;
  std::cout<<"Would you like to quit,press y/n: ";
  std::cin>>exit;
  if (exit=='y')
  {
   ex=false;
   system("pkill roslaunch"); // To Kill ROSLAUNCH file
  } 
  }
  else{
   std::cout<<"Please provide correct Product ID"<<std::endl;
  }
  }while((ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED || ex) && ex);

  return 0;
}

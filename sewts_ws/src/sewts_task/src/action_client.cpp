/*
#include <sewts_task/DoDishesAction.h> // Note: "Action" is appended
#include <actionlib/client/simple_action_client.h>
using namespace std;
using namespace sewts_task;
typedef actionlib::SimpleActionClient<sewts_task::DoDishesAction> Client;


/*void feedbackCb(const DoDishesFeedbackConstPtr& feedback)
{
  ROS_INFO("Got Feedback of length %f", feedback->percent_complete);
}
///////

int main(int argc, char** argv)
{
  ros::init(argc, argv, "do_dishes_client");
  Client client("do_dishes", true); // true -> don't need ros::spin()
  client.waitForServer();
  sewts_task::DoDishesGoal goal;
  sewts_task::DoDishesResult result;
  //sewts_task::DoDishesFeedback feedback;
  unsigned int d;
  float s,fed;
  
  
// Fill in goal here
  std::cout<<"You can search about 3 products and each of them unique identity marked with 1,2 and 3. Please enter your desired ID\n";  
  std::cout<<"Enter your ID: ";
  std::cin>>d;
  goal.dishwasher_id=d;
  client.sendGoal(goal);
  //client.sendGoal(goal,feedback=feedback_cb);
  client.waitForResult(ros::Duration(5.0));
  client.getResult();
  DoDishesFeedbackConstPtr feedback;
  
  //ROS_INFO("Got Feedback of length %f", &feedback->percent_complete);
  //&feedbackCb(feedback);
  //client.feedback_cb_();
  //s=feedback.percent_complete;
  s=client.getResult()->total_dishes_cleaned;
  //fed=client.getResult()->percent_complete;
  //fed=client.feedback_cb_()->percent_complete;
  //std::cout<<"fed result  "<< fed <<std::endl;
  std::cout<<"got result  "<< s <<std::endl;
  if (s == 15.0)
    printf("Ok\n");
  ros::spin();
  if (s != 15.0)
    printf("check the type");
  if (client.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    printf("Yay! The dishes are now clean");
  printf("Current State: %s\n", client.getState().toString().c_str());
  return 0;
}
*/




#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <sewts_task/DoDishesAction.h> 

using namespace sewts_task;
typedef actionlib::SimpleActionClient<sewts_task::DoDishesAction> Client;

// Called once when the goal completes
/*oid doneCb(const actionlib::SimpleClientGoalState& state,
            const DoDishesResultConstPtr& result)
{
  ROS_INFO("Finished in state [%s]", state.toString().c_str());
  ROS_INFO("Answer: %i", result->sequence.back());
  ros::shutdown();
}

*///////////////

// Called once when the goal becomes active

void activeCb()
{
  ROS_INFO("Goal just went active");
}



// Called every time feedback is received for the goal

float feedbackCb(const DoDishesFeedbackConstPtr& feedback)
{
  float r = feedback->percent_complete;
  std::cout<<"feedback"<<r;
}

int main (int argc, char **argv)
{
  ros::init(argc, argv, "do_dishes_client");

  // Create the action client
  Client ac("do_dishes", true);

  ROS_INFO("Waiting for action server to start.");
  ac.waitForServer();
  ROS_INFO("Action server started, sending goal.");

  sewts_task::DoDishesGoal goal;
  sewts_task::DoDishesResult result;
  sewts_task::DoDishesFeedback feedback;

  int d,e;
  bool ex=true;
//float s;
  // Fill in goal here
  do
  {
  
  std::cout<<"Enter your ID: ";
  std::cin>>d;
  goal.goal_check_product=d;
  ac.sendGoal(goal);
  //ac.sendGoal(goal,&feedbackCb);
  ac.waitForResult(ros::Duration(5.0));
  //ac.getResult();
  //DoDishesFeedbackConstPtr feedback;
  bool availability_product=ac.getResult()->result_presence_of_product;
  //printf(ac.getResult()->percent_complete);

  if (availability_product==true)
  {d=0;
  goal.goal_check_product=d;
  std::cout<<"Object found\nPress 1 for check Price\nPress 2 for check rating\nPress 3 for check weight\nPlease press desire button: ";
  std::cin>>e;
  goal.goal_check_product_description=e;
  ac.sendGoal(goal);
  ac.waitForResult(ros::Duration(5.0));
  ac.getResult();
  
  int s=ac.getResult()->result_product_description;
  if (s==0)
  {std::cout<<"User given wrong val:  "<< s <<std::endl;
  }
  else
  {std::cout<<"------------got price  "<< s <<std::endl;
  }
//  std::cout<<"got price  "<< s <<std::endl;
  e=0;
  goal.goal_check_product_description=e;
  char exit;
  std::cout<<"Would you like to quit,press y/n";
  std::cin>>exit;
  if (exit=='y')
  {
   ex=false;
   system("pkill roslaunch"); // To Kill ROSLAUNCH file
  } 
  }
  else{
   std::cout<<"Please provide correct product ID"<<std::endl;
  }
  }while((ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED || ex) && ex);
  /*if (s == 15.0)
    printf("Ok\n");
  ros::spin();
  if (s != 15.0)
    printf("check the type");
  if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    printf("Yay! The dishes are now clean");
  printf("Current State: %s\n", ac.getState().toString().c_str());*/



  return 0;
}

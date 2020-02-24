/*
#include <sewts_task/DoDishesAction.h> // Note: "Action" is appended
#include <actionlib/client/simple_action_client.h>
using namespace std;
typedef actionlib::SimpleActionClient<sewts_task::DoDishesAction> Client;

int main(int argc, char** argv)
{
  ros::init(argc, argv, "do_dishes_client");
  Client client("do_dishes", true); // true -> don't need ros::spin()
  client.waitForServer();
  sewts_task::DoDishesGoal goal;
  sewts_task::DoDishesResult result;
  sewts_task::DoDishesFeedback feedback;

  unsigned int d;
  float s;
  // Fill in goal here
  std::cout<<"Enter your ID: ";
  std::cin>>d;
  goal.dishwasher_id=d;
  client.sendGoal(goal);
  client.waitForResult(ros::Duration(5.0));
  s=feedback.percent_complete;
  std::cout<<"got result  "<<s;

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
*/
// Called once when the goal becomes active
void activeCb()
{
  ROS_INFO("Goal just went active");
}

// Called every time feedback is received for the goal

void feedbackCb(const DoDishesFeedbackConstPtr& feedback)
{
  ROS_INFO("Got Feedback of length %lu", feedback->sequence.size());
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

  unsigned int d;
  float s;
  // Fill in goal here
  std::cout<<"Enter your ID: ";
  std::cin>>d;
  goal.dishwasher_id=d;

  ac.sendGoal(goal, &activeCb, &feedbackCb);

  ros::spin();
  return 0;
}


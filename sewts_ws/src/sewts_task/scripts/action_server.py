#! /usr/bin/env python2.7

import roslib
roslib.load_manifest('sewts_task')
import rospy
import actionlib
from sewts_task.msg import * 

#from sewts_task.msg import DoDishesAction

class DoDishesServer:
  _result = DoDishesResult()
  _feedback= DoDishesFeedback()
  def __init__(self):
    self.server = actionlib.SimpleActionServer('do_dishes', DoDishesAction, self.execute, False)
    self.server.start()

  def execute(self, goal):
    print "printing goal: ",goal.dishwasher_id
    # Do lots of awesome groundbreaking robot stuff here
    if goal.dishwasher_id==1:
	print "i am here"
	self._feedback.percent_complete=15.00
	print "printed already: ",self._feedback.percent_complete
    
	
    #self.server.set_succeeded(self._result)
    self.server.publish_feedback(self._feedback)

if __name__ == '__main__':
  rospy.init_node('do_dishes_server')
  server = DoDishesServer()
  rospy.spin()



'''----------------------------------


#! /usr/bin/env python

import rospy

import actionlib

import actionlib_tutorials.msg

class FibonacciAction(object):
    # create messages that are used to publish feedback/result
    _feedback = actionlib_tutorials.msg.FibonacciFeedback()
    _result = actionlib_tutorials.msg.FibonacciResult()

    def __init__(self, name):
        self._action_name = name
        self._as = actionlib.SimpleActionServer(self._action_name, actionlib_tutorials.msg.FibonacciAction, execute_cb=self.execute_cb, auto_start = False)
        self._as.start()
      
    def execute_cb(self, goal):
        # helper variables
        r = rospy.Rate(1)
        success = True
        
        # append the seeds for the fibonacci sequence
        self._feedback.sequence = []
        self._feedback.sequence.append(0)
        self._feedback.sequence.append(1)
        
        # publish info to the console for the user
        rospy.loginfo('%s: Executing, creating fibonacci sequence of order %i with seeds %i, %i' % (self._action_name, goal.order, self._feedback.sequence[0], self._feedback.sequence[1]))
        
        # start executing the action
        for i in range(1, goal.order):
            # check that preempt has not been requested by the client
            if self._as.is_preempt_requested():
                rospy.loginfo('%s: Preempted' % self._action_name)
                self._as.set_preempted()
                success = False
                break
            self._feedback.sequence.append(self._feedback.sequence[i] + self._feedback.sequence[i-1])
            # publish the feedback
            self._as.publish_feedback(self._feedback)
            # this step is not necessary, the sequence is computed at 1 Hz for demonstration purposes
            r.sleep()
          
        if success:
            self._result.sequence = self._feedback.sequence
            rospy.loginfo('%s: Succeeded' % self._action_name)
            self._as.set_succeeded(self._result)
        
if __name__ == '__main__':
    rospy.init_node('fibonacci')
    server = FibonacciAction(rospy.get_name())
    rospy.spin()'''

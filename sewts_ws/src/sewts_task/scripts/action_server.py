#! /usr/bin/env python2.7

import roslib
roslib.load_manifest('sewts_task')
import rospy
import actionlib
from sewts_task.msg import *

import json
import os

print "path: ",os.getcwd()
with open('/home/atif/sewts_ws/src/sewts_task/scripts/product.json', 'r') as f:
  config = json.load(f)

#from sewts_task.msg import DoDishesAction

class DoDishesServer:
  _result = DoDishesResult()
  _feedback= DoDishesFeedback()

  def __init__(self):
    self.server = actionlib.SimpleActionServer('do_dishes', DoDishesAction, self.execute, False)
    self.server.start()
    self.found = None
    self.product_container = None
    self.config=config

  def create_product_container(self):
    actor_dict = {'680':[300,1], '222':[300,2],'333':[300,3],'444':[300,4]}
    '''actor_dict = {}
    for i in self.config['product']:
      print 'product name: ',type(i)
      actor_dict[i] = []
      actor_dict[i].append(self.config['product'][i]['weight'])
      actor_dict[i].append(self.config['product'][i]['price'])
    #print 'product_dict: ', actor_dict'''
    return actor_dict

  def search_product(self,goal_val):
    self.product_container = self.create_product_container()
    #print "dict here !!!!!!!!!!!!",self.product_container
    for y in self.product_container.keys():
      print "herererere type ----------",type(goal_val)," printing the key of dict",y
      if int(y)==goal_val:
        return True
      else:
        pass
    return False

  def execute(self, goal):
    #print "printing goal: ",goal.dishwasher_id
    #print "printing goal for 2: ",goal.dishwasher_id1
	  # Do lots of awesome groundbreaking robot stuff here
	  # #var_result
    if goal.goal_check_product!=0:
      #var_result = True
		  # goal.dishwasher_id=None
      #print "i am here"
      #self._feedback.percent_complete=24.00
      #print "feedback in py: ",self._feedback.percent_complete 
      goal_val = goal.goal_check_product
      print "goal val: ",goal_val
      var_result = self.search_product(goal_val)
      self.found=str(goal.goal_check_product)
      print "nnnn: ",self.found," status: ",var_result
      self._result.result_presence_of_product=var_result
	#self._result.total_dishes_cleaned=15.00
	#print "printed already: ",self._feedback.percent_complete
      #self.server.publish_feedback(self._feedback)
      self.server.set_succeeded(self._result)
	#return 0
    
    #self.server.publish_feedback(self._feedback)
    #self.server.set_succeeded(self._feedback)
      #self.server.set_succeeded(self._result)

    elif goal.goal_check_product_description!=0:
	print "goal here: ",goal.goal_check_product_description
	if goal.goal_check_product_description==1:
	    #goal.goal_check_product_description=None
	    price = self.product_container[self.found][0]
	    self._result.result_product_description=price
	    print "price of product: ",self._result.result_product_description
	    self.server.set_succeeded(self._result)
	elif goal.goal_check_product_description==2:
#goal.dishwasher_id1=None
	    weight = self.product_container[self.found][1]
	    self._result.result_product_description=weight
	    print "weight of product: ",self._result.result_product_description
	    self.server.set_succeeded(self._result)
        else:
	    self._result.result_product_description=0
	    print "here py wrong"
	    self.server.set_succeeded(self._result)
    return 0



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

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

class ProductSearchServer:
  _result = ProductSearchResult()
  _feedback= ProductSearchFeedback()

  def __init__(self):
    self.server = actionlib.SimpleActionServer('product', ProductSearchAction, self.execute, False)
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
    for y in self.product_container.keys():
      if int(y)==goal_val:
        return True
      else:
        pass
    return False

  def execute(self, goal):
    if goal.goal_check_product!=0:
      goal_val = goal.goal_check_product
      var_result = self.search_product(goal_val)
      self.found=str(goal.goal_check_product)
      self._result.result_presence_of_product=var_result
      self.server.set_succeeded(self._result)

    elif goal.goal_check_product_description!=0:
	if goal.goal_check_product_description==1:
	    price = self.product_container[self.found][0]
	    self._result.result_product_description=price
	    print "price of product: ",self._result.result_product_description,"\n"
	    self.server.set_succeeded(self._result)
	elif goal.goal_check_product_description==2:
	    weight = self.product_container[self.found][1]
	    self._result.result_product_description=weight
	    print "weight of product: ",self._result.result_product_description,"\n"
	    self.server.set_succeeded(self._result)
        else:
	    self._result.result_product_description=0
	    print "wrong button of product description is pressed","\n"
	    self.server.set_succeeded(self._result)
    return 0



if __name__ == '__main__':
  rospy.init_node('product_server')
  server = ProductSearchServer()
  rospy.spin()

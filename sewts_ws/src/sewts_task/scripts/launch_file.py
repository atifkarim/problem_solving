#! /usr/bin/env python2.7

'''import roslaunch
import rospy

rospy.init_node('do_dishes_server', anonymous=True)
uuid = roslaunch.rlutil.get_or_generate_uuid(None, False)
roslaunch.configure_logging(uuid)
launch = roslaunch.parent.ROSLaunchParent(uuid, ["/home/atif/sewts_ws/src/sewts_task/launch/action_server_client.launch"])
launch.start()
rospy.loginfo("started")

rospy.sleep(3)
# 3 seconds later
launch.shutdown()

import roslaunch

uuid = roslaunch.rlutil.get_or_generate_uuid(None, False)
roslaunch.configure_logging(uuid)
launch = roslaunch.scriptapi.ROSLaunch()
launch.parent = roslaunch.parent.ROSLaunchParent(uuid, "/home/atif/sewts_ws/src/sewts_task/launch/action_server_client.launch")
launch.start()

# Start another node
#node = roslaunch.core.Node(package, executable)
#launch.launch(node)

#try:
#  launch.spin()
#finally:
#  # After Ctrl+C, stop all nodes from running
#  launch.shutdown()


import roslaunch

package = 'sewts_task'
executable = 'sewts_task'
node = roslaunch.core.Node(package, executable)

launch = roslaunch.scriptapi.ROSLaunch()
launch.start()

process = launch.launch(node)
print process.is_alive()
process.stop()

#!/usr/bin/env python2.7

import rospy
import subprocess
import signal

child = subprocess.Popen(["roslaunch","sewts_task","action_server_client.launch"])
#child.wait() #You can use this line to block the parent process untill the child process finished.
print "parent process"
print child.poll()

rospy.loginfo('The PID of child: %d', child.pid)
print "The PID of child:", child.pid

rospy.sleep(15)

child.send_signal(signal.SIGINT) #You may also use .terminate() method
#child.terminate()

#for more: https://docs.python.org/2/library/subprocess.html'''

import roslaunch
import rospy
import os
os.system("roslaunch sewts_task action_server_client.launch")

#!/usr/bin/env python2.7

from sewts_task.srv import AddTwoInts,AddTwoIntsResponse
import rospy

#def handle_add_two_ints(req):
#    print "Returning [%s + %s = %s]"%(req.a, req.b, (req.a + req.b))
#    return AddTwoIntsResponse(req.a + req.b)

def product_id(req):
    id=req.id
    print "id: ",type(id)
    if id==1:
        l="product found"
        return AddTwoIntsResponse(l)


def add_two_ints_server():
    rospy.init_node('add_two_ints_server')
    s = rospy.Service('add_two_ints',AddTwoInts,product_id)
    print "Ready to add two ints."
    rospy.spin()

if __name__ == "__main__":
    add_two_ints_server()

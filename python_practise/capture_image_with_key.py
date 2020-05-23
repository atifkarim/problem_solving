from datetime import datetime
#now = datetime.now()
#current_time = now.strftime("%H:%M:%S")
#print"Current Time =", current_time


#print "raspi is capturing image"
import os

from picamera import PiCamera
cam = PiCamera()
#cam.capture(current_time+'.jpg')
#cam.close()

import time

#try:
 #while True:
#	now = datetime.now()
#	current_time = now.strftime("%H:%M:%S")
    #    #cam = PiCamera()
   #     cam.capture(current_time + '.jpg')
  #      print "captured done"
 #       time.sleep(5)
#except KeyboardInterrupt:
#    pass


import getch
while True:
    char = getch.getch()
    key_val = ord(char)
    print('key_val: ',key_val,' type: ',type(key_val))
    now=datetime.now()
    current_time = now.strftime("%H:%M:%S")
    if key_val ==46:
        print('printing time: ',current_time)
        cam.capture(current_time+'.jpg')
        print('capture done')

       # print('I am doing job as the key val is: ',key_val)
    else:
        print('I have to quit as the key val is: ',key_val)
        cam.close()
        break

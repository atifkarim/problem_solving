from datetime import datetime
from picamera import PiCamera # it will work in raspi
cam = PiCamera() # open the camera
#cam.capture(current_time+'.jpg')
#cam.close()

import time

import getch
while True:
    char = getch.getch()
    key_val = ord(char)
    print('key_val: ',key_val,' type: ',type(key_val))
    now=datetime.now()
    current_time = now.strftime("%H:%M:%S")
    if key_val ==46: # here works for . (dot)
        print('printing time: ',current_time)
        cam.capture(current_time+'.jpg')
        print('capture done')

       # print('I am doing job as the key val is: ',key_val)
    else:
        print('I have to quit as the key val is: ',key_val)
        cam.close()
        break
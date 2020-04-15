#!/home/atif/myenv/bin/python

import cv2
import matplotlib.pyplot as plt
dir = "/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/"
path = "/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/photo.jpg"

frame = cv2.imread(path)
hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
img_gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
cv2.imwrite(dir+'cv2_image.png',img_gray)

print(frame)

cv2.imshow('GRAY',img_gray)
if cv2.waitKey() == ord('q'):
    cv2.destroyAllWindows()

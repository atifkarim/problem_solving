#!/home/atif/myenv/bin/python

import cv2
import matplotlib.pyplot as plt

path = "/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/photo.jpg"

frame = cv2.imread(path)
hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

print(frame)

# cv2.imshow('hsv',hsv)
# if cv2.waitKey() == ord('q'):
#     cv2.destroyAllWindows()

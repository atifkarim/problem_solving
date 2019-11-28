# import msvcrt
print('time number greater than 0 to run the code: ')
# num_1 = int(input())
#
# while num_1 > 0:
#     print('hi')
#     num_1+=1
#     if num_1 > 20:
#         break

# import sys
# import keyboard
# a=[1,2,3,4]
# print("Press Enter to continue or press Esc to exit: ")
# while num_1>0:
#     try:
#         if keyboard.is_pressed('ENTER'):
#             print("you pressed Enter, so printing the list..")
#             print(a)
#             break
#         if keyboard.is_pressed('Esc'):
#             print("\nyou pressed Esc, so exiting...")
#             sys.exit(0)
#     except:
#         break


import curses
from datetime import datetime
import time
# now = datetime.now()
# current_time = now.strftime("%H:%M:%S")
# print"Current Time =", current_time


# def main():
#     stdscr = curses.initscr()
#     while True:
#         now = datetime.now()
#         current_time = now.strftime("%H:%M:%S")
#         print("Current Time =", current_time)
#         time.sleep(2)
#         key = stdscr.getch()
#         if key == 27: # This is the escape key code
#              curses.endwin()
#              break
#
# main()

# import getch
# char = getch.getch()
# print('char is: ', char)
#########################################################################
# import sys
#
# while True:
#     print('user')
#     selection = input("U: Create User\nQ: Quit")
#     if selection is "Q" or selection is "q":
#         print("Quitting")
#         sys.exit()
#     if selection is "U" or selection is "u":
#         print("User")
#         #do_something()

import time
try:
    while True:
        print('hi run')
        time.sleep(2)
except KeyboardInterrupt:
    pass
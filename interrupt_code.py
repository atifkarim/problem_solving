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

######################### get the key charecter #########################
# import curses
# from datetime import datetime
# import time
# now = datetime.now()
# current_time = now.strftime("%H:%M:%S")
# print("Current Time =", current_time)
#
#
#
#
# def main():
#     stdscr = curses.initscr()
#     while True:
#         now = datetime.now()
#         current_time = now.strftime("%H:%M:%S")
#         print("Current Time =", current_time)
#         # time.sleep(2)
#         key = stdscr.getch()
#         if key == 27: # This is the escape key code
#              curses.endwin()
#              break
#
# main()
##############################################################################################
import getch
# char = getch.getch()
# print('char is: ', char)
##############################################################################################
# import cv2
#
# while True:
#     key = cv2.waitKey(1) & 0xFF
#     # print('key: ',key)
#
#     # if the 'ESC' key is pressed, Quit
#     if key == 27:
#         quit()
#     if key == 0:
#         print ("up")
#     elif key == 1:
#         print ("down")
#     elif key == 2:
#         print ("left")
#     elif key == 3:
#         print ("right")
#     # 255 is what the console returns when there is no key press...
#     elif key != 255:
#         print('I am here???')
#         print(key)
######################### press Q will QUIT, press U will CONTINUE #########################
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



######################### interrupt code with ctrl+C #########################
# import time
# try:
#     while True:
#         print('hi run')
#         time.sleep(2)
# except KeyboardInterrupt:
#     pass


###########################################################################################
# print(ord('\x1b'))
# print(ord('.'))
# print(type(ord('.')))
# chr(27)
###########################################################################################
# # import msvcrt # it is not for linux, only for windows
# import getch
# char = getch.getch()
# print(char)
# print('ord in char: ',ord(char))
######################## it will tell the key name. #################################
# import curses
# import os
#
# def main(win,char):
#     win.nodelay(True)
#     key=""
#     win.clear()
#     win.addstr("Detected key:")
#     while 1:
#         try:
#            key = win.getkey()
#            win.clear()
#            win.addstr("Detected key:")
#            win.addstr(str(key))
#            # char = getch.getch(win.addstr(str(key)))
#            # print('char: ',char)
#            if key == os.linesep:
#               break
#         except Exception as e:
#            # No input
#            pass
# char = None
# curses.wrapper(main,char)


################################## do task if press button ##################################
import getch
while True:
    char = getch.getch()
    key_val = ord(char)
    print('key_val: ',key_val,' type: ',type(key_val))
    if key_val == 46:
        print('I am doing job as the key val is: ',key_val)
    else:
        print('I have to quit as the key val is: ',key_val)
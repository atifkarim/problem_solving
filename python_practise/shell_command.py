# # Import the module
# import subprocess
#
# # Ask the user for input
# host = input("Enter a host to ping: ")
#
# # Set up the echo command and direct the output to a pipe
# p1 = subprocess.Popen(['ping', '-c 2', host], stdout=subprocess.PIPE)
#
# # Run the command
# output = p1.communicate()[0]
#
# print (output)



import os
# os.system('ls -l')

# print(os.system('ls -l'))
# print(os.system('mkdir python_shell'))

from datetime import datetime
now = datetime.now()
current_time = now.strftime("%H:%M:%S")
print("Current Time =", current_time)
print(type(current_time))

a = "raspsistill -o "+current_time+".jpg -t 5000"
print(a, '   ', type(a))
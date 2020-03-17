from _collections import OrderedDict

actor_dict = {'Atif':[300,1], 'Abul':[300,2],'Ashraf':[300,3],'Anas':[300,4]}

print(type(actor_dict))
print(actor_dict)

for i in actor_dict:
    print(i)

print('\n')

for i in OrderedDict(actor_dict):
    print(i)


d_sorted = {k: v for k, v in sorted(actor_dict.items(), key=lambda x: x[1])}
print(d_sorted)

import os

dir = os.getcwd()
file_name = dir+'/'+'dict_key.txt'
for i in actor_dict:

    f = open(file_name, 'a')
    # f = open(str(dirName_RGB_info) + 'color_info_' + str(i) + '.txt', 'r+')
    # f.truncate(0)
    # get_mask_color = client.request('vget /object/' + str(i) + '/color')
    #    print('mask color: ',get_mask_color)
    f.write(i)
    f.write("\n")
    f.close()

# my_dixt = {'Atif':[300,1], 'Abul':[300,2],'Ashraf':[300,3],'Anas':[300,4]}

## dictionary making from JSON file and print them in that order in which it is written
import json

with open('/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/py_dict/config_file_capture_image.json', 'r') as f:
    config = json.load(f)

actor_dict={}
for i in config['actor']:
    actor_dict[i]=[]
    actor_dict[i].append(config['actor'][i]['class'])
    actor_dict[i].append(config['actor'][i]['radius'])
    print(actor_dict[i])
print('actor_dict: ',actor_dict) # created dictionary

dir = os.getcwd()
dict_key_file_name = dir+'/'+'dict_key_file_name.txt'
# printing dictionary by keeping the order in which it is written
# making a text file which will store all the name of the key of the dictionary without distorting order
for car in sorted(actor_dict.items(),key=lambda x:x[1]):
    print(car[0])
    f = open(dict_key_file_name, 'a')
    f.write(car[0])
    f.write("\n")
    f.close()


# Now use the text file to rename folder. To perform this task be careful. It is written to rename folders which are created from UE4
# to use for YOLO training and testing purpose. Renaming will help KERAS training and testing. The number of folder must be same
# as the number of line of the text file.

import os

folders_path = '/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/py_dict/test_rename_folder/'

name_list = []

with open("/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/py_dict/dict_key_file_name.txt", "r") as f:
    for line in f.read().splitlines():
        print(line)
        name_list.append(line)


print(name_list)
ind=0
for root, dirs, files in os.walk(folders_path):
    for directory in dirs:
        new_name = name_list[ind]
        path1 = folders_path + directory#Full path of directory
        new_path = folders_path + new_name#Full path of file whose name is changed
        print(new_path)
        ind+=1
        os.rename(path1, new_path)
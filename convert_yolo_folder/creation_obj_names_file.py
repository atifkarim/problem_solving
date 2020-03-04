# Creation of obj.names is possibe with this code. It will take all of the classes name using the folder's name from the referred path
# This file would be used in training YOLO 
import os

dirName = '/home/atif/machine_learning_stuff/ml_image/train_image_AI_reduced/new_method/'

current_dir = os.getcwd()
print(current_dir)
file_name = 'obj.names'

evaluation_metrics_file_path = current_dir+'/'+file_name
if not os.path.isfile(evaluation_metrics_file_path):
    f = open(evaluation_metrics_file_path,'a')
    f.close()
    print('file now created')
else:
    os.remove(evaluation_metrics_file_path)
    f = open(evaluation_metrics_file_path,'a')
    f.close()
    print('file removed and created')


folder_list = []
ent = os.listdir(dirName)
for t in ent:
    folder_list.append(t)

print(folder_list)
folder_list.sort()
print(folder_list)


f = open(evaluation_metrics_file_path, 'a')

for x in folder_list:
    print(x)
    f.write(str(x))
    f.write('\n')
f.close()

import os

# def getListOfFiles(dirName):
#     # create a list of file and sub directories
#     # names in the given directory
#     listOfFile = os.listdir(dirName)
#     print(listOfFile)
#     allFiles = list()
#     # Iterate over all the entries
#     for entry in listOfFile:
#         # Create full path
#         fullPath = os.path.join(dirName, entry)
#         # print('entry: ',entry)
#         # If entry is a directory then get the list of files in this directory
#         if os.path.isdir(fullPath):
#             allFiles = allFiles + getListOfFiles(fullPath)
#         else:
#             allFiles.append(fullPath)
#
#     return allFiles


dirName = '/home/atif/new_method/'


# Get the list of all files in directory tree at given path
# listOfFiles = getListOfFiles(dirName)

# print(type(listOfFiles))
# print(listOfFiles)
#
# for i in listOfFiles:
#     print(i)


current_dir = os.getcwd()
print(current_dir)
file_name = 'train_image.csv'

evaluation_metrics_file_path = current_dir+'/'+file_name
if not os.path.isfile(evaluation_metrics_file_path):
    f = open(evaluation_metrics_file_path,'a')
    f.close()
    print('metrics file now created')
else:
    os.remove(evaluation_metrics_file_path)
    f = open(evaluation_metrics_file_path,'a')
    f.close()
    print('metrics file removed and created')


folder_list = []
ent = os.listdir(dirName)
for t in ent:
    folder_list.append(t)

print(folder_list)
folder_list.sort()
print(folder_list)


f = open(evaluation_metrics_file_path, 'a')
f.write('filename'+';'+'classID')
f.write('\n')
for x in ent:
    # count = 0
    # print(x,'*'*20)
    class_id = folder_list.index(x)
    full_path = os.path.join(dirName,x)
    # print('folder_name: ',full_path)
    if os.path.isdir(full_path):
        new_dir = os.listdir(full_path)
        for y in new_dir:
            full_image_name_with_path = full_path+'/'+y
            print(full_image_name_with_path,'#'*10,class_id)
            f.write(str(full_image_name_with_path))
            f.write(';')
            f.write(str(class_id))
            f.write('\n')
            # count+=1
            # print(y)
        # print('/\/'*40+'count of image: ',count)
        # count=1
        # print('!'*60)


# A = [1,20,3,-2,5,64]
#
# for i in A:
#     print(A.index(-2))


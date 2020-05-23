# Fetching file which contains a specific string

import os
dir = '/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/moin_test/'

def search_string_in_file(dir, given_string):
    filename_list = []
    for root, directories, filenames in os.walk(dir):
        for filename in filenames:
            with open(dir+filename) as f:
                if given_string in f.read():
                    print(filename)
                    filename_list.append(filename)
    return filename_list

d = search_string_in_file(dir, "ang")

print(d)

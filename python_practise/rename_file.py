#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Dec 13 06:03:53 2019

@author: atif
"""

import numpy as np
import os

dir = '/media/atif/0820209220208930/ALL IMAGE RASPBERRY/ss/raspberry/'

# =============================================================================
# code to rename file by splitting with recursive function
# =============================================================================

#def traverse_dir_recur(dir):
#    import os
#    l = os.listdir(dir)
##    print('l: ',l)
#    for d in l:
#        if os.path.isdir(dir + d):
#            traverse_dir_recur(dir+  d +"/")
#        else:
##            print(dir + d)
#            print(d)
#            pass
#traverse_dir_recur(dir)        



# =============================================================================
# code to rename file from a total directory
# =============================================================================

count = 1
for root, directories, filenames in os.walk(dir):
    for filename in filenames:
#        print (os.path.join(root,filename))
#        print(count,'*'*10,filename)
        split_filename = filename.replace(":", "_")
#        print(count,'*'*10,split_filename)
#        filename.rename(filename, split_filename)
        old_name = os.path.join(root,filename)
        new_name= os.path.join(root,split_filename)
#        print (os.path.join(root,split_filename))
        os.rename(old_name, new_name)
        count+=1
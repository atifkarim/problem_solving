# -*- coding: utf-8 -*-
"""
Created on Sat Aug 10 00:06:46 2019

@author: atif
"""
three = 'A'
five = 'N'
three_and_five = 'A+N'
for i in range(0,101):
    
    if i%3 == 0 and i%5 == 0:
        print('number is ',i,' so We are ',three_and_five)
    
    elif i%3 == 0:
        print('number is ',i,' so I am '+three)
        
    elif i%5 == 0:
        print('number is ',i,' so I am '+five)
        
    else:
        print('number is ',i)
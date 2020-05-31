# def getMissingNo(A): 
#     n = len(A) 
#     print(n)
#     total = (n + 1)*(n + 2)/2
#     print("total: ",total)
#     sum_of_A = sum(A) 
#     print("sum of all content of list A: ",sum_of_A)
#     return total - sum_of_A 
  
# # Driver program to test the above function 
# A = [1, 2, 5,3] 
# B = [1,2,5]
# miss = getMissingNo(A) 
# print(miss) 
# # This code is contributed by Pratik Chhajer 

# Python3 program to find 
# the mising Number 
# getMissingNo takes list as argument 

#!/usr/bin/python
# -*- coding: utf-8 -*-
# Python3 program to find
# the mising Number
# getMissingNo takes list as argument


def getMissingNo(a, n):
    x1 = a[0]
    x2 = 1

    for i in range(1, n):
        x1 = x1 ^ a[i]
        print("-- x1: ",x1)

    for i in range(2, n + 2):
        print("-- !! x2: ",x2)
        x2 = x2 ^ i

    print("x1: ",x1)
    print("x2: ",x2)
    return x1 ^ x2


# Driver program to test above function

if __name__ == '__main__':

    a = [1, 2, 5, 4, 6]
    n = len(a)
    miss = getMissingNo(a, n)
    print (miss)

# This code is contributed by Yatin Gupta


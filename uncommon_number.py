import numpy as np

lst = [9,3,9,3,9,3,7]
# len(lst)

# from collections import Counter
# # lst = [4,3,2,4,5,6,4,7,6,8]
# d =  Counter(lst)  # -> Counter({4: 3, 6: 2, 3: 1, 2: 1, 5: 1, 7: 1, 8: 1})
#
# print("d: ",d)
# res = [k for k, v in d.items() if v == 1] # if need common items then v>1
# print(res)
# # [4, 6]


# try to make own counter
# m = 1
n=0
p=1
# for i, j in enumerate(lst):
#     res = lst[m]-j
#     # print(res)
#     if res == 0:
#         print('loop accessed',lst[m],'   ',j)
#         n+=1
#     print(p,'---------value is: ',lst[m],' and repeated time is: ',n)
#     m+=1
#     n=1
#     print('here I am: ',p)
#     p+=1

import math

# print("The factorial of list is : ", end="")
do_factorial = len(lst)-1
do_fact_here = math.factorial(do_factorial)
# print(do_factorial)
# m=-1
# for i in lst:
#     m+=1
#     res = lst[m]-i
#
#     if res == 0:
#         print('val is: ',lst[m],' and it subtracted: ',i)
#     # m+=1
#     print('now m value is: ',m,' and: ',lst[m])

# m=0
for index,i in enumerate(lst):
    m = index+1
    print('val i is: ',i)
    print('do_factorial: ', do_factorial)
    for j in range(do_factorial):

        res = i-lst[m]

        if res==0:
            # pass
            print('val is: ', lst[m], ' and it subtracted: ', i)
        m+=1
    do_factorial = do_factorial-1

import re
e = [1,2,3,9,32,25,24]
e = np.array(e)

x = [2 for x in e]
print(x)
print(x)

for index, i in enumerate(lst):
    if i != e.all():
        print(i)
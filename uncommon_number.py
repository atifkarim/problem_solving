# import numpy as np
#
# lst = [9,3,9,3,9,3,7]
#
# b = []
#
# for

# a = [1,2,3,2,1,5,6,5,5,5]
#
# import collections
# print (item for item, count in collections.Counter(a).items() if count > 1)


from collections import Counter

lst = [9,3,9,3,9,3,7]
# lst = [4,3,2,4,5,6,4,7,6,8]
d =  Counter(lst)  # -> Counter({4: 3, 6: 2, 3: 1, 2: 1, 5: 1, 7: 1, 8: 1})
res = [k for k, v in d.items() if v == 1] # if need common items then v>1
print(res)
# [4, 6]
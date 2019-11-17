# changing some in test branch in this file. then I will try to do
# git checkout master

# git add, git commit, git push# git checkout --patch test python_RE.py
# git add, git commit, git push
import re
p = re.compile('ab*')
p
re.compile('ab*')


def myfunc(n):
  return lambda a : a * n

mydoubler = myfunc(2)

lam = mydoubler(11)
print('lam: ',lam)

import numpy as np
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

new_list = list(filter(lambda x: (x%2 == 0) , my_list))

print(type(new_list))
# Output: [4, 6, 8, 12]
print('new_list: ',new_list)

##################################################

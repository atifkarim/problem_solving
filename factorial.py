# n = 9900
# fact = 1
#
# for i in range(1, n + 1):
#     fact = fact * i
#
# print("The factorial of",n," is : ", end="")
# print(fact)


# import numpy as np
# a = np.zeros((156816, 36, 53806), dtype='uint8')

import numpy as np
import pandas as pd
# Creating a 2 dimensional numpy array
data= np.array([[ 10,80,0,100,1,56,'a'], [ 20,0,0,0,1,56,'u'],[ 20,80,0,0,1,56,'z'],[ 25,2,0,88,1,56,'t'],[30,80,0,100,1,56,'q'],[ 28,0,0,100,1,56,'e']
               ,[ 80,0,10,0,1,56,'i'],[ 24,0,10,0,1,56,'u']])


row=[]
row=np.array(row)
for i, index in enumerate(data):
#     print(i)
    row=np.append(row,i)
print(row.shape)
row = np.reshape(row, (-1, 1))
print(row.shape)
test_data=pd.DataFrame(data=data[0:,0:],    # values
             index=row[0:,0],    # 1st column as index
             columns=data[0,0:])  # 1st row as the column names
print(type(test_data))
# print(test_data)
test_data.columns = ['a', 'b','c','d','e','f','string column']
test_data

w = test_data.drop(["string column"], axis=1)
w
corre_1 = w.corr()

corre_1

list(w)

w.shape

w.corr()
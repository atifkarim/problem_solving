# def binary_gap(N):
#     return len(max(format(N, 'b').strip('0').split('1')))
#
# # n = ('input is: ',int(input()))
#
# n = int(input())
# a = binary_gap(n)
# print('max length is: ',a)

# def solution(N):
#     max_gap = 0
#     current_gap = 0
#     # Skip the tailing zero(s)
#     while N > 0 and N%2 == 0:
#         N //= 2
#     while N > 0:
#         remainder = N%2
#         if remainder == 0:
#             # Inside a gap
#             current_gap += 1
#         else:
#             # Gap ends
#             if current_gap != 0:
#                 max_gap = max(current_gap, max_gap)
#                 current_gap = 0
#         N //= 2
#     return max_gap
#
# n = int(input())
# a = solution(n)
# print('max length is: ',a)

import numpy as np
print('given input is: ')
a = int(input())

print('binary value is: ',bin(a))
binary_val = format(a, "08b")
print('binary now is: ',binary_val)

string_val = str(binary_val)
print('string is: ',string_val)

A = []
# A = np.array(A)

for i in string_val:
    print(i, '  ',type(i))
    # A = np.append(i,A)
    A.append(i)

print('the array A is: ',A)
A=A[::-1]
print('actual array is: ',A)

for idx,val in enumerate(A):
    if A[idx]=='0':
        B=A[idx+1:]
    else:
        B=A[idx:]
        break

print('new array whose no ZERO from left is: ',B)
print(type(B))

C=B[::-1]
print('reverse array is: ',C,'***** type is:',type(C))

for idx, val in enumerate(C):
    if C[idx]=='0':
        D=C[idx+1:]
        print('here D is: ',D)
    else:
        D=C[idx:]
        print('before break D is: ',D)
        break

print('the array who is bounded with 1 from left and right: ',D)

# E=D[::-1]

# while len(E)==1:
#     print('BREAK !!!!!!!!!!!!!!!!!!!!!')
#     break

# if len(E)==1:
#     print('no binary gap')
# else:
#     print('start next journey with:',E)

count = 0
gap = 0
for idx, val in enumerate(D):
    if D[idx]=='0':
        count+=1
    else:
        if count>gap:
            gap=count
            count=0
        else:
            gap=gap

print('value of gap: ',gap)
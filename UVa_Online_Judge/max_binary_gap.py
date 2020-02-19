# import numpy as np
#
# num = '10001'
# # num_split = np.split()
# # print(num_split)
# # print(type(num))
# #
# # for i in num:
# #     print(i)
#
# # print('length of num: ',len(num))
# # zero_count =0
# # for index, val in enumerate(num):
# #     print(num[index])
# #     if val == '0':
# #         pass
# #     elif val == '1':
# #         if val
# #
# #
# # def max_binary_gap(number, count_zero):
# #     if number == '0':
# #         count_zero+=1
# #     eli
#
# a='1'
# b='0'
# count=0
# long_count = 0
#
#
# A = []
# A = np.array(A)
# print(type(A))
#
# for i in num:
#     A = np.append(i,A)
#
#
# print(A)
#
# for i in A:
#     if i == a:
#         count+=1
#
#


# print(n,' **',type(n))


# def binary_gap(N):
#     return len(max(format(N, 'b').strip('0').split('1')))
#
# # n = ('input is: ',int(input()))
#
# n = int(input())
# a = binary_gap(n)
# print('max length is: ',a)

def solution(N):
    max_gap = 0
    current_gap = 0
    # Skip the tailing zero(s)
    while N > 0 and N%2 == 0:
        N //= 2
    while N > 0:
        remainder = N%2
        if remainder == 0:
            # Inside a gap
            current_gap += 1
        else:
            # Gap ends
            if current_gap != 0:
                max_gap = max(current_gap, max_gap)
                current_gap = 0
        N //= 2
    return max_gap

n = int(input())
a = solution(n)
print('max length is: ',a)
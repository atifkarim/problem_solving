import numpy as np

given_num = [1,-1,2,-2,-3,3,0]
print('given num: ',given_num)

absolute_num = [abs(a) for a in given_num]
print('abs num: ',absolute_num)

desire_closing_point = 10 #user have to give it

difference_from_closing_point = [desire_closing_point-b for b in absolute_num]
print('diff from desire num: ',difference_from_closing_point)

abs_difference_from_closing_point = [abs(d) for d in difference_from_closing_point]
print('abs_difference: ', abs_difference_from_closing_point)

min_difference_from_closing_point= min(abs_difference_from_closing_point)

intermediate_result = []

for idx, i in enumerate(abs_difference_from_closing_point):
    res = abs(min_difference_from_closing_point)-abs(i)
    if res == 0:
        # print(idx)
        intermediate_result.append(given_num[idx])

print(intermediate_result)

if len(intermediate_result)>0:
    final_result = max(intermediate_result)
else:
    final_result = intermediate_result[0]

print(final_result)
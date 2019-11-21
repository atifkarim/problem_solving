import numpy as np

first_num = int(input())
second_num = int(input())

count_even = 0
count_odd = 0
final_count = 0

def cycle_length(x, count_even, count_odd, final_count):
    if x == 1:
        print('TERMINATE ----------, I am now: ',x,' so I should stop')
        count_even = count_even
        count_odd = count_odd
        print('In this case count_even: ', count_even,' and count_odd: ', count_odd)
        final_count = count_even+count_odd
        print('TERMINATION ZONE')
        print('final count: ', final_count)
    elif x%2 == 0:
        # print('hi now I am even: ',x)
        count_even = count_even+1
        # print('count even: ', count_even)
        x = int(x/2)
        # print('ffff: ', count_even)
        if x !=1:
            count_even, count_odd, final_count = cycle_length(x,count_even, count_odd, final_count)
        elif x==1:
            print('SORRY ----------, I am now: ', x, ' so I should stop')
            count_even = count_even
            count_odd = count_odd
            print('In this case count_even: ', count_even, ' and count_odd: ', count_odd)
            final_count = count_even + count_odd+1
            print('final count: ', final_count)
            return count_even, count_odd, final_count


    else:
        # print('hi now I am odd: ',x)
        count_odd = count_odd+1
        # print('count_odd: ', count_odd)
        x = int(3*x+1)
        if x !=1:
            count_even, count_odd, final_count = cycle_length(x,count_even, count_odd, final_count)
        elif x ==1:
            count_odd = count_odd
            print('SORRY ----------, I am now: ', x, ' so I should stop')
            count_even = count_even
            count_odd = count_odd
            print('In this case count_even: ', count_even, ' and count_odd: ', count_odd)
            final_count = count_even+count_odd+1
            print('final count: ', final_count)
            return count_even, count_odd, final_count


    return count_even, count_odd, final_count


# final_even, final_odd, final_count_1 = cycle_length(22, count_even, count_odd, final_count)
maximal_length_array = []
for i in range (first_num,second_num+1):
    final_even, final_odd, final_count_1 = cycle_length(i, count_even, count_odd, final_count)
    print('!!!!!!!!!!!!!!!',final_count_1)
    maximal_length_array.append(final_count_1)

len(maximal_length_array)
maximal_length_array
maximal_length_array_array = np.array(maximal_length_array)
max_len = maximal_length_array_array.max()
print('max_len: ',max_len)

print('*'*10,' Desired output ','*'*10)
print(first_num,' ', second_num,' ',max_len)
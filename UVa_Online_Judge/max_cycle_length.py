first_num = int(input())
second_num = int(input())
# print('given: ',type(a))
count = 0
for i in range (first_num, second_num+1,1):
    if i!=1:

    count+=1
print('for loop iterated: ', count)




count_even =0
count_odd = 0
final_count = 0
# final_count_even = 0
# final_count_odd = 0
def cycle_length(x, count_even, count_odd, final_count):
    if x ==1:
        print('TERMINATE ----------, I am now: ',x,' so I should stop')
        count_even = count_even
        count_odd = count_odd
        print('In this case count_even: ', count_even,' and count_odd: ', count_odd)
    elif x%2 ==0:
        print('hi now I am even: ',x)
        count_even = count_even+1
        print('count even: ', count_even)
        x = int(x/2)
        print('ffff: ', count_even)
        if x !=1:
            x = cycle_length(x,count_even, count_odd, final_count)
        elif x==1:
            count_even = count_even
            print('SORRY ----------, I am now: ', x, ' so I should stop')
            count_even = count_even
            count_odd = count_odd
            print('In this case count_even: ', count_even, ' and count_odd: ', count_odd)
            final_count = count_even + count_odd
            print('fina count: ', final_count)
    else:
        print('hi now I am odd: ',x)
        count_odd = count_odd+1
        print('count_odd: ', count_odd)
        x = int(3*x+1)
        if x !=1:
            x = cycle_length(x,count_even, count_odd, final_count)
        elif x ==1:
            count_odd = count_odd
            print('SORRY ----------, I am now: ', x, ' so I should stop')
            count_even = count_even
            count_odd = count_odd
            print('In this case count_even: ', count_even, ' and count_odd: ', count_odd)
            final_count = count_even+count_odd
            print('fina count: ', final_count)

    print('ultimate count  is: ',final_count)
    return x, count_even, count_odd, final_count

num, final_even, final_odd, final_count_1 = cycle_length(5, count_even, count_odd, final_count)

print(num)
print(final_even)
print(final_odd)

print(e)
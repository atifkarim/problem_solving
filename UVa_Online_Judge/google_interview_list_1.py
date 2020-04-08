'''Task is-- 
give a array
consider it as a number.
Add 1 with the number
don't overflow the original size
Then make the new array with the result

for example ->>> [0] result will be [1]
[9,9,9] result will be [0,0,0]
[1,2,3] result will be [1,2,4]
'''

a = [0,1,0,-1]
b = [None]*len(a)
print(b)

pos = -1
init_sum = 1 # this will be added with the last index content of array a


def do_sum(init_sum,pos, a, b):

    while abs(pos)<len(a)+1:
        print('\ncheck val after while loop: ', abs(pos))
        init_sum = init_sum+a[pos]
        print('do init sum: ', init_sum)
        if init_sum == 10:
            b[pos] = 0
            pos = pos-1
            init_sum = 1
            print("list in if loop: ",b)
            print("if loop pos: ",pos)
            do_sum(init_sum,pos,a, b)
            
            return b
        else:
            b[pos] = init_sum
            print("else loop after calc: ", b)
            print("else loop pos before: ",pos)
            pos = pos-1
            print("else loop pos after: ",pos)
            init_sum = 0
            do_sum(init_sum,pos,a, b)

            return b

c = do_sum(init_sum, pos, a,b)
print('\n\n')
print("final RESULT:----- ",c)

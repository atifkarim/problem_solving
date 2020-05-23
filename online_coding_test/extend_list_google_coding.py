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


a = [1,4,7,8]
b = [None]*len(a)
print(b)

pos = -1
init_sum = 1 # this will be added with the last index content of array a

def do_sum(init_sum,pos, a, b):
    print('here our pos: ',pos)
    print("after calling func b: ",b)
    for i in range(len(a)):
        # break
        print('pos --------------',pos)
        if abs(pos)>len(a):
            #print('pos --------------',pos)
            break
        else:

            init_sum = init_sum+a[pos]
            print('init sum: ', init_sum)
            if init_sum == 10:
                b[pos] = 0
                pos = pos-1
                init_sum = 1
                print("if loop: ",b)
                print("if loop pos: ",pos)
                do_sum(init_sum,pos,a, b)
                if abs(pos)<=len(a):
                    print("if loop pos: ",abs(pos), " len a: ", len(a))
                    do_sum(init_sum, pos, a,b)
                else:
                    print("**************** vaire ami do break from IF")
                    return b
                    break
                
            else:
                b[pos] = init_sum
                print("else loop after calc: ", b)
                print("else loop pos before: ",pos)
                pos = pos-1
                print("else loop pos after: ",pos)
                init_sum = 0
                do_sum(init_sum,pos,a, b)
                if pos == -5:
                    print("!!!!!!!!!!!!!!!!!!!ami ekhn ekhane")
                    break
                else:
                    #abs(pos)<=len(a):
                    print("else loop pos: ",abs(pos), " len a: ", len(a))
                    do_sum(init_sum,pos,a, b)
                #else:      
                 #   return b
                    # print("do break from ELSE")
                    
    return b

c = do_sum(init_sum, pos, a,b)
print("final RESULT:----- ",c)

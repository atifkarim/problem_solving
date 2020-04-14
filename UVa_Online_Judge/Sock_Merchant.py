# https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs[0]=interview-preparation-kit&playlist_slugs[1]=warmup

sock_n = 7
color_arr = ['None']*sock_n
# print(sock_n)
# print(type(color_arr))
# color_arr = [10]
color_arr = [20,20,20,20,20,10,10]
# color_arr = [10,20,20,10,10,30,50,10,20]
# color_arr = [10,20,30,10,20,10]
while_loop_arr = color_arr
same_color = 0
count = 0

def check_pair(i,j,index_main):
    temp = i
    print("from func: ", color_arr," index_main: ",index_main)
    global same_color
    global color_arr
    global count
    for val in range(index_main):
        print("------: check val from main whose index is: ",temp," val is: ",j," with another which index: ",i+1," val is: ",color_arr[i+1])
        if j == color_arr[i+1]:
            print("AHARE: index: ",temp," val: ",color_arr[temp],"--- index: ",i+1," val: ",color_arr[i+1])
            color_arr.pop(temp)
            color_arr.pop(i+1-1)
            print("after popping: ",color_arr)
            count+=1
            break
        i=i+1


step=0
step_1 = 0

if len(color_arr)== 0 or len(color_arr)== 1:
    print("#############################################################")
    pass

else:

    while step_1 < len(while_loop_arr):
        print("inside while loop arr: ",while_loop_arr)
        print("step: ",step,"-----------",while_loop_arr[step])
        index_main_1 = len(while_loop_arr)-step-1

        if index_main_1 == 0:
            index_main_1 = 1
            step = 0
        check_pair(step,while_loop_arr[step],index_main_1)
        step_1+=1
        # step+=1


print("total pair: ",count)

# for h in range(5):
#     print(h)

'''


for i,j in enumerate(color_arr):
    print("In the beginning of for loop: ", color_arr)
    # print(i,"\t",j)
    index_main_1 = len(color_arr)-i-1
    # print("now we call func: ",index_main_1)
    if index_main_1 != 0:
        # print("now we call func: ",index_main_1)
        check_pair(i,j,index_main_1)
        '''

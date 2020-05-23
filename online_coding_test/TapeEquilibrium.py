'''A= [3,2,10,4,5]
n=0
q=1
temp=0
for i in A:
    # print('hey: i:',i,'\t','q: ',q,'\t',sum(A[0:q]),'\t',sum(A[q:]))

    if q==len(A):
        break

    m = sum(A[0:q])-sum(A[q:])
    # print("first VAL:------>>>>> ",abs(m))
    q+=1
    # n=m

    # if abs(m)<abs(temp):
    #     temp=m
    #     print('value is in IF: ',abs(temp))
    #
    #     # m=0
    # else:
    #     temp=m
    #     # print('value is in ELSE: ',abs(m))



    if abs(temp)>abs(m):
        print('min: ',abs(m))
        n=m
    temp = m
print('----------------',n)'''

def solution(A):
    n=0
    q = 1
    temp = 0
    for i in A:
        # print('hey: i:',i,'\t','q: ',q,'\t',sum(A[0:q]),'\t',sum(A[q:]))



        m = sum(A[0:q]) - sum(A[q:])
        print("first VAL:------>>>>> ", abs(m))
        q += 1
        # n=m

        if abs(m)<abs(temp):
            temp=m
            print('value is in IF: ',abs(temp))

            # m=0
        else:
            temp=m
            # print('value is in ELSE: ',abs(m))

        # if abs(temp) > abs(m):
        #     print('min: ', abs(m))
        #     n=abs(m)
        # temp = m

        if q == len(A):
            break

    return abs(temp)

print('fnc return is: ',solution([1,2]))
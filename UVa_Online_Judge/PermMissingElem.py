# A.sort()
# next_val = 0
# for idx,val in enumerate(A):
#     next_val = A[idx]+1
#     if next_val!=A[idx+1]:
#         print('missing val is: ',next_val)
#         break
#     else:
#         pass


# def solution(A):
#     A.sort()
#     next_val = 0
#     for idx, val in enumerate(A):
#         next_val = A[idx] + 1
#         if next_val != A[idx + 1]:
#             return next_val
#             break
#         else:
#             pass

def solution(A):
    A.sort()
    # missing_val = 0
    # print('len of A: ',len(A))
    # print(A)
    for idx, val in enumerate(A):
        print('here idx: ',idx,'*'*10,A)
        if A==[]:
            return 1
        elif A[0]!=1:
            return 1
        elif len(A)==1:
            return A[-1]+1
        else:
            print('idx: ',idx,' A[idx]+1: ',A[idx]+1,' A[idx+1]: ',A[idx+1])
            if idx<len(A)-1 and (A[idx]+1) != A[idx + 1]:
                return (A[idx]+1)
                break
            else:
                return A[-1]+1


print(solution([]))

# C = []
# print(C)
#
# len(C)
#
# len(C.sort())
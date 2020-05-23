# https://app.codility.com/demo/results/trainingF2SB5M-5TC/


def solution(A):
    A.sort()


    while A==[]:
        return 1
        break
    while A[0] !=1 :
        return 1
        break
    for idx, val in enumerate(A):


        if len(A)==1:
            return A[-1]+1
        else:

            if idx<len(A)-1:
                if (A[idx]+1) != A[idx + 1]:
                    return (A[idx]+1)
                    break
            else:
                return A[-1]+1
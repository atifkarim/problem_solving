#https://app.codility.com/demo/results/trainingKKY86Y-7NF/

def solution(X,Y,D):
    Jump=0
    if X==Y:
        return Jump

    else:
        S=Y-X
        if S%D!=0:
            Jump=Jump+(S//D)+1
            return Jump
        else:
            Jump = S//D
            return Jump


print(solution(0,40,30))
#https://app.codility.com/demo/results/trainingSTZT27-2PP/


def solution(A,K):
    b = [0] * len(A)
    for i in range(K):
        for idx, val in enumerate(A):
            if idx < len(b) - 1:
                b[idx + 1] = A[idx]
            else:
                b[0] = A[idx]
        A=b[:]

    return b


print(solution([3, 8, 9, 7, 6,3, 8, 9, 7, 6,3, 8, 9, 7, 6,3, 8, 9, 7, 6,3, 8, 9, 7, 6,3, 8, 9, 7, 6],145))

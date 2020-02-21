print('given input is: ')
a = int(input())

def max_binary_gap(N):
    binary_val = format(N, "08b")
    string_val = str(binary_val)
    A = []

    for i in string_val:
        A.append(i)

    for idx, val in enumerate(A):
        if A[0] == '0':
            A = A[1:]
        else:
            A = A[0:]
            break

    A = A[::-1]

    for idx, val in enumerate(A):
        if A[0] == '0':
            A = A[1:]
        else:
            A = A[0:]
            break

    if 2>1:
        count = 0
        gap = 0

        if len(A)==1:
            pass
        else:
            for idx, val in enumerate(A):
                if A[idx] == '0':
                    count += 1
                else:
                    if count > gap:
                        gap = count
                        count = 0
                    else:
                        gap = gap
                        count=0

    return gap

binary_gap = max_binary_gap(a)
print('binary gap is: ',binary_gap)

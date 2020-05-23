'''start_p = 1
end_p = 20
step_p = 1
for i in range (start_p, end_p,step_p):
    print(i*'*')
print('\n')
print("#"*50)
print('\n')

temp_end_p = end_p
for i in range (1, end_p+1,step_p):
    print(i*'*',(temp_end_p)*'*')
    temp_end_p = temp_end_p-1

print('\n')
print("#"*50)
print('\n')

for i in range (start_p, end_p, step_p):
    for j in range (i):
        print(j, end=" ")
    print("")

print('\n')
print("#"*50)
print('\n')

inter_p = end_p

for i in range (start_p, end_p+end_p, 2):
    print(' '*inter_p,(i)*'*')
    inter_p = inter_p-1
    # print(inter_p)

print('\n')
print("#"*50)
print('\n')

here_p = end_p
for i in range(start_p, end_p, step_p):
    print(' '*i,here_p*'*')
    here_p = here_p-1

'''

x = float(input())
x = int(abs(x))
print('given val: ',x)

i = 0

def do_factorial(num):
    global i
    print('i: ',i)
    if num == 0:
        print('ami sesh vaiii: ', num)
        return 1
    elif num == 1:
        print('ami ki asi: ',num)
        return 1
    else:
        print('else val: ',num)
        i = i+1
        return num*do_factorial(num-1)

d = do_factorial(x)
print("i after 16 line: ",i)
print('res is: ',d)
start_p = 1
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
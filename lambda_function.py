def myfunc(n):
  return lambda a : a * n

mydoubler = myfunc(2)

lam = mydoubler(11)
print('lam: ',lam)
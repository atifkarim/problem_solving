def check(num):
  if num!=1 and num!=2:
    num=int(raw_input())
    check(num)
  print "pressed num is: ",num
  return num

a = int(raw_input())
d = check(a)


print "finally pressed NUMMMM is: ",d

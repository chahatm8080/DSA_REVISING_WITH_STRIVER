# pp,qq,rr =7,8,7
# qq =7+pp
# qq=10+pp
# rr=(qq^qq)^qq
# qq=(pp^9)+pp
# print(pp+qq+rr)


# p,q,r=5,8,2
# for r in range (4,r+1):
#   q=p+r
#   if((p+q+r)<(r+p)):
#     continue
#   else:
#     break
# print(p+q)

a,b,c=4,7,8
if((b&c&a)==(a&b)):
  b=(b&4)&a
  if((c+5)>(b-c)):
    if(a>b):
      c=c+c

    a=(c^c)+c
  a=a&b
a=6+b
c=(a+11)^c
print(a+b+c)
  
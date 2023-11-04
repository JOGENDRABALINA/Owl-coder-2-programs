a,b=map(int,input().split())
c =0
for i in range(a,b+1):
    if len(set(str(i))) == len(str(i)):
        c+=1
print(c)

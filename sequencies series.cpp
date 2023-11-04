n=int(input())
ls=list(map(int,input().split()))
l=[]
c=0
l.append(ls[0])
l.append(ls[1])
for i in range(2,n):
    l.append(l[i-1]+l[i-2])
    if l[i] !=ls[i]:
        c+=1
print(c)

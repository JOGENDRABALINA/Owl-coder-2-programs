a,b=map(int,input().split())
l=list(map(int,input().split()))
k=[]
for i in range(a):
    s=0
    for j in range(i,a):
        s+=l[j]
    k.append(s)
print(min(*k))

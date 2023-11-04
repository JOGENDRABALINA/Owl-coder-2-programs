n,m=map(int,input().split())
k=[]
for i in range(n):
    l=list(map(int,input().split()))
    k.append(l)
c=0
for i in range(n):
    for j in range(m):
        if k[i][j] <0:
            c+=1
print(c)

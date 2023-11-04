n=int(input())
l=list(map(int,input().split()))
c=0
for i in range(n):
    for j in range(i+1,n+1):
        z=l[i:j]
        if(sum(z)==0 and c<len(z)):
            c=len(z)
print(c)

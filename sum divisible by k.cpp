n=int(input())
l=list(map(int,input().split()))
k=int(input())
c=0
for i in range(n):
    for j in range(i+1,n+1):
        z=l[i:j]
        if(sum(z)%k==0 and c<len(z)):
            c=len(z)
print(c) 

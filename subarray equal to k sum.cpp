n=int(input())
l=list(map(int,input().split()))
k=int(input())
c=0
for i in range(n+1):
   for j in range(i+1,n+1):
    if sum(l[i:j]) == k:
        c+=1
print(c)

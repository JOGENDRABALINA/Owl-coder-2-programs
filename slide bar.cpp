n=int(input())
l=list(map(int,input().split()))
k=int(input())
c=0
for i in range(n):
    for j in range(i+1,n):
        if l[i]==l[j] and abs(i-j)<=k:
            c+=1
if c>=1:
    print("true")
else:
    print("false")

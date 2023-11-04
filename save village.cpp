n=int(input())
l=list(map(int,input().split()))
sum=0
for i in range(n):
    for j in range(i+1,n):
        if l[i]<l[j]:
            sum+=l[j]
            break
print(sum)

n=int(input())
k=int(input())
a=list(map(int,input().split()))
for i in range(n-k+1):
    print(max(a[i:i+k]),end=" ")

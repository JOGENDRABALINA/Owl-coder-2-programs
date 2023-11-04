n=int(input())
l=map(int,input().split())
k=sorted(l)
for i in range(1,n+1):
    if i not in k:
        print(i)

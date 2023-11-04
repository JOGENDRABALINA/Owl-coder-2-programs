n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    for i in range(0,b):
        l1.sort()
        l1[0]=l2[i]
    print(sum(l1))

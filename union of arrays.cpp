a=int(input())
b=int(input())
a1=list(map(int,input().split()))
b1=list(map(int,input().split()))
k=set(a1).union(set(b1))
print(*k)


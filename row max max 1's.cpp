n=int(input())
d=[]
for i in range(n):
    a=list(map(int,input().split()))
    d.append(sum(a))
m=max(d)
for i in range(len(d)):
    if m == d[i]:
        print(i)

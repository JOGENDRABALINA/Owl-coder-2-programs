n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a.sort()
b.sort()
for i in range(n):
    if a[i]>b[i]:
        print("O")
        break
else:
    print("YES")

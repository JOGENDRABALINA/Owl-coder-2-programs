n=int(input())
m=int(input())
mat = []
for i in range(n):
    li = list(map(int,input().split()))
    mat.append(li)
k = int(input())
f = 0
for i in range(n):
    for j in range(m):
        if mat[i][j] == k:
            f = 1
            break
if f == 1:
    print(1)
else:
    print(0)

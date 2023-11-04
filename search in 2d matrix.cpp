n,m = map(int,input().split())
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
    print("true")
else:
    print("false")

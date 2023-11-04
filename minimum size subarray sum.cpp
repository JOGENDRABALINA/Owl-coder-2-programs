n = int(input())
arr = list(map(int,input().split()))
k = int(input())
l = []
for i in range(n):
    s = 0
    for j in range(i,n):
        s += arr[j]
    if s >= k:
        l.append(len(arr[i:j+1]))
if len(l):
    print(min(l))
else:
    print(0)

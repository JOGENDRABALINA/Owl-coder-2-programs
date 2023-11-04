n = int(input())
arr = list(map(int,input().split()))
r = []
r.append(arr[0])
for i in range(1,n):
    c = 0
    for j in range(len(r)):
        if r[j]>arr[i]:
            r[j]=arr[i]
            c = 1
            break
    if c==0:r.append(arr[i])
print(len(r))

n,k = map(int,input().split())
arr = list(map(int,input().split()))
k = k % n
res = arr[-k:]+arr[:-k]
print(*res)

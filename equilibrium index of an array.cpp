def index(a,arr):
    for i in range(len(arr)):
        left = sum(arr[:i])
        right = sum(arr[i+1:])
        if left == right:
            return i
    return -1
n=int(input())
for i in range(n):
    a=int(input())
    l=list(map(int,input().split()))
    print(index(a,l))

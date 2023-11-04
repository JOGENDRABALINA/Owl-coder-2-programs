def jump(arr,n):
    c = 0
    m = 0
    for i in range(1, n):
        if arr[i] > arr[i - 1]:
            c += 1
        else:
            m = max(m, c)
            c = 0
    return max(m, c)
n = int(input())
arr = list(map(int,input().split()))
print(jump(arr,n))

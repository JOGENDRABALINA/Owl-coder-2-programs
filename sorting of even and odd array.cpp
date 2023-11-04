def sort(arr):
    n = len(arr)
    for i in range(0, n):
        if i % 2 != arr[i] % 2:
            for j in range(i+1, n):
                if arr[j] % 2 == i % 2:
                    arr[i], arr[j] = arr[j], arr[i]
                    break
    return arr
n=int(input())
l=list(map(int,input().split()))
print(*sort(l))

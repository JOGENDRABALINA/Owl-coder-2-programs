def operations(arr):
    arr.sort()
    count = 0
    
    for i in range(1, len(arr)):
        if arr[i] <= arr[i-1]:
            diff = arr[i-1] - arr[i] + 1
            arr[i] += diff
            count += diff
    
    return count
n=int(input())
l=list(map(int,input().split()))
print(operations(l))

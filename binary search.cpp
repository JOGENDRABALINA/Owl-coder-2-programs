def binary(a, t):
    low = 0
    high = len(a) - 1

    while low <= high:
        mid = (low + high) // 2

        if a[mid] == t:
            return mid
        elif a[mid] < t:
            low = mid + 1
        else:
            high = mid - 1

    return -1
a,b=map(int,input().split())
l=list(map(int,input().split()))
print(binary(l,b))

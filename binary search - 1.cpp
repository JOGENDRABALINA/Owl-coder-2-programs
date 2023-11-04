a,b = map(int,input().split())
l = list(map(int,input().split()))
low = 0
high = len(l)-1
mid = (low+high)//2
k = [l[mid]]
while low <= high:
    if l[mid] == b:
        break
    if low >= high and l[mid] != b:
        k.append(-1)
        break
    elif l[mid] > b:
        high = mid-1
        mid = (low+high)//2
        k.append(l[mid])
    else:
        low = mid+1
        mid = (low+high)//2
        k.append(l[mid])
print(*k)

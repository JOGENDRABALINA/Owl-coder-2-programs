n = int(input())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
res1 = []
res2 = []
for i in range(n):
	if arr1[i] not in arr2 and arr1[i] not in res1:
	    res1.append(arr1[i])
	if arr2[i] not in arr1 and arr2[i] not in res2:
	    res2.append(arr2[i])
print(*res1)
print(*res2)

a = int(input())
arr = list(map(int,input().split()))
for i in range(len(arr)):
    if arr[i] == 1:
        print(i)
        break
else:
    print("-1")

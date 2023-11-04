a = int(input())
arr = list(map(int,input().split()))
k = int(input())
o = (len(arr)-1)
print(arr[0],end = " ")
g = k % o 
h = a-g
g = arr[h:]
y = arr[1:h]
print(*g,*y)

a = int(input())
arr = list(map(int,input().split()))
k = max(arr)
f = [0]*(k+1)
j = 0
l  = 0
for i in range(len(arr)):
    f[arr[i]] += 1
g = 0
for i in range(len(f)-1,0,-1):
    if g > 0 and f[i] > 0:
        if g == 2:
            f[i] -= 1
            g = 0
        elif g == 1:
            if f[i] >= 2:
                f[i] -= 2
                g = 0
            else:
                f[i] -= 1
                g = 2
            l += i
    if f[i] > 0:
        h = f[i]//3
        g = f[i] % 3
        l += h*i*2
        if g == 1:
            l += i
        elif g == 2:
            l += (i*2)
print(l)

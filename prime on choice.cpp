def prime(n):
    if n < 2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i == 0:
            return False
    return True
n,r,c = map(int,input().split())
if c == 1:
    i = n+1
    while r>0:
        if prime(i):
            print(i,end=" ")
            r -= 1
        i += 1
else:
    j = n-1
    while r > 0:
        if prime(j):
            print(j,end=" ")
            r -= 1
        j -= 1

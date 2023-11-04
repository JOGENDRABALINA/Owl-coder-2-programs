def prime(n):
    if n < 2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i == 0:
            return False
    return True
n = int(input())
if not prime(n) or n == 2:
    print("NO")
else:
    i = n+1
    j = n-1
    while not prime(i):
        i +=1
    while not prime(j):
        j -=1
    if n > (i+j)/2:
        print("YES")
    else:
        print("NO")

def factor(N):
    i = 2
    while i * i <= N:
        if N % i:
            i += 1
        else:
            N //= i
    if N > 1:
        return N
    return i
n=int(input())
print(factor(n))

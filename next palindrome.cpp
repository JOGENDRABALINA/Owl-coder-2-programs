def pal(N):
    N += 1

    while True:
        if str(N) == str(N)[::-1]:
            return N
        N += 1
n=int(input())
print(pal(n))

for i in range(int(input())):
    a = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    k = []
    b = 0
    for i in arr:
        if i >= sum(k):
            b += 1
            k.append(i)
    print(b)

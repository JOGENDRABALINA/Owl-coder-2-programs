for i in range(int(input())):
    a,b = map(int,input().split())
    k = []
    i = 5
    while i <= a:
        k.append(i)
        i += 5
    if a % 5 != 0:
        k.append(a)
    for i in range(len(k)):
        if k[i] >= b:
            print(len(k)-(i+1))
            break

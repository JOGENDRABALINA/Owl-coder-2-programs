for i in range(int(input())):
    a=int(input())
    for k in range(1,a):
        if (k*(k+1)==(a-1)):
            print(k)
            break

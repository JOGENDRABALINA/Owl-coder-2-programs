for i in range(int(input())):
    a = int(input())
    l = [2,3,5,7,11,13,17,19,23,29,31,37]
    i = 1
    p =l[0]
    while p <= a:
        p = p*l[i]
        i += 1
    print(i-1)

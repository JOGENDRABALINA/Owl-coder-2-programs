n=int(input())
for i in range(n):
    a=input()
    k=a.count("B")
    if  k== len(a)-k:
        print("YES")
    else:
        print("NO")

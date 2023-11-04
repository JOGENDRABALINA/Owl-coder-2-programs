n=int(input())
for i in range(n):
    a=input()
    k=a.count('4')
    k2=a.count('7')
    if k+k2 == 4 or k+k2==7:
        print("YES")
    else:
        print("NO")

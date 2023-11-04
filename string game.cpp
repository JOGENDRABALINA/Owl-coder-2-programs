n=int(input())
for i in range(n):
    a=int(input())
    s=input()
    for j in s:
        if s.count(j)%2!=0:
            print("NO")
            break
    else:
        print("YES")

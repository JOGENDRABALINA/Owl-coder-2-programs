n=int(input())
for i in range(n):
    a,b,c= map(int,input().split())
    if a+b+c == 0 or a+b-c ==0 or a+c-b ==0 or b+c-a ==0 :
        print("YES")
    else:
        print("NO")

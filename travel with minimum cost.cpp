n,m,a,b=map(int,input().split())
if(a<=b/m):
    print(n*a)
else:
    v=(n//m)*b+(n%m)*a
    d=((n//m)+1)*b
    print(min(v,d))

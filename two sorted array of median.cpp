n,m=map(int,input().split())
l=list(map(int,input().split()))
l1=list(map(int,input().split()))
l+=l1
l.sort()
if(len(l)%2==0):
    z=len(l)//2
    a=l[z]
    c=l[z-1]
    b=(a+c)/2
    if(b==(a+c)//2):
        print(int(b))
    else:
        print(b)
else:
    z=len(l)//2
    c=l[z]
    print(c)

n=int(input())
l=list(map(int,input().split()))
c=0
if(l==sorted(l)):
    print("yes")
    print(1,1)
else:
        
    for i in range(n):
        for j in range(i+1,n):
            a1=l[:i:]
            a=l[i:j+1]
            a2=l[j+1:]
            if(c==0 and a1+a[::-1]+a2==sorted(l)):
                print("yes")
                print(i+1,j+1)
                c=1
    if(c==0):
        print("no")


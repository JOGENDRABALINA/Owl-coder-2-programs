def prime(n):
    if(n==1):
        return 0
    for i in range(2,int(n**0.5)+1):
        if(n%i==0):
            return 0
    return 1
n,m=map(int,input().split())
for i in range(n,m-2):
    if(prime(i)==1 and prime(i+2)==1):
        print(i,i+2)

def prime(n):
    if(n==1):
        return 0
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return 0
    return 1
n=int(input())
s=int(n**0.5)
c=0
for i in range(2,s+1):
    if(prime(i)==1):
        c+=1
print(c)

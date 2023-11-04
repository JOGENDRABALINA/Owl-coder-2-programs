n=int(input())
l=list(map(int,input().split()))
c=0
while l!=sorted(l):
    s=[l[0]]
    for i in range(1,len(l)):
        if(l[i-1]<=l[i]):
            s.append(l[i])
    l=s
    c+=1
print(c)

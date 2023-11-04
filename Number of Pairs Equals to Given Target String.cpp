n=int(input())
l=list(map(str,input().split()))
s=input()
c=0
for i in range(n):
    for j in range(n):
        if(l[i]+l[j]==s):
            c+=1
print(c)

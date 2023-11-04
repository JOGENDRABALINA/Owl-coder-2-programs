n=int(input())
s=input().split()
k=int(input())
m=input()
a=m[:k:]
c=0
for i in s:
    b=i[:k:]
    if(a==b):
        c+=1
print(c)

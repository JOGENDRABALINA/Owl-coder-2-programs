a=map(int,input().split())
l=input().split()
c=[]
for i in l:
    if int(i)<0:
        i=int(i)*-1
    c.append(len(i))
print(c.count(min(c)))

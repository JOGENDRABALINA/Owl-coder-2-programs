n=int(input())
l=[]
t1=0
t2=1
while len(l)<n:
    t3=t1+t2
    t1=t2
    t2=t3
    l.append(t3)
print(l[n-1])

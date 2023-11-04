n=input()
d={}
for i in n:
    if i in d.keys():
        d[i]+=1
    else:
        d[i]=1
for i in d:
    if d[i]>1:
        print(i,end='-')
        print(d[i],end=' ')

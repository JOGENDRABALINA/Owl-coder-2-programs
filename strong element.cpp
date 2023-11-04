n=int(input())
l=list(map(int,input().split()))
if(n==len(list(set(l)))):
    print("No")
else:
    d={}
    for i in l:
        if i in d.keys():
            d[i]+=1
        else:
            d[i]=1
    l1=list(d.values())
    if(l1.count(max(l1))==1):
        l2=list(d.keys())
        print("Yes")
        print(l2[l1.index(max(l1))])
    else:
        print("No")

n = int(input())
x = list(map(int,input().split()))
x.sort()
i = 0
c = 0
d =[]
while i<=n-2:
    j = i+1
    k = n-1
    while j<k:
        if x[i]+x[j]+x[k]==0:
            p = [x[i],x[j],x[k]] 
            if p not in d:
                d.append(p)
                c+=1
            j+=1
            k-=1
        elif x[i]+x[j]+x[k]>0:k-=1
        else:j+=1
    i+=1
print(c)

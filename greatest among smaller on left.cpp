n=int(input())
l=list(map(int,input().split()))
m=[-1,]
for i in range(1,n):
    m1=l[:i]
    m1.sort()
    for j in range(len(m1)-1,-1,-1):
        if m1[j]<l[i]:
            m.append(m1[j])
            break
    else:
        m.append(-1)
print(*m)

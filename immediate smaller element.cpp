n=int(input())
l=list(map(int,input().split()))
m=[]
s=[]
l=l[::-1]
for i in l:
    if s and s[-1] <i:
        m.append(s[-1])
        s.append(i)
    else:
        m.append(-1)
        s.append(i)
print(*m[::-1])

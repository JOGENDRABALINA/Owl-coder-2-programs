a = int(input())
k =[]
f = []
for i in range(a):
    b,c = map(int,input().split())
    k.append(c)
    f.append(b)
j = []
l = []
for i in f:
    if i not in k and i not in j:
        j.append(i)
d = {}
for i in k:
    if i not in d:
        d[i] = 1
    else:
        d[i] += 1
for i in d:
    if d[i] == 1:
        l.append(i)
j.sort()
l.sort()
print(*j)
print(*l)

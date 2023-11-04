a,b,c,d = map(int,input().split())
f = 0
for i in range(a,b+1):
    i = str(i)
    if i.count(str(c)) == d:
        f += 1
print(f)

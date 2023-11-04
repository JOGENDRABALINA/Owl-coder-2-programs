n,m = map(int,input().split())
k =[]
for i in range(n):
    h = list(map(int,input().split()))
    if i == 0:
        for f in range(len(h)):
            if h[f] == 1:
                h[f] = 5
    k.append(h)
d = k[0]
for i in range(1,5):
    for j in range(len(d)):
        if k[i][j] == 1:
            d[j] += 1
for i in d:
    print(i,end ="")

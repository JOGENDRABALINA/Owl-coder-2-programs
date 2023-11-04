n = int(input())
k = n
f =[]
c = []
p = str(n)
for i in p:
    if int(i) >= 5:
        c.append(int(i)-5)
    else:
        c.append(int(i))
for j in range(5):
    l = []
    if j == 0 :
        for i in range(len(str(n))):
            if n % 10 >= 5:l.append(1)
            else:l.append(0)        
            n = n//10
        n = k 
        l = l[::-1]
    else:
        for i in range(len(c)):
            if c[i] > 0:
                l.append(1)
                c[i] -= 1
            else:
                l.append(0)
    print(*l)

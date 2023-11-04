n = int(input())
i, j = 0,31
while i < j:
    if(n & (1<<i) > 0 and n&(1 << j) == 0) or (n & (1<<i) == 0 and n&(1 << j) > 0):
        if(n&(1<<i) == 0):
            n = n|(1<<i)
        else:
            n = n&~(1<<i)
        if(n&(1<<j) == 0):
            n = n|(1<<j)
        else:
            n = n&~(1<<i)
    i+= 1
    j-=1
print(n)

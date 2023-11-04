n=int(input())
l=list(map(int,input().split()))
if n%2 != 0 :
    c=n//2
    l.pop(c)
else:
    c=n//2
    l.pop(c-1)
print(*l)

n = int(input())
l = list(map(int,input().split()))
if len(l) == 1 and l[0] == 1:
    print('YES')
elif l.count(1) >= 2 and max(l) <= 6:
    print('YES')
else:
    print('NO')

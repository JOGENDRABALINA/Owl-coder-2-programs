n = int(input())
k = int(input())
bikes = list(map(int,input().split()))
time = list(map(int,input().split()))
mintym = []
if k in bikes:
    print(0)
else:
    for i in range(len(bikes)): 
        x = abs(k - bikes[i]) * time[i]
        mintym.append(x)
    print(min(mintym))

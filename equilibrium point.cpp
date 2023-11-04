n=int(input())
l=list(map(int,input().split()))
for i in range(n):
    l1=l[:i:]
    l2=l[i+1::]
    if(sum(l1)==sum(l2)):
        print(i+1)
        break

def sum(a1,a2):
    k=sorted(a1+a2)
    l=k[len(k)//2]+k[len(k)//2-1]
    return l
n=int(input())
a1=list(map(int,input().split()))
a2=list(map(int,input().split()))
print(sum(a1,a2))

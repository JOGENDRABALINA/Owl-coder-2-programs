t = int(input())
for _ in range(t):
	n,k,l = map(int,input().split())
	n = n-(l+k)
	print((k*(n+l))+(n*l)+((n*(n-1))//2))

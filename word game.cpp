s = input()
p = int(input())
n = len(s)
if n%p == 0:
    k = n//p
    for i in range(0,n,k):
        print(s[i:i+k],end=" ")
else:
    print("Invalid String")

n=int(input())
temp=n
sum=0
for i in range(1,n):
    if n%i==0:
        sum=sum+i
if sum>temp:
    print("True")
else:
    print("False")

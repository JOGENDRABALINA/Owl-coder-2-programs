n = int(input())
a = [9,8,7,6,5,4,3,2,1]
c = 0
s=''
for i in a:
    if c+i <= n:
        c+=i
        s+=str(i)
        
print(s[::-1])

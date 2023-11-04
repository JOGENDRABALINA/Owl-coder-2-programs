n=input()
s=len(n)
c=0
for i in range(0,s-2):
    n1=n[i:i+3:]
    l=list(set(n1))
    if(len(l)==3):
        c+=1
print(c)

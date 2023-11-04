s=input().lower()
arr=list(map(int,input().split()))
f=0
p=set(s)
for i in range(len(s)):
    m=ord(s[i])-97
    for j in range(i+1,len(s)):
        if(s[i]==s[j]):
            k=abs(j-i-1)
            if(k==arr[m]):
                f+=1

if(f==len(p)):
    print("true")
else:
    print("false")

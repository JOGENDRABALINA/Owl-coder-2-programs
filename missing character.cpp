n=input().lower()
s="abcdefghijklmnopqrstuvwxyz"
m=""
for i in s:
    if i not in n:
        m+=i
print(m)

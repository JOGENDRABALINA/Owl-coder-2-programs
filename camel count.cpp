n = input()
c = 1
for i in range(1,len(n)):
    if ord(n[i])>=65 and ord(n[i])<=90:
        c+=1
print(c)

n=int(input())
for i in range(1,n+1):
    c=65
    for j in range(1,i+1):
        print(chr(c),end ="")
        c+=1
    print()

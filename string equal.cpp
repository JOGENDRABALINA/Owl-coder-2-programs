n=input()
m=input()
if(len(n)!=len(m)):
    print("0")
else:
    for i in n:
        if i not in m:
            print("0")
            break
    else:
        print("1")

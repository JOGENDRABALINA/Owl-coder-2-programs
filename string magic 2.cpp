n=input()
s=""
c=0
for i in range(len(n)):
    if(n[i].isdigit()):
        s+=n[i]
    elif(n[i]=="-" and n[i+1].isdigit() ):
        if(s!=""):
            c+=int(s)
        s+="-"
    else:
        if(s!=""):
            c+=int(s)
        s=""
if(s!=""):
    c+=int(s)
print(c)

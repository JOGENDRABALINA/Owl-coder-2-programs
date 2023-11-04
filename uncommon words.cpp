n=input().split()
n1=input().split()
for i in n:
    if i not in n1:
        print(i,end=" ")
for i in n1:
    if i not in n:
        print(i,end="")

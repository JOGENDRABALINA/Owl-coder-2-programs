n=input()
v=0
c=0
d=0
w=0
k=set('AEIOUaeiou')
for i in n:
    if i.isalpha():
        if i in k:
            v+=1
        else:
            c+=1
    elif i.isdigit():
        d+=1
    elif i.isspace():
        w+=1
print("Vowels:",v)
print("Consonants:",c)
print("Digits:",d)
print("White spaces:",w)


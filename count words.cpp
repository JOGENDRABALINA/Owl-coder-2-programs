n=input().lower().split()
vowels = ['a', 'e', 'i', 'o', 'u']
consonants = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z']
c=0
for i in n:
    if i[0] in vowels and i[-1] in consonants:
        c+=1
print(c)

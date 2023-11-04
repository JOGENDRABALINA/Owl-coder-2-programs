s = input()
k = ""
f = ""
for i in range(len(s)):
    if s[i].isalpha():
        k += s[i]
k= k[::-1]
j = 0
for i in range(len(s)):
    if s[i].isalpha() == False:
        f += s[i]
    else:
        f += k[j]
        j += 1
print(f)

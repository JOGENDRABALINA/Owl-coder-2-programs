s = input()
s1 = list(set(s))
res = ""
for i in s1:
    res += i
    res += str(s.count(i))
if len(s) >= len(res):
    print("Yes")
else:
    print("No")

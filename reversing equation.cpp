def revequ(s):
    c = []
    cn = ""
    for char in s:
        if char.isdigit() or char == '.':
            cn += char
        else:
            if cn:
                c.append(cn)
                cn = ""
            c.append(char)
    if cn:
        c.append(cn)
    c.reverse()
    r = ''.join(c)
    return r
s = input()
k = revequ(s)
print(k)

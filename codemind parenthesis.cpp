def remove(S):
    l = r = 0
    res = cur = ''
    for s in S:
        cur += s
        l += s == '('
        r += s == ')'
        if l == r:
            res += cur[1:-1]
            cur = ''
    return res 
n=input()
print(remove(n))

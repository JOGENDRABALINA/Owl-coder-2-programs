def chocolates(A, B, C):
    total = A * 7 + B * 5
    max = total // C
    return max
a=int(input())
b=int(input())
c=int(input())
print(chocolates(a,b,c))

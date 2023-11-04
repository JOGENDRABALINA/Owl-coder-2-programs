n = int(input())
if n < 199 : x = 1.20
elif n >= 200 and n < 400 : x = 1.50
elif n >= 400 and n < 600 : x = 1.80
elif n >= 600 : x = 2.00
b = n*x
s = 0
if b >= 400 : 
    s = (15/100)*b
    print("{:.2f}".format(b+s))
else:
    print("{:.2f}".format(b+100))


a,b,c=map(int,input().split())
if a==b and b==c:
    print("Equilateral triangle")
elif a==b or b==c:
    print("Isosceles triangle")
else:
    print("Scalene triangle")

n=int(input())
if n<=10000:
    da =n*80/100
    hr=n*20/100
elif n<=20000:
    da =n*90/100
    hr=n*25/100
else:
    da =n*95/100
    hr=n*30/100
g=n+da+hr
print("{:.2f}".format(g))

n=int(input())
l=list(map(str,input().split()))
for i in l:
    if(int(i)<10):
        continue
    elif i!=i[::-1]:
        print(0)
        break
else:
    print(1)

n = int(input())
lst = [0]*(n+5)
lst[0], lst[1], lst[2], lst[3] = 3, -2, 5, 2
i = 4
x = 2
for i in range(4,n+5, 2):
    lst[i] = lst[i-2]+ 3* (lst[i-2]-lst[i-4])
for i in range(5,n+5, 2):
    lst[i] = lst[i-2] + (lst[i-2] - lst[i-4])*5
print(*lst[:n+1:])

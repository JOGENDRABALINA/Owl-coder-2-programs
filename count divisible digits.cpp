def digits(N):
    count = 0
    for digit in str(N):
        if int(digit) != 0 and N % int(digit) == 0:
            count += 1
    return count
n=int(input())
print(digits(n))

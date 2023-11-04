def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_factors(n):
    factors = []
    for i in range(2, n + 1):
        while n % i == 0 and is_prime(i):
            factors.append(i)
            n //= i
    return factors

def dsum(num):
    return sum(int(digit) for digit in str(num))

def supernumber(n):
    if n <= 1:
        return False
    factors = prime_factors(n)
    primesum = sum(dsum(factor) for factor in factors)
 
    nsum = dsum(n)

    return primesum == nsum

n = int(input())

if supernumber(n):
    print(1)
else:
    print(0)

k = 1000

def sumMultiples(n):
    p = (k -1) // n
    return n * (p * (p + 1)) // 2


a = 3
b = 5

print(sumMultiples(a) + sumMultiples(b) - sumMultiples(a * b))
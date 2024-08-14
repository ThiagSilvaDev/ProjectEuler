
from math import sqrt


def factorization(num, fac):
    while num % fac == 0:
        num /= fac

    return num


number = 600851475143
factor = 0
max_factor = 0
result = 0

number = factorization(number, 2)

# calculate the max factor wich cannot be longer than the square root of number  
max_factor = sqrt(number)

factor = 3
while factor <= max_factor:
    number = factorization(number, factor)
    max_factor = sqrt(number)
    factor += 2

    
result = int(number)
print(result)
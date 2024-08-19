k = 1000

def sumMultiples(num):
    multiples = (k -1) // num
    return num * (multiples * (multiples + 1)) // 2

a = 3
b = 5
total_sum = sumMultiples(a) + sumMultiples(b) - sumMultiples(a * b)

print(total_sum)
current_term = 1
previous_term = 1
sum_fibo = 0

# every even term of a fibonnaci sequence is the sum of the two previous odd numbers
even_term = current_term + previous_term

k = 4000000

while even_term < k:
    sum_fibo += even_term
    
    current_term = previous_term + even_term
    previous_term = even_term + current_term
    
    even_term = current_term + previous_term

print(sum_fibo)
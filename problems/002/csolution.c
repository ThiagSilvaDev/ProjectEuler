#include <stdio.h>


const int k = 4000000;

int main () {
    int current_term = 1;
    int previous_term = 1;
    int sum_fibo = 0;
    
    // every even term of a fibonnaci sequence is the sum of the two previous odd numbers
    int even_term = current_term + previous_term;

    while (even_term < k ) {
        sum_fibo += even_term;

        current_term = previous_term + even_term;
        previous_term = even_term + current_term;

        even_term = current_term + previous_term;
    }

    printf("%d\n", sum_fibo);

    return 0;
}
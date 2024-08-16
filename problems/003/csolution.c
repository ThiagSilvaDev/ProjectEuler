#include <stdio.h>
#include <stdint.h>
#include <math.h>


uint64_t factorization(uint64_t num, int fac) {
    while (num % fac == 0) {
        num /= fac;
    }
    return num;
}

 
int main() {
    uint64_t number = 600851475143;
    int factor;
    int max_factor;
    int result;

    // eliminate the only even prime
    number = factorization(number, 2);

    // calculate the max factor wich cannot be longer than the square root of number  
    max_factor = sqrt(number);

    factor = 3;
    while (factor <= max_factor) {
        number = factorization(number, factor);
        max_factor = sqrt(number);
        factor += 2;
    }   
    
    result = number;
    printf("%d\n", result);
    
    return 0;
}
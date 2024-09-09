#include <stdio.h>

const int limit = 1000;

int sumMultiples(int num);

int main() {
    int a = 3;
    int b = 5;

    // sum the multiples of a and b, excluding the a * b redundancy
    int total_sum = sumMultiples(a) + sumMultiples(b) - sumMultiples(a * b);

    printf("%d\n", total_sum);
    return 0;
}

int sumMultiples(int num) {
    // determine how much multiples of n is less than limit
    int n_multiples = (limit - 1) / num;
    return num * (n_multiples * (n_multiples + 1)) / 2;
}
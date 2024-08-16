#include <stdio.h>


const int k = 1000;

int sumMultiples(int n);

int main () {
    int a = 3;
    int b = 5;

    int sum = sumMultiples(a) + sumMultiples(b) - sumMultiples(a * b);

    printf("%d\n", sum);
    return 0;
}

int sumMultiples(int num) {
    int multiples = (k - 1) / num;
    return num * (multiples * (multiples + 1)) / 2;
}
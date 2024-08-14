#include <stdio.h>


const int k = 1000;

int sumMultiples(int n);

int main () {
    int a = 3;
    int b = 5;

    int sum = sumMultiples(a) + sumMultiples(b) - sumMultiples(a * b);

    printf("%d", sum);
}


int sumMultiples(int n) {
    int p = (k - 1) / n;
    return n * (p * (p + 1)) / 2;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void reverseString(char *str) {
    int i = 0;
    int k = strlen(str) - 1;
    char temp;

    while (i < k) {
        temp = str[i];
        str[i] = str[k];
        str[k] = temp;

        i++;
        k--;
    }
}

bool isPalindrome(int num){
    char str[7];
    sprintf(str, "%d", num);
    char reversed_str[7];
    strcpy(reversed_str, str);
    reverseString(reversed_str);
    return strcmp(str, reversed_str) == 0;
}

int main() {
    int largest_palindrome = 0;
    int possible_palindrome = 0;
    int a = 999;
    int b = 0;
    int db = 0;

    while (a >= 100) {
        if (a % 11 == 0) {
            b = 999;
            db = 1;
        } else {
            b = 990;
            db = 11;
        }

        while (b >= a) {
            possible_palindrome = a * b;
            if (possible_palindrome <= largest_palindrome) {
                break;
            }

            if (isPalindrome(possible_palindrome)) {
                largest_palindrome = possible_palindrome;
            }

            b = b-db;
        }
        a = a-1;
    }

    printf("%d\n", largest_palindrome);
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// void reverseString(char *str) {
//     int start = 0;
//     int end = strlen(str) - 1;
//     char temp;

//     while (start < end) {
//         temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }

// bool isPalindrome(int num) {
//     char str[8];
//     sprintf(str, "%d", num);
//     char reversed_str[8];
//     strcpy(reversed_str, str);
//     reverseString(reversed_str);
//     return strcmp(str, reversed_str) == 0;
// }

// int main() {
//     int largest_palindrome = 0;
//     int possible_palindrome;
//     int a, b;

//     for (a = 999; a >= 100; a--) {
//         for (b = a; b >= 100; b--) {
//             possible_palindrome = a * b;
//             if (possible_palindrome <= largest_palindrome) {
//                 break;
//             }
//             if (isPalindrome(possible_palindrome)) {
//                 largest_palindrome = possible_palindrome;
//             }
//         }
//     }

//     printf("O maior palíndromo é: %d\n", largest_palindrome);

//     return 0;
// }

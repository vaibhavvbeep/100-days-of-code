//Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int n, i;

    printf("enter a number= ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
    }

    if (n > 1 && i == n) {
        printf("the number is prime\n");
    } else {
        printf("the number is not prime\n");
    }

    return 0;
}

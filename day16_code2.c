//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if (original == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
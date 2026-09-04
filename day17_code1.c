//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, temp, digits = 0, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp = temp / 10;
    }

    if (original == sum) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
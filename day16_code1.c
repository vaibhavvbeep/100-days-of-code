//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    int binary = 0;
    int place = 1; 

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        int rem = num % 2;        
        binary += rem * place;    
        place *= 10;              
        num /= 2;                 
    }

    printf("Binary representation: %d\n", binary);
    return 0;
}
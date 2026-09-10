//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, digit, i;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    int max = freq[0];
    int ans = 0;

    for (i = 1; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }

    printf("%d\n", ans);

    return 0;
}
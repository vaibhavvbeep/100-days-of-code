//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", posCount, negCount, zeroCount);

    return 0;
}
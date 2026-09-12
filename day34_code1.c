//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, val, i;

    scanf("%d", &n);

    int a[n + 1];
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &val);

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = val;

    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
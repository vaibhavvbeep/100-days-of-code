//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, key, i, pos;

    scanf("%d", &n);

    int a[n + 1];
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    pos = n;
    for (i = 0; i < n; i++) {
        if (a[i] > key) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = key;

    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int a[6] = {1, 10, 4, 19, 13, 20};
    int b[6] = {0, 1, 2, 5, 7, 9};
    int sum[6], i;

    // Add corresponding elements
    for (i = 0; i < 6; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of Two Arrays: ");

    // Print the sum array
    for (i = 0; i < 6; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

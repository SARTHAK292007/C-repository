#include <stdio.h>

int main() {
    int a[10], even[10], odd[10];
    int e = 0, o = 0, i;

    // Input array elements
    for (i = 0; i < 10; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &a[i]);
    }

    // Separate even and odd numbers
    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }

    // Print even numbers
    printf("\nEven Numbers: ");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Print odd numbers
    printf("\nOdd Numbers: ");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}


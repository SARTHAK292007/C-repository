#include <stdio.h>

// Function to find factorial using recursion
int factorial(int n) {
    // Base condition
    if(n == 0 || n == 1) {
        return 1;
    }
    // Recursive call
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num, fact;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Factorial of negative number doesn't exist");
    } else {
        fact = factorial(num);
        printf("Factorial of %d = %d", num, fact);
    }
    
    return 0;
}
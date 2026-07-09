#include <stdio.h>

int factorial(int n);

int main()
{
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial is %d\n", fact);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

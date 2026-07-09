#include <stdio.h>

int add(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
    return sum;
}

int Sub(int n1, int n2)
{
    int sub;
    sub = n1 - n2;
    return sub;
}

int mul(int n1, int n2)
{
    int product;
    product = n1 * n2;
    return product;
}

int divide(int n1, int n2)
{
    int quotient;

    if (n2 != 0)
    {
        quotient = n1 / n2;
    }
    else
    {
        printf("Division by zero error!\n");
        return 0;
    }

    return quotient;
}

int main()
{
    int num1, num2, op, ans = 0;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");
    printf("Enter Number: ");
    scanf("%d", &op);

    if (op == 1)
    {
        ans = add(num1, num2);
    }
    else if (op == 2)
    {
        ans = Sub(num1, num2);
    }
    else if (op == 3)
    {
        ans = mul(num1, num2);
    }
    else if (op == 4)
    {
        ans = divide(num1, num2);
    }
    else
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("ANSWER is: %d\n", ans);

    return 0;
}

#include<stdio.h>
int main()
{
    int amount=55521, _2000,_1000, _500, _100, _50, _10,_5,_2,_1;
    printf("Enter your amount:");
    scanf("%d", &amount);
    _2000 = amount / 2000;
    amount = amount % 2000;
    _1000 = amount / 1000;
    amount = amount % 1000;
    _500 = amount / 500;
    amount = amount % 500;
    _100 = amount / 100;
    amount = amount % 100;
    _50 = amount / 50;
    amount = amount % 50;
    _10 = amount / 10;
    amount = amount % 10;
    _5 = amount / 5;
    amount = amount % 5;
    _2 = amount / 2;
    amount = amount % 2;
    _1 = amount / 1;
    amount = amount % 1;
    printf("2000 notes = %d\n", _2000);
    printf("1000 notes = %d\n", _1000);
    printf("500 notes = %d\n", _500);
    printf("100 notes = %d\n", _100);
    printf("50 notes = %d\n", _50);
    printf("10 notes = %d\n", _10);
    printf("5 notes = %d\n", _5);
    printf("2 notes = %d\n", _2);
    printf("1 notes = %d\n", _1);
    return 0;
}


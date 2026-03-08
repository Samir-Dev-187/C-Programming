// S = 1! + 2! + 3! + .... + n!

#include<stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; ++i)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n;
    int sum = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        sum += factorial(i);
    }

    printf("Sum: %d", sum);

    return 0;
}
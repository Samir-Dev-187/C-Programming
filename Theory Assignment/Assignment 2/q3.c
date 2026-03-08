// 1 + 1/2! + 1/3! + .... + 1/n!

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
    int n, i, j;
    float sum = 0.00;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += (1.00/factorial(i));
    }

    printf("Sum: %.2f", sum);

    return 0;
}
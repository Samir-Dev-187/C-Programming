// Find factorial of a number using recursion

#include<stdio.h>
int factorial(int x)
{
    if (x == 1 || x == 0) return 1;
    return x*factorial(x-1);
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("The Factorial Of %d: %d", n, factorial(n));

    return 0;
}
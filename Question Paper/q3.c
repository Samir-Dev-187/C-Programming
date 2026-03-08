// Write a C program to find factorial of a number using recursive function.

#include<stdio.h>

int factorial(int x)
{
    if (x == 0 || x == 1) return 1;
    else return x*factorial(x-1);
}

int main()
{
    int n;
    printf("Enter Integer Number: ");
    scanf("%d", &n);

    printf("Factorial Of %d is: %d", n, factorial(n));

    return 0;
}
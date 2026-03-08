// Write a C program to calculate GCD of two integer numbers using recursive functions.

#include<stdio.h>

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    int num1, num2;

    printf("Enter Number 1: \n");
    scanf("%d", &num1);
    printf("Enter Number 2: \n");
    scanf("%d", &num2);

    int result = gcd(num1, num2);

    printf("GCD of %d and %d is: %d", num1, num2, result);
}
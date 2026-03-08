// Write a C program to calculate factorial of an integer number using recursive functions. (4 Marks)

#include<stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }

    printf("Factorial of %d: %d", n, fact);
    
    return 0;
}
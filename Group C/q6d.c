// Write a C program to find out whether a given number is odd or even using ternary operator. (3 Marks)

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    char *checkNum = ((n % 2) == 0) ? "Even" : "Odd";
    printf("%d is %s", n, checkNum);

    return 0;
}
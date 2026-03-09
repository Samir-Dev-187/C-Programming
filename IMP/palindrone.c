// Write a C program to check wheather a number is Palindrone or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int copyN = n;
    int digit = 0;
    while (n > 0)
    {
        int rem = n % 10;
        digit = digit*10 + rem;
        n = n / 10;
    }
    
    if (copyN == digit) printf("%d is Palindrone Number.", copyN);
    else printf("%d is Not a Palindrone Number.", copyN);

    return 0;
}
// Write a C program to check wheather a number is Armstrong or not.

#include<stdio.h>
int main()
{
    int n = 153;
    int copyN = n;
    int digit = 0;
    int sum = 0;
    
    while (n > 0)
    {
        int rem = n % 10;
        sum += (rem*rem*rem);
        n /= 10;
    }

    if (copyN == sum) printf("%d is Armstrong Number.", copyN);
    else printf("%d is Not a Armstrong Number.", copyN);
    
    return 0;
}
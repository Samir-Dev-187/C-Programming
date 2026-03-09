// Write a C program to print fibonachhi series
#include<stdio.h>

int fibonachhi(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return fibonachhi(n-1) + fibonachhi(n-2);
}

int main()
{
    int n = 10;

    printf("%d", fibonachhi(n));
    return 0;
}
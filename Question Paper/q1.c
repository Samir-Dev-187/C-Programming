// Write a C program to find maximum of three numbers using user defined function.

#include<stdio.h>

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main()
{
    int x, y, z;
    printf("Enter First Number(Integer): ");
    scanf("%d", &x);
    printf("Enter Second Number(Integer): ");
    scanf("%d", &y);
    printf("Enter Third Number(Integer): ");
    scanf("%d", &z);

    printf("The Maximum of Three Number is: %d", maxOfThree(x,y,z));
    
    return 0;
}
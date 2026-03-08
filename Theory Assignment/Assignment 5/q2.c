// Count number of digits in a number using while loop

#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (n == 0) printf("1");
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }

    printf("Result: %d", count);
    
    return 0;
}
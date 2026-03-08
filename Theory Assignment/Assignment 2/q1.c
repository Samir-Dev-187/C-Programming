// s = 1 + 2 + 3 + .... + n;

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    
    printf("Enter Number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    printf("Sum: %d", sum);

    return 0;
}
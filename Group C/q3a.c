//What will be the output of the following code snippet?

#include<stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

/* Output:
    1   2   3
    2   4   6
    3   6   9
*/

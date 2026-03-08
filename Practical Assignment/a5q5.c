/*
   *
  * *
 * * *
* * * *
*/

#include<stdio.h>
int main()
{
    int n = 10;

    for (int i = 0; i < n; ++i)
    {
        for (int sp = 0; sp < (n-i-1); sp++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
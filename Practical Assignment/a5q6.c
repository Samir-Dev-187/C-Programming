/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
*/

#include<stdio.h>
int main()
{
    int n = 10;

    // upper part
    for (int i = 0; i < n; ++i)
    {
        for (int sp = 0; sp < (n-i-1); ++sp)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; ++j)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }

    //lower part
    for (int i = 0; i < n; ++i)
    {
        for (int sp = 0; sp <= i; sp++)
        {
            printf(" ");
        }

        for (int j = 0; j < (n-i-1); ++j)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }

    return 0;
}
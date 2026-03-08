/*

      *
    * *  
  * * *
* * * * 

*/

#include<stdio.h>
int main()
{
    int n,i,j,sp;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        for(sp = 0; sp < (n-1-i); ++sp)
        {
            printf("  ");
        }

        for (j = 0; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
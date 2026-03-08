/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Limit: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i)
    {
        for (int j = 1; j < n+1-i; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
// Write a C program to transpose a 3 × 3 matrix. ***

#include<stdio.h>
int main()
{
    int mat[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("Enter Values at [%d %d]: " ,i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Before Transpose: \n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d " , mat[i][j]);
        }
        printf("\n");
    }

    int transMat[3][3]; 
    for (int j = 0; j < 3; ++j)
    {
        for (int i = 0; i < 3; ++i)
        {
            transMat[j][i] = mat[i][j];
        }
    }

    printf("After Transpose: \n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d " , transMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
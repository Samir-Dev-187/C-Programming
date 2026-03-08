//Write a C program to find the transpose of a matrix. (6 Marks)

#include<stdio.h>

int printMat(int copyMat[3][3])
{
    int i,j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%d ", copyMat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[3][3];
    int i,j;
    
    //input numbers
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("Enter Number at Pos [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nBefore Transpose: \n");
    printMat(mat);

    //transpose
    int transMat[3][3];
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            transMat[i][j] = mat[j][i];
        }
    }

    printf("\nAfter Transpose: \n");
    printMat(transMat);
    
    return 0;
}
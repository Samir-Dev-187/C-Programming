// Write a C program to transpose a 4*4 matrix and display the output

#include<stdio.h>
void printMatrix(int mat[4][4])
{
    for(int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[4][4];

    for(int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("Enter Number At Pos [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Before Transpose: \n");
    printMatrix(mat);

    //transpose
    int transMat[4][4];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            transMat[i][j] = mat[j][i];
        }
    }

    printf("After Transpose: \n");
    printMatrix(transMat);

    return 0;
}
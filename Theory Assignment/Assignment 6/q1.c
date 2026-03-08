// Write a program to read three integers from a file
#include<stdio.h>
int main()
{
    FILE *fp;
    int num;

    fp = fopen("text.txt", "r");

    if (fp == NULL) 
    {
        printf("Error: Could not open file 'text.txt'.\n");
        return 1;
    }

    printf("The values of num is: ");
   for (int i = 0; i < 3; ++i)
   {
        if (fscanf(fp, "%d", &num) == 1) printf("%d, ", num);
        else
        {
            printf("\n(Reached end of file or encountered non-integer early)");
            break;
        }
   }

    fclose(fp);
    return 0;
}
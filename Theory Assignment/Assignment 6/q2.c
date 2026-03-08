// Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.

#include<stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("multiplicatinTable.txt", "w");
    if (fp == NULL) printf("No file exist!");

    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; ++i)
    {
        fprintf(fp, "%d ", n);
        fputc('X', fp);
        fputc(' ', fp);
        fprintf(fp, "%d ", i);
        fputc('=', fp);
        fputc(' ', fp);
        fprintf(fp, "%d", n*i);
        fprintf(fp, "\n");
    }
    
    fclose(fp);
    return 0;
}

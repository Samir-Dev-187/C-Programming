// Write a program to modify a file containing an integer to double its value.

#include<stdio.h>
int main()
{
    FILE *fp;
    int n;
    fp = fopen("doubleValue.txt", "r");
    if (fp == NULL) printf("No file exist! ");
    fscanf(fp, "%d", &n);
    fclose(fp);

    fp = fopen("doubleValue.txt", "w");
    fprintf(fp, "%d", n*2);
    fclose(fp);
    
    return 0;
}
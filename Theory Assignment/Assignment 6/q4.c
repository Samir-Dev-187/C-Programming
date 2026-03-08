/*
Take name and salary of two employees as input from the user and write them to
a text file in the following format:
    i. Name1, 3300
    ii. Name2, 7700
*/

#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("employee.txt", "a");

    // if (fp == NULL) printf("No file exist!");

    char name[50];
    int sal;
    const char *numerals[] = {"i", "ii"};

    for (int i = 0; i < 2; ++i)
    {
        printf("----Enter Employee %d Details----\n", i+1);
        fprintf(fp, "%s ", numerals[i]);
        printf("Employee Name: ");
        scanf(" %[^\n]", &name);
        fprintf(fp, "%s\t", name);
        printf("Employee Salary: ");
        scanf("%d", &sal);
        fprintf(fp, "%d\n", sal);
    }

    fclose(fp);
    return 0;
}
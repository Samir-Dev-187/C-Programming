// Write a C program to show the array of stuctures concept using an example.

#include<stdio.h>

struct student
{
    int rollNo;
    char name[50];
    char dept[50];
    char dob[50];
};

int main()
{
    struct student s[3];   // array of structures

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Department: ");
        scanf("%s", s[i].dept);

        printf("Date of Birth: ");
        scanf("%s", s[i].dob);
    }

    printf("\nStudent Details:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].dept);
        printf("DOB: %s\n", s[i].dob);
    }

    return 0;
}
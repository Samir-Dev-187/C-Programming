// Create a structure to specify data on students given below: Roll Number, Name, Department Name, DOB.
// Assume that there are not more than 64 students in the section.
// Write a C program to print the details of all students of the section.

#include<stdio.h>

struct student
{
    int rollNo;
    char fName[50];
    char lName[50];
    char deptName[50];
    char dob[15];
};


int main()
{
    struct student s[64];
    int n;

    printf("Enter No Of Students (Max 64): ");
    scanf("%d", &n);

    if(n > 64)
    {
        printf("Maximum limit is 64 students.\n");
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("----Enter The Details Of Student %d----\n", i+1);

        printf("Enter First Name: ");
        scanf("%s", s[i].fName);
        printf("Enter Last Name: ");
        scanf("%s", s[i].lName);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter Department: ");
        scanf("%s", s[i].deptName);
        printf("Enter Date Of Birth (dd/mm/yyyy): ");
        scanf("%s", s[i].dob);
    }

    printf("----Student Details----\n");
    printf("Name\t\tRoll No\tDepartment Name\tDate Of Birth\n");

    for (int i = 0; i < n; ++i)
    {
        printf("%s %s\t%d\t\t%s\t\t%s\n", s[i].fName, s[i].lName, s[i].rollNo, s[i].deptName, s[i].dob);
    }

    return 0;
}
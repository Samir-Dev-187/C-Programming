    // Create a structure to specify data on employee given below:
    // Employee ID, Name, Department Name, DOB and Salary.
    // Assume that there are not more than 187 employees in the office.
    // Write a C program to print the details of all employees. (5 Marks)

    #include<stdio.h>

    struct Employee
    {
        int id;
        char name[50];
        char deptName[50];
        char dob[50];
        float salary;
    };

    int main()
    {
        struct Employee e[187];
        int n;

        printf("Enter Number Of Employee(not more than 187): ");
        scanf("%d", &n);

        if (n > 187)
        {
            printf("Number More than 187");
            return 0;
        }

        //input part
        for (int i = 0; i < n; ++i)
        {
            printf("\n----Enter details for Employee %d-----\n", i+1);
            printf("Enter Employee Id: ");
            scanf("%d", &e[i].id);
            printf("Enter Employee Name: ");
            scanf(" %[^\n]", e[i].name);
            printf("Enter Employee Department Name: ");
            scanf("%s", e[i].deptName);
            printf("Enter Employee Date Of Birth: ");
            scanf("%s", e[i].dob);
            printf("Enter Employee Salary: ");
            scanf("%f", &e[i].salary);
        }
        printf("\n");

        //output part
        printf("Id\tName\tDept Name\tDate Of Birth\tSalary\n");
        for (int i = 0; i < n; ++i)
        {
            printf("%d\t%s\t%s\t%s\t%.2f\n", e[i].id, e[i].name, e[i].deptName, e[i].dob, e[i].salary);
        }
        
        return 0;
    }

// Write a C program to calculate the average of all input elements of a 1D array.

#include<stdio.h>

int main()
{
    int n[5];
    int total = 0;
    float avg;

    printf("Enter 5 elements:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        total += n[i];
    }

    avg = total / 5.0;

    printf("Average: %.2f", avg);

    return 0;
}

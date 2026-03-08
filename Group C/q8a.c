// Write a C program to calculate the summation of all elements of a 1D array. Take the input as user input. (5 Marks)

#include<stdio.h>
int main()
{
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter Number at Pos %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; ++i)
    {
        sum += arr[i];
    }

    printf("Summation of all elements of a 1D array: %d", sum);

    return 0;
}
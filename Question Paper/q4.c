// Write a C program to find sum and avarage of all elements of an array.   

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number of Elements you want to add to an array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Enter Number at Pos[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    
    printf("Sum = %d\nAvg = %d", sum, (sum/n));

    return 0;
}
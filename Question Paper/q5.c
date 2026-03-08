// Write a C program to to reverse the array using user defined function.

#include<stdio.h>

void reverseArray(int arr[], int revArr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        revArr[i] = arr[n - i - 1];
    }
}

int main()
{
    int n = 5;
    int arr[] = {1,2,3,4,5};
    int revArr[n];

    printf("Before Reverse:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, revArr, n);

    printf("\nAfter Reverse:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", revArr[i]);
    }

    return 0;
}
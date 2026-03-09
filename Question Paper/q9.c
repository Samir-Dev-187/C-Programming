// Write a C Program to merge two string using pointers.

#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    p1 = str1;
    p2 = str2;

    while(*p1 != '\0')   // move pointer to end of first string
    {
        p1++;
    }

    while(*p2 != '\0')   // copy second string into first
    {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';   // end the merged string

    printf("Merged String: %s", str1);

    return 0;
}
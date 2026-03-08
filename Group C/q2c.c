// Write a C program to find the length of a string

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[100];
    
    printf("Enter String: ");
    scanf("%s", &ch);
    
    int i = 0, len = 0;
    while (ch[i] != '\0')
    {
        len++;
        i++;
    }

    printf("Length: %d", len);

    return 0;
}
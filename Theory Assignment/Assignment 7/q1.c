// find length of a string

#include<stdio.h>
int main()
{
    char ch[50];
    printf("Enter String: ");
    gets(ch);

    int len = 0, i = 0;
    while (ch[i] != '\0')
    {
        len++;
        i++;
    }

    printf("Lenght Of String: %d\n", len);
    // puts(ch);
    return 0;
}
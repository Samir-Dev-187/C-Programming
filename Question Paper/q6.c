// Write a C proogram to find out the total number of vowels from a string

#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    int i = 0;
    int vol = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'E' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vol++;
        }
        ++i;
    }

    printf("No of Vowels: %d", vol);

    return 0;
}
// Write a program to read a text file character by character and write its content
// twice in separate file.

#include<stdio.h>
int main()
{
    FILE *fpr, *fpw;
    fpr = fopen("readtext.txt", "r");
    fpw = fopen("writetext.txt", "w");

    if (fpr == NULL || fpw == NULL) printf("File not exist! ");

    char ch;
    while (1)
    {
        ch = fgetc(fpr);
        fputc(ch, fpw);

        if (ch == EOF) break;
    }
    
    return 0;
}

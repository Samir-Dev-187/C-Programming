// check palindrone or not

#include<stdio.h>
int main()
{
    int n = 138;
    int copyN = n;
    int digit = 0;

    while (n > 0)
    {
        int rem = n % 10;
        digit = digit*10 + rem; 
        n /= 10;
    }

    if (copyN == digit) printf("Palindrone Number");
    else printf("Nota a Palindrone Number");
    
    return 0;
}
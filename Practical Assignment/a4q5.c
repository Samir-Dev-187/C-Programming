// Check Armstrong Number
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 13;
    int copyN = n;
    int digit = 0, sum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem,3);
        n /= 10;
    }
    
    if (sum == copyN) printf("Armstrong Number");
    else printf("Not a Armstrong Number");

    return 0;
}
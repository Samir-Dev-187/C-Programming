// Write a C program to find the root of a Quadratic funtion.

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b,c;
    printf("Enter values of a: ");
    scanf("%f", &a);
    printf("Enter values of b: ");
    scanf("%f", &b);
    printf("Enter values of c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Not a Quadratic Equation");        
        return 0;
    }

    if (((b*b)-4*a*c) < 0.0)
    {
        printf("Roots are Imaginary/Complex \n");
        return 0;
    }

    float sq = sqrt((b*b)-4*a*c);
    float x1 = (-b + sq)/(2*a);
    float x2 = (-b - sq)/(2*a);

    printf("Root of Quadratic Function is: %.2f and %.2f", x1, x2);

    return 0;
}
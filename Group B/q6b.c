/*
Develop a C program that implements a student grading system using if-else-if-else statements. The program should prompt the user to enter a student's numerical score (between 0 and 100). Based on the input score, determine and display the corresponding letter grade according to the following criteria:

Grade O: 90–100

Grade E: 80–89

Grade A: 70–79

Grade B: 60–69

Grade C: 50–59

Grade D: 40–49

Grade F: Less than 40
*/

#include<stdio.h>

int main()
{
    int score;
    printf("Enter Student Score(between 0 and 100): ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100)
    {
        printf("Grade: O");
    }
    else if (score >= 80 && score <= 89)
    {   
        printf("Grade: E");
    }
    else if (score >= 70 && score <= 79)
    {   
        printf("Grade: A");
    }
    else if (score >= 60 && score <= 69)
    {   
        printf("Grade: B");
    }
    else if (score >= 50 && score <= 59)
    {   
        printf("Grade: C");
    }
    else if (score >= 40 && score <= 49)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: F");
    }

    return 0;
}
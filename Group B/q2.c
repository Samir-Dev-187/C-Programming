//Write a C program to display the smallest of 6 integer positive numbers using ternary operator and loop.

#include <stdio.h>

int main() {
    int current_n;
    int smallest; // Variable to store the smallest number found so far

    printf("Enter 6 positive integers.\n");

    for (int i = 0; i < 6; ++i) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &current_n);

        // Ensure the number entered is positive as per the problem requirement
        if (current_n <= 0) {
            printf("Please enter a positive integer.\n");
            i--; // Decrement counter to re-prompt for the same number
            continue;
        }

        // For the first number, initialize 'smallest'
        if (i == 0) {
            smallest = current_n;
        } else {
            // Use the ternary operator to find the smaller of the two numbers
            smallest = (current_n < smallest) ? current_n : smallest;
        }
    }

    printf("The smallest positive number is: %d\n", smallest);

    return 0;
}

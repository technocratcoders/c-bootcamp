/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-05

Q.10) Write a program to find the average of two numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Taking avg variable as float because it may contain decimal values
    float avg;
    
    // Calculating average
    avg = (float) (num1 + num2) / 2;
    
    // Printing average
    printf("The average of %d and %d is %.1f", num1, num2, avg);
    
    return 0;
}

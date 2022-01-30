/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-07

Q.1) Write a program to calculate the total and percentage of five
subjects (out of 100).
*/

#include <stdio.h>
#include <math.h>

int main() {
    int m1, m2, m3, m4, m5;
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
    // Taking tot and per variables as float because they may contain decimal values
    float tot, per;
    
    // calculating total and percentage
    tot = m1 + m2 + m3 + m4 + m5;
    per = tot / 5;
    
    // Printing total and percentage
    printf("Total marks: %.2f", tot);
    printf("\nPercentage: %.2f", per);
    
    return 0;
}

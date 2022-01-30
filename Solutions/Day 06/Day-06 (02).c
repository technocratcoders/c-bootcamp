/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-06

Q.2) Write a program to calculate the circumference of a circle.
*/

#include <stdio.h>

int main() {
    int rad;
    printf("Enter radius of the circle: ");
    scanf("%d", &rad);
    
    // Taking circum variable as float because it may contain decimal values
    float circum;
    
    // Circumference = 2πr
    circum = 2 * 3.14 * rad;
    
    // Printing circumference
    printf("The circumference of the circle with entered radius is %.2f", circum);
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-04

Q.4) Write a program to find the area of a circle.
*/

#include <stdio.h>

int main() {
    
    int rad;
    float area = 0;
    
    printf("Enter the radius of circle: ");
    scanf("%d", &rad);          // Taking the radius of circle as input
    
    area = 3.14 * rad * rad;
    
    printf("The area of circle with the entered radius is %f", area);                     // Printing area
    
    return 0;
}

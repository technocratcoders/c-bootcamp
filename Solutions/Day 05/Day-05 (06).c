/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-05

Q.6) Write a program to find the volume of a cylinder.
*/

#include <stdio.h>

int main() {
    int rad, height;
    printf("Enter the radius and height of cylinder: ");
    scanf("%d %d", &rad, &height);
    
    // Taking area variable as float because it may contain decimal values
    float area;
    
    // Area of cylinder = 2πr(h+r)
    area = 2 * 3.14 * rad * (rad + height);
    
    // Printing Area
    printf("The area of the cylinder with entered radius and height is: %f", area);
    
    return 0;
}

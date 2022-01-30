/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-05

Q.6) Write a program to find the volume of a cylinder.
*/

#include <stdio.h>

int main() {
    int rad, height;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%d %d", &rad, &height);
    
    // Taking vol variable as float because it may contain decimal values
    float vol;
    
    // Volume of cylinder = π*r*r*h
    vol = 3.14159 * rad * rad * height;
    
    // Printing Volume
    printf("The volume of the cylinder with entered radius and height is: %f", vol);
    
    return 0;
}

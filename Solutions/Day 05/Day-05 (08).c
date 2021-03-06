/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-05

Q.8) Write a program to find the volume of a cone.
*/

#include <stdio.h>

int main() {
    int rad, height;
    printf("Enter the radius and height of the cone: ");
    scanf("%d %d", &rad, &height);
    
    // Taking vol variable as float because it may contain decimal values
    float vol;
    
    // Volume of cone = 1/3*π*r*r*h
    vol = (float) 3.14 * rad * rad * height / 3;
    
    // Printing Volume
    printf("The volume of the cone with entered radius and height is: %.2f", vol);
    
    return 0;
}

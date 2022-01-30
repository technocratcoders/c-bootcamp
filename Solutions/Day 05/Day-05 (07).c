/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-05

Q.7) Write a program to find the volume of a sphere.
*/

#include <stdio.h>

int main() {
    int rad;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &rad);
    
    // Taking vol variable as float because it may contain decimal values
    float vol;
    
    // Volume of sphere = 4/3*π*r*r*r
    vol = (4 / 3) * 3.14159 * rad * rad * rad;
    
    // Printing Volume
    printf("The volume of the sphere with entered radius and height is: %f", vol);
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-06

Q.3) Write a program to calculate the area of a triangle using heron's
formula.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Taking s and area variables as float because they may contain decimal values
    float s, area;
    
    // calculating semi-perimeter and area
    s = (float) (a + b + c) / 2;
    area = (float) sqrt( s * (s-a) * (s-b) * (s-c) );
    
    // Printing area
    printf("The area of the triangle with the entered side is %.2f", area);
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-04

Q.5) Write a program to find the area of a triangle.
*/

#include <stdio.h>

int main() {
    
    int height, base;
    float area = 0;
    
    printf("Enter the base and height of triangle: ");
    scanf("%d %d", &base, &height);              // Taking the base and height of triangle as input
    
    area = 0.5 * base * height;
    
    printf("The area of triangle with the entered base and height is %f", area);              // Printing area
    
    return 0;
}

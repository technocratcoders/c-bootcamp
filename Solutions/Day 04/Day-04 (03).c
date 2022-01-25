/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-04

Q.3) Write a program to find the area of a square.
*/

#include <stdio.h>

int main() {
    
    int side, area = 0;
    
    printf("Enter the side of square: ");
    scanf("%d", &side);          // Taking the side of square as input
    
    area = side * side;
    
    printf("The area of square with the entered side length is %d", area);                     // Printing area
    
    return 0;
}

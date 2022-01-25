/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-04

Q.2) Write a program to multiply two numbers.
*/

#include <stdio.h>

int main() {
    
    int num1, num2, prod = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);          // Taking two numbers as input
    
    prod = num1 * num2;
    
    printf("The product of entered two numbers is %d", prod);                     // Printing product
    
    return 0;
}

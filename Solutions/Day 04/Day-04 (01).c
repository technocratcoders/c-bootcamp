/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-04

Q.1) Write a program to add two numbers.
*/

#include <stdio.h>

int main() {
    
    int num1, num2, sum = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);          // Taking two numbers as input
    
    sum = num1 + num2;
    
    printf("The sum of entered two numbers is %d", sum);                     // Printing sum
    
    return 0;
}

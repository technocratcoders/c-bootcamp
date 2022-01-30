/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-08

Q.1) Write a program to find the smaller between two numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Checking whether num1 is smaller or not
    if(num1 < num2)
        printf("%d is smaller between the two entered numbers", num1);
    
    // Checking whether num2 is smaller or not
    if(num2 < num1)
        printf("%d is smaller between the two entered numbers", num2);
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-08

Q.2) Write a program to find whether the entered number is divisible by 5 or not.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking whether num is divisible by 5 or not
    if(num % 5 == 0)
        printf("%d is divisible by 5", num);
    
    // Checking whether num is divisible by 5 or not
    if(num % 5 != 0)
        printf("%d is not divisible by 5", num);
    
    return 0;
}

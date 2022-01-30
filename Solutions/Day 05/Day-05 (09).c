/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-05

Q.9) Write a program to find the square and cube of a given number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int sq, cu;
    
    // Calculating square
    sq = num * num;
    
    // Calculating cube
    cu = num * num * num;
    
    // Printing square & cube
    printf("The square and cube of %d is %d and %d respectively", num, sq, cu);
    
    return 0;
}

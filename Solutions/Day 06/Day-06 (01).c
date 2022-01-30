/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-06

Q.1) Write a program to calculate simple interest.
*/

#include <stdio.h>

int main() {
    int p, r, t;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    
    printf("Enter rate: ");
    scanf("%d", &r);
    
    printf("Enter time period: ");
    scanf("%d", &t);
    
    // Taking si variable as float because it may contain decimal values
    float si;
    
    // SI = PRT / 100
    si = (float) (p * r * t) / 100;
    
    // Printing simple interest
    printf("The simple interest on entered amount is %.2f", si);
    
    return 0;
}

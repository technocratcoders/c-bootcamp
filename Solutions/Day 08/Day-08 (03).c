/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-08

Q.3) Write a program to convert celsius temperature into fahrenheit.
*/

#include <stdio.h>

int main() {
    float cels;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &cels);
    
    float fahren;
    
    // Converting celsius temperature into fahrenheit
    fahren = (cels * 1.8) + 32;    
    
    // Printing temperature in fahrenheit
    printf("Temperature in fahrenheit: %.2f", fahren);
    return 0;
}

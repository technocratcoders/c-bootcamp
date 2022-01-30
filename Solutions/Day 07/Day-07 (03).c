/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-07

Q.3) Write a program to convert centimeters into km, m & cm.
*/

#include <stdio.h>

int main() {
    int cm;
    printf("Enter the distance in centimeters: ");
    scanf("%d", &cm);
    
    int km, m;
    
    km = cm / 100000;
    cm %= 100000;
    m = cm / 100;
    cm %= 100;
    
    // Printing time in km, m and cm
    printf("%d kilometers %d meters %d centimeters", km, m, cm);
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-07

Q.2) Write a program to convert seconds into hour, minute and second.
*/

#include <stdio.h>

int main() {
    int sec;
    printf("Enter the time in seconds: ");
    scanf("%d", &sec);
    
    int hr, min;
    
    hr = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;
    
    // Printing time in hour, minute and seconds
    printf("%d hours %d minutes %d seconds", hr, min, sec);
    
    return 0;
}

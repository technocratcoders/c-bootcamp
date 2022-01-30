/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-09

Q.3) Write a program to check whether a year is a leap or not.
*/

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if(year % 100 == 0) {
        
        if(year % 400 == 0)
            printf("%d is a leap year", year);
        else
            printf("%d is not a leap year", year);
            
    } else {
        
        if(year % 4 == 0)
            printf("%d is a leap year", year);
        else
            printf("%d is not a leap year", year);
        
    }
    
    return 0;
}

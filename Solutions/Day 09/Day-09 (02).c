/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-09

Q.2) Write a program to check whether a number is divisible by 5 and 7 or not.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if(num % 5 == 0) {
        
        if(num % 7 == 0)
            printf("%d is divisible by both 5 and 7", num);
        else
            printf("%d is not divisible by both 5 and 7", num);
        
    } else
        printf("%d is not divisible by both 5 and 7", num);
    
    return 0;
}

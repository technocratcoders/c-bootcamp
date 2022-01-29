/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10

Q.4) Write a program to calculate the power of a given number upto a given term.
*/

#include <stdio.h>

int main() {
    int num, term;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Enter the term: ");
    scanf("%d", &term);
    
    int power = 1;
    
    for(int i=1; i<=term; i++) {
        // Multiplying 'num' with itself 'term' times
        power = power * num;
    }
    
    // Printing power
    printf("%d to the power %d is: %d", num, term, power);
    
    return 0;
}

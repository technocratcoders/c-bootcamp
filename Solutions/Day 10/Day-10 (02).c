/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10

Q.2) Write a program to print the sum of first n natural numbers.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int sum = 0;
    
    for(int i=1; i<=n; i++) {
        // Adding each number till n
        sum = sum + i;
    }
    
    // Printing sum
    printf("Sum of first %d natural numbers is: %d", n, sum);
    
    return 0;
}

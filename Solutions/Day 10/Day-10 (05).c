/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10

Q.5) Write a program to print fibonacci series (upto n terms).
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int first = 0, second = 1, sum = 0;
    
    // Printing first two elements as they are always constant
    printf("%d %d ", first, second);
    
    // i=3, because we have already printed two elements
    for(int i=3; i<=n; i++) {
        sum = first + second;
        printf("%d ", sum);
        
        // Interchanging values to get the next element
        first = second;
        second = sum;
    }
    
    return 0;
}

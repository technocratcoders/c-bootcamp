/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-13

Q.5) Write a program to print the following pattern (for n=5) -
* * * * *
 * * * *
  * * *
   * *
    *
    *
   * *
  * * *
 * * * *
* * * * *
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Printing the upwards pyramid
    for(int i=0; i<n; i++) {
        
        // Printing spaces
        for(int j=0; j<=i; j++) {
            printf(" ");
        }
        
        int star = n - i;
        // Printing stars
        for(int j=1; j<=star; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
    
    // Printing the downwards pyramid
    for(int i=1; i<=n; i++) {
        
        int space = n - i;
        // Printing spaces
        for(int j=0; j<=space; j++) {
            printf(" ");
        }
        
        // Printing stars
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

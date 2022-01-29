/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10

Q.5) Write a program to print the following pattern -
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
    
    for(int i=1; i<=n; i++) {
        int space = n - i;
        
        // Printing spaces
        for(int j=1; j<=space; j++) {
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

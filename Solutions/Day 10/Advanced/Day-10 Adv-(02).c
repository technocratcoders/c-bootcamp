/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10 (Advanced)

Q.2) Write a program to print the following pattern (for n=5) -
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
        
        // Printing stars
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

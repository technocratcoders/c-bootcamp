/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10 (Advanced)

Q.4) Write a program to print the following pattern -
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        // Printing spaces
        for(int j=1; j<i; j++) {
            printf(" ");
        }
        
        int star = n - i + 1;
        // Printing stars
        for(int j=1; j<=star; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

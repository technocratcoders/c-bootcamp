/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-11

Q.5) Write a program to print the following pattern (for n=5) -
    *
   * *
  * * *
 * * * *
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
    
    int space;
    
    // Printing downward's triangle
    space = n - 1;
    for (int j=1; j<=n; j++)
    {
        // Printing spaces
        for(int k=1; k<=space; k++)
        printf("-");
        
        // Printing stars
        for(int k=1; k<=2*j-1; k++)
        printf("*");
        
        space--;
        printf("\n");
    }    
    
    // Printing downward's triangle
    space = 1;
    for (int j = 1; j <= n - 1; j++)
    {
        // Printing spaces
        for (int k=1; k<=space; k++)
        printf("-");
        
        // Printing stars
        for (int k=1 ; k<=2*(n-j)-1; k++)
        printf("*");
        
        space++;
        printf("\n");
    }
    
    return 0;
}

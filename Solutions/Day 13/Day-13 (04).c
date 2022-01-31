/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-13

Q.4) Write a program to print the following pattern (for n=5)-
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
    
    int row = 2*n-1;
    int star;
    for(int i=1; i<=row; i++) {
        
        // Finding the total number of stars according to the row number
        if(i <= n) {
            star = i;
        }
        else {
            star = n - 1;
            n--;
        }
        
        // Printing stars
        for(int j=1; j<=star; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

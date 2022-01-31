/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-13

Q.1) Write a program to print the following pattern (for n=5) -
* * * * 1 * * * *
* * * 2 2 2 * * *
* * 3 3 3 3 3 * *
* 4 4 4 4 4 4 4 *
5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int star = 0, count = 0;
    
    for(int i=1; i<=n; i++) {
        
        star = n - i;
        // Printing the first triangle of stars
        for(int j=1; j<=star; j++) {
            printf("* ");
        }
        
        count = (2 * i) - 1;
        // Printing the first pyramid of numbers
        for(int j=1; j<=count; j++) {
            printf("%d ", i);
        }
        
        star = n - i;
        // Printing the second triangle of stars
        for(int j=1; j<=star; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}

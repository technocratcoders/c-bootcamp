/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-13

Q.3) Write a program to print the following pattern (for n=5) -
* * * * 1 * * * *
* * * 1 2 3 * * *
* * 1 2 3 4 5 * *
* 1 2 3 4 5 6 7 *
1 2 3 4 5 6 7 8 9
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
        
        count = 1;
        int digit = (2*i) - 1;
        // Printing the pyramid of digits
        for(int j=1; j<=digit; j++) {
            printf("%d ", count);
            count++;
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

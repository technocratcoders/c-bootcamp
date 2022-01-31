/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-13

Q.2) Write a program to print the following pattern (for n=5)-
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5
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
            printf("  ");
        }
        
        int count = i;
        
        // Printing 1st triangle of numbers
        for(int j=1; j<=i; j++) {
            printf("%d ", count);
            count--;
        }
        
        count = 2;
        
        // Printing 2nd triangle of numbers
        for(int j=1; j<i; j++) {
            printf("%d ", count);
            count++;
        }
        
        printf("\n");
    }
    
    return 0;
}

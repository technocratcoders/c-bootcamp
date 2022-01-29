/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10 (Advanced)

Q.6) Write a program to print the following pattern -
        1
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5
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
        
        int count = 2*i - 1;
        
        // Printing numbers
        for(int j=1; j<=count; j++) {
            printf("%d ", i);
        }
        
        printf("\n");
    }
    
    return 0;
}

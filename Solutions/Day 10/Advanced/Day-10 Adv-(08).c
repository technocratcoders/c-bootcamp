/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10 (Advanced)

Q.8) Write a program to print the following pattern (for n=5) -
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
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
        
        char ch = 'A';
        
        // Printing 1st triangle of numbers
        for(int j=1; j<=i; j++) {
            printf("%c ", ch);
            ch++;
        }
        
        ch = ch - 2;
        
        // Printing 2nd triangle of numbers
        for(int j=1; j<i; j++) {
            printf("%c ", ch);
            ch--;
        }
        
        printf("\n");
    }
    
    return 0;
}

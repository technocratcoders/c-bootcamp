/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-14

Q.4) Write a program to print the following pattern (for n=5) -
    A
   A B
  A B C
 A B C D
A B C D E
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        
        int space = n - i;
        // Printing spaces
        for(int j=0; j<space; j++) {
            printf(" ");
        }
        
        char ch = 'A';
        // Printing characters
        for(int j=1; j<=i; j++) {
            printf("%c ", ch);
            ch++;
        }
        
        printf("\n");
    }
    
    
    return 0;
}

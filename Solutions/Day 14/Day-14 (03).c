/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-14

Q.3) Write a program to print the following pattern (for n=5) -
    A
   B B
  C C C
 D D D D
E E E E E
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
        
        char ch = 'A' + (i-1);
        // Printing characters
        for(int j=1; j<=i; j++) {
            printf("%c ", ch);
        }
        
        printf("\n");
    }
    
    
    return 0;
}

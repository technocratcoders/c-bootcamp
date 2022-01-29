/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10 (Advanced)

Q.5) Write a program to print the following pattern -
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int count = 1;
    
    for(int i=1; i<=n; i++) {
        
        // Printing numbers
        for(int j=1; j<=i; j++) {
            printf("%d ", count);
            count++;
        }
        
        printf("\n");
    }
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-15

Q.5) Write a program to print the following pattern -
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int len = (2*n) - 1;
    int start = 0, end = len - 1;
    // Creating a 2D array to store the charac ters according to pattern
    int ans[len][len];
    
    while(n) {
        for(int i=start; i<=end; i++) {
            for(int j=start; j<=end; j++) {
                // Checking for the required condition
                if(i==start || i==end || j==start || j==end) {
                    ans[i][j] = n;
                }
            }
        }
        
        start++;
        end--;
        n--;
    }
    
    // Printing the array
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            printf("%d ", ans[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}

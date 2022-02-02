/*
Q) Write a program to print the following pattern -
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

    int size = 2*n - 1;

    for(int i=0; i<size; i++) {
        // Printing white spaces
        if((i+1) != n) {
            int space = n - i;
            while(space) {
                printf(" ");
                space--;
            }
        }

        // Getting the number of stars to be printed in the row.
        int star;
        i>=n ? star = size-i : star = i;

        // Printing stars
        for(int j=0; j<star; j++) {
            printf("* ");
        }

        printf("\n");
    }
    
    return 0;
}

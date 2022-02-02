/*
Q) Write a program to print the following pattern -
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        // Printing white spaces
        int space = n - i;
        while(space) {
            printf(" ");
            space--;
        }

        // Printing numbers
        int count = 1;
        for(int j=0; j<=i; j++) {
            printf("%d ", count);
            count++;
        }

        printf("\n");
    }
    
    return 0;
}

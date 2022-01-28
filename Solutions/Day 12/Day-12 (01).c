/*
Q) Write a program to print all prime numbers till a given number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // This will be our key element to access all prime numbers till num.
    int prime = 2;
    
    while (prime <= num) {
        int flag = 0;
        
        for (int i=2; i<=prime/2; i++) {
            if(prime % i == 0)
                flag = 1;
        }

        if(flag == 0) {
            // Printing the prime number.
            printf("%d ", prime);
        }
        
        prime++;
    }
    
    return 0;
}

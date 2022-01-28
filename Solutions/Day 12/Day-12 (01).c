/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-12

Q.1) Write a program to print all prime numbers till a given number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // key element to access all numbers till num
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

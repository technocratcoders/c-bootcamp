/*
Q) Write a program to print prime factors of a number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i=0; i<=num; i++) {
        if(num % i == 0) {
            int fact = i;

            // Checking whether fact is prime or not.
            int flag = 0;
            for (int j=2; j<=fact/2; j++) {
                if(fact % j == 0)
                    flag = 1;
            }
            if(flag == 0) {
                // Printing the prime factor.
                printf("%d ", fact);
            }
        }
    }
    
    return 0;
}

/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-12

Q.4) Write a program to print all palindrome numbers till a given number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i=0; i<=num; i++) {
        int rev = 0, rem;
        int temp = i;

        // Reversing the current value of i
        while (temp > 0) {
            rem = temp % 10;
            rev = rev*10 + rem;
            temp /= 10;
        }

        // Checking whether i is palindrome or not
        if(rev == i) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

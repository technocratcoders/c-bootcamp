/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-11

Q.3) Write a program to check whether a number is palindrome or not.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int rev = 0, rem;
    int temp = num;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev*10 + rem;
        temp /= 10;
    }

    if (rev == num) {
        printf("The entered number is a palindrome number");
    } else {
        printf("The entered number is not a palindrome number");
    }
    
    return 0;
}

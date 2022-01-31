/*
Q) Write a program to reverse a number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int rev = 0, rem;

    while (num > 0) {
        rem = num % 10;
        rev = rev*10 + rem;
        num /= 10;
    }

    printf("The reversed number is %d", rev);
    
    return 0;
}

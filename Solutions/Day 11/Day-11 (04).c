/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-11

Q.4) Write a program to find the sum of its digits.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = 0, rem;

    while (num > 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("The sum of digits of entered number is: %d", sum);
    
    return 0;
}

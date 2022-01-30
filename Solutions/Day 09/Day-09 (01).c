/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-09

Q.1) Write a program to find the smallest of three numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1 < num2) {
        if(num1 < num3)
            printf("%d is the smallest", num1);
        else
            printf("%d is the smallest", num3);
    } else {
        if(num2 < num3)
            printf("%d is the smallest", num2);
        else
            printf("%d is the smallest", num3);
    }
    
    return 0;
}

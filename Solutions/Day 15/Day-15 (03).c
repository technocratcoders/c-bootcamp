/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-15

Q.3) Write a program to store the table of a given number in an array.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);

    int table[10];
    
    // Calculating every element of the table one by one
    for(int i=1; i<=10; i++) {
        table[i-1] = num * i;
    }
    
    // Printing every element of the table one by one
    for(int i=0; i<10; i++) {
        printf("%d ", table[i]);
    }
    
    return 0;
}

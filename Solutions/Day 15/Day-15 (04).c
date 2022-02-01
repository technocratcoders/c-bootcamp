/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-15

Q.4) Write a program to find the average of 8 numbers.
*/

#include <stdio.h>

int main() {
    int num[8];
    
    printf("Enter the elements of the array: ");
    
    // Taking every element one by one
    for(int i=0; i<8; i++) {
        scanf("%d", &num[i]);
    }
    
    int sum = 0;
    
    // Calculating sum of every element of the array
    for(int i=0; i<8; i++) {
        sum += num[i];
    }
    
    printf("The average of entered 8 elements is: %d", sum/8);
    
    return 0;
}

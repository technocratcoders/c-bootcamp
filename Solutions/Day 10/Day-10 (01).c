/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-10

Q.1) Write a program to print the first 50 multiples of 13.
*/

#include <stdio.h>

int main() {
    
    for(int i=1; i<=50; i++) {
        int multiple = 13*i;
        printf("%d ", multiple);
    }
    
    return 0;
}

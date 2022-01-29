/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-12

Q.3) Write a program to print all armstrong numbers till a given number.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++) {
        int count=0, temp = i;
        
        // Counting the number of digits in i
        while(temp) {
            count++;
            temp /= 10;
        }
        
        int arm = 0;
        temp = i;
        
        // Checking whether i is armstrong or not
        while(temp) {
            int rem = temp % 10;
            arm = arm + pow(rem, count);
            temp /= 10;
        }
        
        // Printing the armstrong number
        if(arm == i)
            printf("%d ", i);
    }
    
    return 0;
}

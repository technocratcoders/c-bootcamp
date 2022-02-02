/*
Q) Write a program to print all armstrong numbers till a given number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // This will be our key element to access all prime numbers till num.
    int arm = 1;
    
    while (arm <= num) {
        int flag = 0;
        
        for (int i=2; i<=arm/2; i++) {
            if(arm % i == 0)
                flag = 1;
        }

        if(flag == 0) {
            // Printing the arm number.
            printf("%d ", arm);
        }
        
        arm++;
    }
    
    return 0;
}

/*
Q) Write a program to print fibonacci series using a do-while loop.
*/

#include <stdio.h>

int main() {
    int limit;
    printf("Enter the limit of the series: ");
    scanf("%d", &limit);
    
    int first = 0, second = 1, sum = 0;
    
    printf("%d %d ", first, second);
    
    do {
        int i = 3;
        sum = first + second;
        printf("%d ", sum);

        first = second;
        second = sum;
        i++;
    } while (i <= limit);
    
    
    return 0;
}

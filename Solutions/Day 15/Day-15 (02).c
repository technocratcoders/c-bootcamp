/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-15

Q.2) Write a program to print an array.
*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    
    // Giving a variable as array's size is not recommended. So always give the size of an array according to the constraints.
    int arr[10000];
    
    // Taking every element as input one by one
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Printing every element one by one
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

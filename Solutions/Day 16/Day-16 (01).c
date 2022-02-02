/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-16

Q.1) Write a program to create a duplicate array.
*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[1000];
    // Taking array as input
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    int dup[1000];
    // Storing each value of array in the duplicate array
    for(int i=0; i<size; i++) {
        dup[i] = arr[i];
    }
    
    printf("\nOriginal array: ");
    // Printing original array
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nDuplicate array: ");
    // Printing duplicate array
    for(int i=0; i<size; i++) {
        printf("%d ", dup[i]);
    }

    return 0;
}

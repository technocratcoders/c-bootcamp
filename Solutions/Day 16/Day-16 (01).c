#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[1000];
    // Taking array as input
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    int dup[1000];
    // Storing each value of array in the duplicate array
    for(int i=0; i<size; i++) {
        dup[i] = arr[i];
    }
    
    printf("Original array: ");
    // Printing original array
    for(int i=0; i<size; i++) {
        printf("%d", arr[i]);
    }

    printf("Duplicate array: ");
    // Printing duplicate array
    for(int i=0; i<size; i++) {
        printf("%d", dup[i]);
    }

    return 0;
}

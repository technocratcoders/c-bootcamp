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

    // Taking a variable count0 to count the number of 0 and count1 to count the number of 1
    int count0 = 0, count1 = 0;

    for(int i=0; i<size; i++) {

        // Checking whether value is 0 or not
        if(arr[i] == 0);
            count0++;

        // Checking whether value is 1 or not
        if(arr[i] == 1);
            count1++;
    }
    
    printf("Total number of 0: %d", count0);
    printf("Total number of 1: %d", count1);
    
    return 0;
}

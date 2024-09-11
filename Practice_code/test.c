#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Initial allocation of memory for 5 integers
    arr = (int *)malloc(5 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array with values
    for (i = 0; i < 5; i++) {
        arr[i] = i + 1; // Storing values 1, 2, 3, 4, 5
    }

    // Print the initially allocated array
    printf("Initial array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory to expand the array to hold 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize the new elements with values
    for (i = 5; i < 10; i++) {
        arr[i] = i + 1; // Storing values 6, 7, 8, 9, 10
    }

    // Print the expanded array
    printf("Expanded array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
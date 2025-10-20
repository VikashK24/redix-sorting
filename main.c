#include <stdio.h>
#include "rslib.h"

// Main function:radix-sort function called in main 
int main() {
    int arr[] = {40,23,167,17};
    int n = sizeof(arr)/sizeof(arr[0]);

    radixSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

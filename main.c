#include <stdio.h>
#include "rslib.h"

// Main function
int main() {
    int arr[] = {0, 45, 75, 90, 34, 2, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    radixSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

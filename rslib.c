#include "rslib.h"

// Radix Sort function
void radixSort(int arr[], int n) {
    // Find maximum number
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Sort each digit place
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Counting sort for a specific digit
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};
//    for(int i=0; i<10; i++) printf("printing the vlaues %d: %d\n", i, count[i]);

    // Count occurrences of digits
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    // Update count[i] to positions
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (stable sort)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy output back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

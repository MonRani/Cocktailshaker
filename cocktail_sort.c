#include <stdio.h>

void cocktailSort(int arr[], int n) {
    int swapped = 1;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = 0;

        // Move from left to right (like bubble sort)
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }

        // If no swaps occurred, the array is already sorted
        if (!swapped)
            break;

        swapped = 0;

        // Move from right to left
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }

        // Move starting index to the right
        ++start;
    }
}

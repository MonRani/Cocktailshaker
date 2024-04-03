#include <stdio.h>

// Function prototype for cocktailSort
void cocktailSort(int arr[], int n);

int main() {
    int arr[] = {5, 2, 6, 1, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the cocktailSort function
    cocktailSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

// Function prototype for cocktailSort
void cocktailSort(int arr[], int n);

int main() {
    // Example of election votes
    int votes[] = {1000, 850, 720, 630, 550, 490};
    int n = sizeof(votes) / sizeof(votes[0]);

    // Call the cocktailSort function to sort the election votes
    cocktailSort(votes, n);

    // Print the sorted election votes
    printf("Sorted election votes (ascending order):\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\n", votes[i]);
    }

    return 0;
}


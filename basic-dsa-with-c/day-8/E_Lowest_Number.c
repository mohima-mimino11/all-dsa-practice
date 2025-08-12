#include <stdio.h>

int main() {
    int N;

    // Read the number of elements
    scanf("%d", &N);

    int A[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Initialize the lowest number and its position with the first element
    int lowest_number = A[0];
    int lowest_position = 1; // Initialize with 1 for 1-based indexing

    // Iterate through the array starting from the second element
    for (int i = 1; i < N; i++) {
        // If the current element is smaller than the current lowest number
        if (A[i] < lowest_number) {
            lowest_number = A[i];
            lowest_position = i + 1; // Update position to 1-based index
        }
    }

    // Print the lowest number and its position
    printf("%d %d\n", lowest_number, lowest_position);

    return 0;
}
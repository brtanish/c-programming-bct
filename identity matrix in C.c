#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Initialize the matrix as identity matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = 1;  // Set 1 on the diagonal
            } else {
                matrix[i][j] = 0;  // Set 0 for non-diagonal elements
            }
        }
    }

    // Print the identity matrix
    printf("The identity matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
i
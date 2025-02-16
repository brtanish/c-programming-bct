#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix must be square (rows = columns) to calculate upper triangular sum.\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the upper triangular matrix elements
    for (i = 0; i < rows; i++) {
        for (j = i; j < cols; j++) {
            sum += matrix[i][j]; // Only sum elements on or above the diagonal
        }
    }

    printf("\nSum of the upper triangular matrix elements: %d\n", sum);

    return 0;
}

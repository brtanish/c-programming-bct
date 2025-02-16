#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix must be square (rows = columns) to interchange diagonals.\n");
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

    // Interchange main diagonal and minor diagonal
    for (i = 0; i < rows; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][cols - i - 1];
        matrix[i][cols - i - 1] = temp;
    }

    // Display the modified matrix
    printf("\nMatrix after interchanging diagonals:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

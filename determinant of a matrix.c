#include <stdio.h>

int determinant(int matrix[10][10], int n) {
    int det = 0;
    int temp[10][10];
    int sign = 1;

    // Base case: If matrix is 2x2
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    // Recursively calculate the determinant using cofactor expansion
    for (int f = 0; f < n; f++) {
        int subi = 0;  // submatrix row index
        for (int i = 1; i < n; i++) {  // starting from row 1
            int subj = 0;  // submatrix column index
            for (int j = 0; j < n; j++) {
                if (j == f) continue;  // Skip the current column
                temp[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;  // Alternate signs for cofactor expansion
    }

    return det;
}

int main() {
    int matrix[10][10], n;

    printf("Enter the order of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = determinant(matrix, n);

    printf("The determinant of the matrix is: %d\n", result);

    return 0;
}

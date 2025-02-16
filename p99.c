#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers from 1 to (2*i-1)
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

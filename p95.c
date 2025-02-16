#include <stdio.h>

int main() {
    int i, j, rows = 5; // Number of rows for the pattern
    
    for (i = 1; i <= rows; i++) {
        // Print left stars
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }

        // Print spaces in the middle
        for (j = 1; j <= 2 * (i - 1) - 1; j++) {
            printf(" ");
        }

        // Print right stars
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

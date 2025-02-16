#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Upper half of the pattern
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars with spaces in between
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    // Lower half of the pattern
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars with spaces in between
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

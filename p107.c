#include <stdio.h>

int main() {
    int i, j, rows = 4;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending characters from 'A' to the ith character
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Print descending characters from the (i-1)th character back to 'A'
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

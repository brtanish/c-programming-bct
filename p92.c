#include <stdio.h>

int main() {
    int i, j, rows = 5; // Number of rows for the pattern
    
    for (i = rows; i >= 1; i--) { // Outer loop to control rows
        for (j = 1; j <= i; j++) { // Inner loop to print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

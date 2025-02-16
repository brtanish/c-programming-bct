#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows for the pattern
    
    for (i = rows; i >= 1; i--) { // Outer loop to control rows (decreasing)
        // Inner loop to print numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

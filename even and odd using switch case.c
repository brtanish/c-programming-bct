#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using switch-case to check if the number is even or odd
    switch (num % 2) {
        case 0:
            printf("The number %d is even.\n", num);
            break;
        case 1:
            printf("The number %d is odd.\n", num);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}

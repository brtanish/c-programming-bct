#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using switch-case to check if the number is positive, negative or zero
    switch (num > 0) {
        case 1:
            printf("The number %d is positive.\n", num);
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("The number %d is negative.\n", num);
                    break;
                case 0:
                    printf("The number is zero.\n");
                    break;
            }
            break;
    }

    return 0;
}

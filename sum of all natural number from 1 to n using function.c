#include <stdio.h>

int sumNaturalNumbers(int current, int n) {
    if (current > n) {
        return 0;
    }
    return current + sumNaturalNumbers(current + 1, n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sumNaturalNumbers(1, n));

    return 0;
}

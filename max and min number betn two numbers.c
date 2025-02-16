#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Maximum: %d\n", maximum(num1, num2));
    printf("Minimum: %d\n", minimum(num1, num2));
    
    return 0;
}

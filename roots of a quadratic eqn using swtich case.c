#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients a, b, c
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Switch-case to handle different cases based on discriminant
    switch ((discriminant > 0) ? 1 : (discriminant == 0) ? 0 : -1) {
        case 1:  // Discriminant > 0: Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct.\n");
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
            break;
        case 0:  // Discriminant == 0: One real root (repeated)
            root1 = root2 = -b / (2 * a);
            printf("The roots are real and equal.\n");
            printf("Root: %.2f\n", root1);
            break;
        case -1: // Discriminant < 0: Complex roots
            printf("The roots are complex and imaginary.\n");
            printf("Root 1: %.2f + %.2fi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
            printf("Root 2: %.2f - %.2fi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
            break;
        default:
            printf("Invalid case\n");
    }

    return 0;
}

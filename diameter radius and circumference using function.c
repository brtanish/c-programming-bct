#include <stdio.h>
#define PI 3.14159

float diameter(float radius) {
    return 2 * radius;
}

float circumference(float radius) {
    return 2 * PI * radius;
}

float area(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Diameter: %.2f\n", diameter(radius));
    printf("Circumference: %.2f\n", circumference(radius));
    printf("Area: %.2f\n", area(radius));
    
    return 0;
}

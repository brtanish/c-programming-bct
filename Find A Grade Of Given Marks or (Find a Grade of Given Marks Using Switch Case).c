#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Determine grade based on marks
    switch (marks / 10) {
        case 10:  // 90-100
        case 9:   // 90-99
            grade = 'A';
            break;
        case 8:   // 80-89
            grade = 'B';
            break;
        case 7:   // 70-79
            grade = 'C';
            break;
        case 6:   // 60-69
            grade = 'D';
            break;
        case 5:   // 50-59
            grade = 'E';
            break;
        default:   // below 50
            grade = 'F';
            break;
    }

    // Output the grade
    printf("Your grade is: %c\n", grade);

    return 0;
}

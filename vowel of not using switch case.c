#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert character to lowercase for uniformity (to handle both uppercase and lowercase)
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert to lowercase if it's uppercase

    // Switch-case to check if the character is a vowel or consonant
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {  // Check if the character is a valid alphabet
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input. Please enter a valid alphabet.\n");
            }
            break;
    }

    return 0;
}

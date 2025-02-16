#include <stdio.h>
#include <string.h>

void removeVowels(char str[]) {
    int i, j = 0;
    int length = strlen(str);
    
    for(i = 0; i < length; i++) {
        char ch = str[i];
        
        // Use switch-case to check for vowels
        switch(ch) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                // Skip vowels
                break;
            default:
                // If it's not a vowel, retain the character
                str[j++] = ch;
                break;
        }
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Remove vowels from the string
    removeVowels(str);

    // Output the modified string
    printf("String after removing vowels: %s\n", str);

    return 0;
}

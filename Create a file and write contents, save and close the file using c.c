#include <stdio.h>

int main() {
    FILE *file;
    const char *filename = "example.txt";

    // Open the file for writing
    file = fopen(filename, "w");
    
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;  // Return with error code if file can't be opened
    }

    // Write some content to the file
    fprintf(file, "Hello, this is a sample text written to the file.\n");
    fprintf(file, "File handling in C is fun!\n");

    // Close the file
    fclose(file);

    printf("Content successfully written to '%s' and file closed.\n", filename);

    return 0;
}

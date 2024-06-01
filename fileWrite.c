#include <stdio.h>

int main() {
    // Step 1: Declare a file pointer
    FILE *fptr;

    // Step 2: Open a file in write mode ("w")
    fptr = fopen("file.txt", "w");

    // Step 3: Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file for writing\n");
        return 1; // Return with an error code
    }

    // Step 4: Write some text to the file
    fprintf(fptr, "Hello, world!\n");
    fprintf(fptr, "This is a simple file writing example.\n");

    // Step 5: Close the file
    fclose(fptr);

    printf("File written successfully.\n");

    return 0; // Return with success code
}

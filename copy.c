#include <stdio.h>
#include <string.h> // Necessary for strcpy

int main() {
    char str1[20] = "Hello World"; // Source string
    char str2[20];                 // Destination string with enough space

    strcpy(str2, str1); // Copy the content of str1 into str2

    printf("%s\n", str2); // Print the copied string

    return 0; // Return 0 to indicate successful execution
}

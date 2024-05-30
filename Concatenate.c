#include <stdio.h>
#include <string.h> // Necessary for string functions like strcat

int main() {
    char str1[20] = "Hello "; // str1 is an array with space for 20 characters
    char str2[] = "World";   // str2 is an array initialized with "World"

    // Concatenate str2 to str1
    // After this operation, str1 will contain "HelloWorld"
    strcat(str1, str2);

    // Print the concatenated string
    printf("%s\n", str1); // Expected output: HelloWorld

    return 0; // Return 0 to indicate successful execution
}

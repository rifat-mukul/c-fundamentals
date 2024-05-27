#include <stdio.h>

int main() {
    char input[100];  // Define a buffer to store the input

    printf("Enter a line of text: ");
    fgets(input, sizeof(input), stdin);  // Read input from the user

    printf("You entered: %s", input);  // Print the input back to the user

    return 0;
}
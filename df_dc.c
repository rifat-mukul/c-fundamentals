#include <stdio.h>

// Function declaration
int myFunction(int, int);

int main() {
    // Call the function and store the result
    int result = myFunction(5, 3);
    
    // Print the result
    printf("The result is %d\n", result);

    return 0;
}

// Function definition
int myFunction(int x, int y) {
    // Return the sum of x and y
    return x + y;
}

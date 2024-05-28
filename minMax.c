#include <stdio.h>

int main() {
    int first = 1;
    int val, maxval, minval;

    printf("Enter integers (enter -1 to stop):\n");

    while (scanf("%d", &val) != EOF) {
        // Check if the input value is the break value (-1)
        if (val == -1) {
            break;
        }

        // Update maxval and minval
        if (first || val > maxval) {
            maxval = val;
        }
        if (first || val < minval) {
            minval = val;
        }

        // After the first iteration, set 'first' to 0
        first = 0;

        printf("Maximum: %d\n", maxval);
        printf("Minimum: %d\n", minval);
    }

    printf("Final Maximum: %d\n", maxval);
    printf("Final Minimum: %d\n", minval);

    return 0;
}



/*
Example of Execution:

Let's walk through an example to see how first works:

    Initial State:
        first = 1
        maxval and minval are uninitialized.

    First Input (e.g., val = 5):
        first || val > maxval -> 1 || 5 > maxval -> true (because first is true).
            maxval = 5
        first || val < minval -> 1 || 5 < minval -> true (because first is true).
            minval = 5
        first is set to 0 for subsequent iterations.

    Second Input (e.g., val = 3):
        first || val > maxval -> 0 || 3 > 5 -> false (because 3 is not greater than 5 and first is false).
            maxval remains 5.
        first || val < minval -> 0 || 3 < 5 -> true (because 3 is less than 5).
            minval = 3

    Third Input (e.g., val = 8):
        first || val > maxval -> 0 || 8 > 5 -> true (because 8 is greater than 5).
            maxval = 8
        first || val < minval -> 0 || 8 < 3 -> false (because 8 is not less than 3).
            minval remains 3.

*/

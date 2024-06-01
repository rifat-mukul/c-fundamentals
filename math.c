#include<stdio.h>
#include<math.h>

int sum( int x, int y) {
    int sm;

    for (x; x <= y; x++) {
        sm += x;
    }

    return sm;
}

int main() {
    int x, y;
    printf("Enter the staring and ending range of number : ");
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));
    printf("\n");
    return 0;
}

/*
The scanf("%d %d", &x, &y); statement works with input like 1 5 because scanf reads and assigns values to x and y based on the format specified. The format string "%d %d" expects two integer inputs separated by whitespace.

When you input 1 5, scanf:

Reads the first integer (1) and assigns it to x.
Reads the second integer (5) and assigns it to y.

Any whitespace (space, tab, newline) between the integers is ignored by scanf, allowing the input to be separated by spaces or other whitespace characters.
*/
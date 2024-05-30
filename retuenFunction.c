#include<stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int result = sum(6, 4);
    printf("The sum is %d\n", result);
    return 0;
}
#include<stdio.h>

int main() {
    char greet[] = "Hello";
    printf("Original String : %s\n", greet);
    greet[0] = 'J';
    printf("Modified String : %s\n", greet);
    return 0;
}
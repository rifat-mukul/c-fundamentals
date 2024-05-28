#include<stdio.h>

int main() {
    float myFloatNum = 3.5;

    printf("Default will show 6 digits after the decimal point : %f\n", myFloatNum);
    printf("Only show 1 digit : %.1f\n", myFloatNum);
    printf("Only show 2 digits : %.2f\n", myFloatNum);
    printf("Only show 4 digits : %.3f\n", myFloatNum);
    return 0;
}
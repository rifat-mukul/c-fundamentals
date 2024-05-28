#include<stdio.h>

int main() {
    int x = 5;
    int y = 2;
    int sum_int = x/y;

    float sum_float = (float) x/y;

    int myInt = 6.258;

    int maxScore = 500;
    int userScore = 423;
    float percentage = (float) userScore/maxScore * 100.0;

    // ==========================================

    printf("The sum in int formate : %d\n", sum_int);
    printf("Float sum is : %.1f\n", sum_float);
    printf("Float convert in Int formate : %d\n", myInt);
    printf("User percentage is : %.2f\n", percentage);
    return 0;
}
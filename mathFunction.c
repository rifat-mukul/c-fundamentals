#include<stdio.h>
#include<math.h>

void calcutation(float num) {
    printf("The celing number is : %f\n", ceil(num));
    printf("the floor number is : %f\n", floor(num));
}

int main() {
    float num;
    printf("Enter a number for calculation : ");
    scanf("%f", &num);
    calcutation(num);
    return 0;
}

/*
for run this code 
gcc mathFunction.c -o mathFunction -lm
./mathFunction

*/
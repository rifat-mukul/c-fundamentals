#include<stdio.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <0) {
        printf("Factorial is not defined for negative number \n");
    } else {
        printf("The factorial of %d is %d\n", num, factorial(num));
    }
    return 0;
}
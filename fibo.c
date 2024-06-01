#include<stdio.h>

int fibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num; 
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        int x = fibo(i);
        printf("%d ", x);
    }
    printf("\n");
    return 0;
}
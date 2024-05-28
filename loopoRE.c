#include<stdio.h>

int main() {
    int num = 2;
    int i;

    for (i = 0; i <10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
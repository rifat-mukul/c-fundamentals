#include<stdio.h>

int main() {
    int myNum[4] = {25, 26, 27, 28};
    int i;

    // Get the value of the first element in myNumbers
    printf("%d\n", *myNum);

    for (i =0; i < 4; i++) {
        printf("value : %d", myNum[i]);
        printf("  Memory address : %p\n", &myNum[i]);
    }
    return 0;
}
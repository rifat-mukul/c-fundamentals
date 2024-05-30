#include<stdio.h>

void myFunction(int number[5]) {
    for (int i = 0; i<5; i++) {
        printf("%d\n", number[i]);
    }
}

int main() {
    int number[5] = {10,20,30,40,50};
    myFunction(number);
    return 0;
}
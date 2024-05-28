#include<stdio.h>
#include<stdbool.h>

int main() {
    bool isProgramingFun = true;
    int x = 10;
    int y = 9;
    printf("%d\n", x > y);

    printf("%d\n", isProgramingFun); // Returns 1 (true)
    // ========================================================
    printf("Returns 1 (true), because 10 is equal to 10 : %d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("Returns 0 (false), because 10 is not equal to 15 : %d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("Returns 0 (false) because 5 is not equal to 55 : %d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55
    return 0;
}
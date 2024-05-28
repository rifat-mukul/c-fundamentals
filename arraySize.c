/*
- It is because the sizeof operator returns the size of a type in bytes.
 - You learned from the Data Types chapter that an int type is usually 4 bytes
*/
#include<stdio.h>

int main() {
    int numArray[] = {1,2,3,4,5};
    int length = sizeof(numArray) / sizeof(numArray[0]);

    printf("capacity of the array memory is : %lu\n", sizeof(numArray));
    printf("length of the array is : %d\n", length);
    return 0;
}
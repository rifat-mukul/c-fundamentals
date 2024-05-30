#include<stdio.h>

int main() {
    int myNum;
    char myChar; // Change the type of myChar to char

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    scanf("%d %c", &myNum, &myChar); // Provide the address of myChar directly

    printf("the number is : %d\n", myNum);
    printf("the character is : %c\n", myChar);
    return 0;
}

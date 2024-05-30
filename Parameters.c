#include<stdio.h>

void myFunction(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
    myFunction("Naimur", 24);
    myFunction("Kabir", 23);
    myFunction("Mukul", 23);
    return 0;
}
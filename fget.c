#include<stdio.h>
#include<string.h>

int main() {
    char fullName[20];
    printf("Enter the full name : ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);
    return 0;
}
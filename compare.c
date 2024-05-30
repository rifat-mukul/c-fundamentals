#include<stdio.h>
#include<string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "hi";

    printf("%d\n", strcmp(str1, str2));

    printf("%d\n", strcmp(str2, str3));
    return 0;
}
#include<stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("Could not open the file \n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
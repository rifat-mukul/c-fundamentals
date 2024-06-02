#include<stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");

    if (file == NULL)
    {
        /* code */
        printf("the file can not be open");
    }
    

    // char mystr[100];
    // while (fgets(mystr, 100, file))
    // {
    //     /* code */
    //     printf("%s", mystr);
    // }

    char myStr;

    while ((myStr = fgetc(file)) != EOF)
    {
        /* code */
        putchar(myStr);
    }
    

    fclose(file);
    
    return 0;
}
#include<stdio.h>

int main() {

    FILE *file = fopen("file.txt", "r");

    if (file != NULL)
    {
        /* code */
        char myStr[100];

        while (fgets(myStr, 100, file))
        {
            /* code */
            printf("%s", myStr);
        }
        
    } else {
        printf("The file can not be openn");
    }
    
    fclose(file);

    return 0;
}
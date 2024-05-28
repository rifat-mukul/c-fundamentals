#include<stdio.h>

int main() {
    int number; 

    do {
        printf("Enter a number : ");
        scanf("%d", &number);

        if (number <= 0)
        {
            /* code */
            printf("the number you entered is not positive\n");
        }

        
    } while (number <= 0);
    
    printf("Thank you the number you have entered is positive : %d\n", number);
    return 0;
}
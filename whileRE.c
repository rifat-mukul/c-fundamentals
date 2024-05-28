#include<stdio.h>

int main() {
    int dice;

    printf("Enter the number : ");
    scanf("%d", &dice);

    while (dice <= 6)
    {
        /* code */
        if (dice<6)
        {
            /* code */
            printf("YOur are not ok\n");
        } else {
            printf("You are ok\n");
        }
        dice += 1;
    }
    
    return 0;
}
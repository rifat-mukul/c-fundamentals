#include<stdio.h>

int main() {
    int i, num1, num2;

    printf("Enter the range of the number : ");
    scanf("%d", &num1);
    printf("enter the number till you want to print : ");
    scanf("%d", &num2);

    while (i < num1)
    {
        /* code */
        if (i == num2) {
            break;
        }
        printf("%d\n", i);
        i ++;
    }
    return 0;
    
}
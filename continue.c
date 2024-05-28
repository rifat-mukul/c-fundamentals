#include<stdio.h>

int main() {
    int i, num1, num2;

    printf("Enter the range of the number : ");
    scanf("%d", &num1);
    printf("enter the number you dont want to print : ");
    scanf("%d", &num2);

    while (i < num1)
    {
        /* code */
        if (i == num2) {
            i++; 
            continue;
        }
        printf("%d\n", i);
        i ++;
    }
    return 0;
    
}
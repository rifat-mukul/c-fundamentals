#include<stdio.h>

int main() {
    int day;

    printf("Enter a number for the day : ");
    scanf("%d", &day);

    switch(day) {
        case 1:
        printf("First day\n");
        break;
        case 2:
        printf("2nd day\n");
        break;
        case 3:
        printf("3rd day\n");
        break;
        case 4:
        printf("4th day\n");
        break;
        case 5:
        printf("5th day\n");
        break;
        case 6:
        printf("6th day\n");
        break;
        case 7:
        printf("7th day\n");
        break;
        default:
        printf("Looking forword to weekend\n");
    }

    return 0;
}
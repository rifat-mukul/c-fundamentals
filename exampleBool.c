#include<stdio.h>

int main() {
    int myAge;
    int votingAge = 18;

    printf("Enter your age\n");
    scanf("%d", &myAge);

    if (myAge >= votingAge) {
        printf("Old enough to Vote\n");
    } else{
        printf("Not old enough to vote\n");
    }

    return 0;
}
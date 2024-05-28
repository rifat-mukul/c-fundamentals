#include<stdio.h>

int main() {
    int i,j;

    for (i = 0; i < 5; i++) {
        printf("Print from the ============ outer  Loor\n");

        for ( j = 0; j < 3; j++)
        {
            /* code */
            printf("Print From the inner loop\n");
        }
        
    }
    return 0;
}
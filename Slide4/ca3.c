#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 4 == 0) {
            printf("%d \t",i);
        }
    }
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("\n");
        for (int j = 2; j <= 10; j++)
        {
            printf("%2d x %2d = %3d \t", j, i, i*j);
        }
    }

    int a = 10;
    while (a < 20) 
    {
        printf("Gia tri cua a: %d \n", a);
        a++;
        if (a > 15) {
            break;
        }
    }

    return 0;
}
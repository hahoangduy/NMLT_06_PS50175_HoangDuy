#include <stdio.h>

int main() {
    int a, b;
    float x;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    if (a == 0) {
        if(b == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        x = -(float)b / a;
        printf("Phuong trinh co nghiem: x = %.2f\n", x);
    }

    return 0;
}
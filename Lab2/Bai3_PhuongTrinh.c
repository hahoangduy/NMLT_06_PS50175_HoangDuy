#include <stdio.h>

int main() {
    float a, b;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("So a: %.2f\n", a);

    printf("So b: %.2f\n", b);
    float pTBN = -b/a;
    printf("Phuong trinh co nghiem: x = %.2f\n", pTBN);

    return 0;
}
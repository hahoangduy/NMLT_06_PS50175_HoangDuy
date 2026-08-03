#include <stdio.h>
#define n 5

int main() {
    int B[5] = {9, 6, 8, 7, 5};
    printf("Nhap cac phan tu cua mang B: \n");
    for (int i = 0; i < n; i++) {
        printf("Nhap B[%d] =", i);
        scanf("%d", &B[i]);
    }

    printf("Xuat mang moi nhap \n");
    for (int i = 0; i < n; i++) {
        printf("B[%d] = %d \n", i, B[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (B[j] < B[i]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;       
            }
        }
    }

    return 0;
}
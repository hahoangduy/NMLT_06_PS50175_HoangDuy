#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem: ");
    scanf("%f", &diem);

    if(diem >= 5.0) {
        printf("Dau \n");
    } else {
        printf("Rot \n");
    }


    if(diem >= 8) {
        printf("Gioi \n");
    } else if(diem >= 6.5) {
        printf("Kha \n");
    } else if(diem >= 5) {
        printf("Trung binh \n");
    } else {
        printf("Yeu \n");
    }
    return 0;
}
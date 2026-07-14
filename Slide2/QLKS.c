#include <stdio.h>

int main() {
    int soNgay, soTuan, soNgayLe;
    int giaNgay = 200;
    int giaTuan = 1300;

    printf("Nhap vao so ngay: ");
    scanf("%d", &soNgay);

    soTuan = soNgay / 7;

    soNgayLe = soNgay % 7;

    printf("Tong so ngay: %d\n", soNgay);

    printf("So tuan: %d\n", soTuan);

    printf("So ngay le: %d\n", soNgayLe);

    printf("Tong tien ban phai tra: %d\n", soTuan * giaTuan + soNgayLe * giaNgay);
    return 0;
}
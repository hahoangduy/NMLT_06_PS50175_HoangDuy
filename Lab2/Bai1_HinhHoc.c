#include <stdio.h>
#define PI 3.14159

int main() {
    float chieuDai, chieuRong, banKinh;
    printf("Nhap vao chieu dai hinh chu nhat: ");
    scanf("%f", &chieuDai);
    printf("Nhap vao chieu rong hinh chu nhat: ");
    scanf("%f", &chieuRong);

    
    float chuViHCN = 2 * (chieuDai + chieuRong);
    printf("Chu vi hinh chu nhat: %.2f\n", chuViHCN);
    
    float dienTichHCN = chieuDai * chieuRong;
    printf("Dien tich hinh chu nhat: %.2f\n", dienTichHCN);
    
    printf("\n");
    
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &banKinh);
    
    float chuViHT = 2 * PI * banKinh;
    printf("Chu vi hinh tron: %.2f\n", chuViHT);
    
    float dienTichHT = PI * banKinh * banKinh;
    printf("Dien tich hinh tron: %.2f\n", dienTichHT);
    

    return 0;
}
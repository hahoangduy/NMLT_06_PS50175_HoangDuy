#include <stdio.h>

void xepLoai(float diemTB) {
    if (diemTB >= 9.0) {
        printf("Xep loai xuat sac! \n");
    }
    else if (diemTB >= 8.0) {
        printf ("Xep loai gioi! \n");
    }
    else if (diemTB >= 6.5) {
        printf("Xep loai kha! \n");
    }
    else if (diemTB >= 5.0) {
        printf("Xep loai trung binh! \n");
    }
    else {
        printf("Xep loai yeu! \n");
    }

    return;
}

float tinhDiemTB (float toan, float ly, float hoa) {
    float diemTB = (toan + ly + hoa) / 3;

    return diemTB;
}

int main() {
    int choice;
    do {
        float toan, ly, hoa;
        float diemTB;
        printf("Chuc nang 1: Nhap diem Toan, Ly, Hoa \n");
        printf("Chuc nang 2: Thoat chuong trinh \n");
        printf("Moi chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao diem Toan, Ly Hoa: \n");
                scanf("%f %f %f", &toan, &ly, &hoa);

                diemTB = tinhDiemTB(toan, ly, hoa);
                printf("Diem toan: %.1f, diem ly: %.1f, diem hoa: %.1f \n", toan, ly, hoa);
                printf("Diem trung binh: %.1f \n", diemTB);
                xepLoai(diemTB);
                break;
            case 2: 
                printf("Dang thoat chuong trinh! \n");
                break;
            default:
                printf("Khong co chuc nang nay! \n");
                break;
        }
    }while (choice != 2);

    return 0;
}
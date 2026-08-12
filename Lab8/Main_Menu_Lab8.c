#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    int choice;
    do {
        printf("\n");
        printf("+------------------------------------------+\n");
        printf("|    HE THONG QUAN LY SINH VIEN (LAB 8)    |\n");
        printf("+------------------------------------------+\n");
        printf("1. Nhap va xuat danh sach sinh vien \n");
        printf("2. Sap xep sinh vien theo diem TB tang dan \n");
        printf("3. Tim kiem sinh vien theo Ma so sinh vien(MSSV) \n");
        printf("4. Xuat danh sach sinh vien dat hoc bong (>= 8.0) \n");
        printf("5. Thoat chuong trinh \n");
        printf("+-------------------------------+\n");
        printf("Xin moi chon chuc nang(1-5): ");
        scanf("%d", &choice);
        printf("\n");

        switch(choice) {
            case 1:

        }
    }while(choice != 5);

    return 0;
}
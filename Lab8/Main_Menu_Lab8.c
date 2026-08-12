#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

void nhapXuatSV(struct SinhVien mangSV[], int *n) {
    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin sinh vien thu %d: \n", i+1);
        printf("Nhap ma so sinh vien (MSSV): ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = '\0';

        printf("Nhap ho va ten : ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = '\0';

        printf("Nhap nganh hoc: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = '\0';
        
        printf("Nhap diem TB: ");
        scanf("%f", &mangSV[i].diemTB);
        getchar();
    }

    printf("Danh sach sinh vien: \n");
    for (int i = 0; i < *n; i++) {
        printf("Sinh vien thu %d: MSSV: %s | Ho ten: %s | Nganh hoc: %s | Diem TB: %.2f \n", i+1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void sapXepSinhVien(struct SinhVien mangSV1[], int *n1) {
    for (int i = 0; i < *n1; i++) {
        for (int j = 0; j < *n1-i-1; j++) {
            if (mangSV1[j].diemTB > mangSV1[j+1].diemTB) {
                struct SinhVien temp = mangSV1[j];
                mangSV1[j] = mangSV1[j+1];
                mangSV1[j+1] = temp;
            }
        }
    }
    printf("Danh sach sinh vien sau khi sap xep: \n");
    for (int i = 0; i < *n1; i++) {
        printf("Sinh vien thu %d: MSSV: %s | Ho ten: %s | Nganh hoc: %s | Diem TB: %.2f \n", i+1, mangSV1[i].mssv, mangSV1[i].tenSV, mangSV1[i].nganhHoc, mangSV1[i].diemTB);
    }
}


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
                int n;
                struct SinhVien mangSV[100];
                printf("Nhap vao so luong sinh vien: ");
                scanf("%d", &n);
                getchar();
                nhapXuatSV(mangSV, &n);
                break;
            case 2:
                int n1;
                struct SinhVien mangSV1[100];
                printf("Nhap vao so luong sinh vien: ");
                scanf("%d", &n1);
                getchar();
                nhapXuatSV(mangSV1, &n1);
                sapXepSinhVien(mangSV1, &n1);
        }
    }while(choice != 5);

    return 0;
}
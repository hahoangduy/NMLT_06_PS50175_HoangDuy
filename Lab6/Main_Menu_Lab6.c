#include <stdio.h>

void nhapPhanTu(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void tinhTrungBinhCong(int a[], int n) {
    float trungBinh = 0;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 5 == 0) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) {
        printf("Khong co so nao chia het cho 3 va 5! \n");
        return;
    }
    trungBinh = (float) sum / count;
    printf("Trung binh tong cua cac so chia het cho 3 va 5 la: %.2f", trungBinh);
}

void timMaxMin(int a[], int n) {
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("Max cua mang a la: %d, min cua mang a la: %d", max, min);
}


int main() {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 6    |\n");
        printf("+-------------------------------+\n");
        printf("1. Tinh trung binh tong so chia het cho 3 va 5 \n");
        printf("2. Tim gia tri Lon nhat va Nho nhat trong Mang \n");
        printf("3. Sap xep Mang theo thu tu Giam dan \n");
        printf("4. Ma tran binh phuong (Mang 2 chieu) \n");
        printf("5. Loc va xuat vi tri cac so le trong ma tran \n");
        printf("6. Thoat chuong trinh \n");
        printf("+-------------------------------+\n");
        printf("Xin moi chon chuc nang(1-6): ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice) {
            case 1: {
                int n;
                printf("Nhap vao so luong phan tu cua mang a: ");
                scanf("%d", &n);
                int a[n];
                nhapPhanTu(a, n);
                tinhTrungBinhCong(a, n);
                break;
            }
            case 2: {
                int n;
                printf("Nhap vao so luong phan tu cua mang a: ");
                scanf("%d", &n);
                int a[n];
                nhapPhanTu(a, n);
                timMaxMin(a, n);
                break;
            }
        }
    }while(choice != 6);
}
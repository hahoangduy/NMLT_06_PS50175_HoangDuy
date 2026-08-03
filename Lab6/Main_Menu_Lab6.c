#include <stdio.h>

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
        
    }while(choice != 6);
}
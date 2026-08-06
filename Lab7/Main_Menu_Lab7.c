#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 7    |\n");
        printf("+-------------------------------+\n");
        printf("1. Dem nguyen am va phu am trong chuoi \n");
        printf("2. Dang nhap he thong (User & Password) \n");
        printf("3. Sap xep danh sach chuoi theo thu tu Alphabet \n");
        printf("4. Chuoi doi so thap phan sang nhi phan(chuoi) \n");
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
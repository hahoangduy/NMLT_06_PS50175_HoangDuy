#include <stdio.h>
#include <string.h>

void demNguyenAmPhuAm(char str[50]) {
    int demNA = 0;
    int demPA = 0;
    strlwr(str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'e' || str[i] == 'u' || str[i] == 'o' || str[i] == 'a' || str[i] == 'i')
            demNA++;
        else if (str[i] < 97)
            continue;
        else
            demPA++;
    }
    printf("Chuoi cua ban co %d chu cai la nguyen am va %d chu cai la phu am \n", demNA, demPA);
}

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
        getchar();
        printf("\n");

        switch(choice) {
            case 1:
                char str[50];
                printf("Nhap vao 1 chuoi: ");
                fgets(str, sizeof(str), stdin);
                demNguyenAmPhuAm(str);
                break;
        }
    }while(choice != 5);

    return 0;
}
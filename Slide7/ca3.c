#include <stdio.h>
#include <string.h>

int main (){
    char hoTen[20]; // = {'A','B','C'};
    char hoTen2[20];
    char ngheNghiep[20];
    printf("Nhap ho ten:");
    // scanf("%s",hoTen);
    gets(hoTen);
    strcpy(hoTen2, hoTen);

    printf("Nhap nghe nghiep:");
    // scanf("%s",ngheNghiep);
    gets(ngheNghiep);

     for(int i=0; i<strlen(hoTen2);i++){
        printf("%C",hoTen[i]);
    }

    printf("\n\n");

    for(int i=0; i<strlen(ngheNghiep);i++){
        printf("%C",ngheNghiep[i]);
    }

    return 0;
}
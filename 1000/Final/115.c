#include <stdio.h>

void main(){
    char hoten[20];
    float diemtoan, diemvan;
    printf("Nhap ho ten: ");
    gets(hoten);
    fflush(stdin);
    printf("Nhap diem toan va van: ");
    scanf("%f%f", &diemtoan, &diemvan);

    printf("%s  %0.3f  %0.3f", hoten, diemtoan, diemvan);
}


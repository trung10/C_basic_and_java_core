#include <stdio.h>


int timThu(int ngay, int thang, int nam){
    int tongNgay = 0;
    int ngayThang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(nam < 0)
        return -1;
    if((thang < 1) || (thang > 12))
        return -1;
    if((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100)))
        ngayThang[1] = 29;
    if((ngay < 0) || (ngay > ngayThang[thang - 1]))
        return -1;
    int i;
    for(i = 0; i < thang; i++)
    tongNgay = ngayThang[thang - 2] + ngay;

    return ((nam - 1)/1 + ((nam - 1)/4 - (nam - 1)/100) + (nam -1)/400 + tongNgay) % 7;
}

void main(){
    switch(timThu(20, 2, 2017)){
    case 0:
        printf("Chu Nhat");
        break;
    case 1:
        printf("Thu hai");
        break;
    case 2:
        printf("Thu ba");
        break;
    case 3:
        printf("Thu tu");
        break;
    case 4:
        printf("Thu nam");
        break;
    case 5:
        printf("Thu sau");
        break;
    case 6:
        printf("Thu bay");
        break;
    }
}




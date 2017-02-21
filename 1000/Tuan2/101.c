#include <stdio.h>


int soNgayTrongThang(int thang, int nam){
    int ngayThang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(nam < 0)
        return -1;
    if((thang < 1) || (thang > 12))
        return -1;
    if((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100)))
        ngayThang[1] = 29;
    return ngayThang[thang - 1];
}

void main(){
    printf("Thang 2 nam 1996 co %d ngay", soNgayTrongThang(2, 1996));
}

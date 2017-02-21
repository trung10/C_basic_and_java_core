#include <stdio.h>


int timNgayTruoc(int ngay, int thang, int nam){
    int ngayThang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(nam < 0)
        return -1;
    if((thang < 1) || (thang > 12))
        return -1;
    if((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100)))
        ngayThang[1] = 29;
    if((ngay < 0) || (ngay > ngayThang[thang - 1]))
        return -1;
    if(ngay == 1){
       if(thang == 1){
            ngay = 31;
            thang = 12;
            nam --;
            return ngay * 1000000 + thang * 10000 + nam;
       }
       ngay = ngayThang[thang - 2], thang -= 1;
       return ngay * 1000000 + thang * 10000 + nam;
       }
    ngay --;
    return ngay * 1000000 + thang * 10000 + nam;
}

void main(){
    printf("Sau ngay 31 thang 12 nam 2016 la %d", timNgayTruoc(31, 12, 2016));
}



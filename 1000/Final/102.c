#include <stdio.h>


int timNgayKeTiep(int ngay, int thang, int nam){
    int ngayThang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(nam < 0)
        return -1;
    if((thang < 1) || (thang > 12))
        return -1;
    if((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100)))
        ngayThang[1] = 29;
    if((ngay < 0) || (ngay > ngayThang[thang - 1]))
        return -1;
    if(ngay == ngayThang[thang - 1]){
       if(thang == 12){
            ngay = 1;
            thang = 1;
            nam ++;
            return ngay * 1000000 + thang * 10000 + nam;
       }
       ngay = 1, thang += 1;
       return ngay * 1000000 + thang * 10000 + nam;
       }
    ngay ++;
    return ngay * 1000000 + thang * 10000 + nam;
}

void main(){
    printf("Sau ngay 31 thang 12 nam 2016 la ngay %d", timNgayKeTiep(31, 12, 2016));
}


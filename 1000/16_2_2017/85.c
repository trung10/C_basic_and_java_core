#include <stdio.h>

int timQuy(int thang){
    if((thang > 0) && (thang < 4))
        return 1;
    if((thang > 3) && (thang < 7))
        return 2;
    if((thang > 6) && (thang < 10))
        return 3;
    if((thang > 9) && (thang < 12))
        return 4;

    return -1;
}

void main(){
    printf("Nhap thang 8 la quy %d", timQuy(8));
}

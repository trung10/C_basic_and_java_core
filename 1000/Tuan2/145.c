#include <stdio.h>

void timgSoHoanThienDauTien(int a[], int n){
    int i, soHoanThien = -1;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            if(laSoHoanThien(a[i])){
                soHoanThien = a[i];
                break;
            }
        }
    }
    return soHoanThien;
}

int tongCacUocSoNguyenN(unsigned int n){
    int i, tong = 0;
    for(i = 1; i < m; i++){
        if(n % i == 0)
            tong += i;
    }
    return tong;
}

int laSoHoanThien(unsigned int n){
    if( n = tongCacUocSoNguyenN(n))
        return 1;
    return 0;
}

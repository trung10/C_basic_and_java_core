#include <stdio.h>

void timsohoanthiencuoicung(int a[], int n){
    int i;
    for(i = n - 1; i >= 0; i--){
        if(a[i] > 0){
            if(laSoHoanThien(a[i])){
                return i;
            }
        }
    }
    return -1;
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

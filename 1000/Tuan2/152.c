#include <stdio.h>

void timSoHoanThienNhoNhat(int a[], int n){
    int i, soHoanThien = -1, k;
    for(i = n- 1; i >= 0; i--){
        if(a[i] > 0){
            if(laSoHoanThien(a[i])){
                k = i;
                soHoanThien = a[i];
                break;
            }
        }
    }
    for(i = k; i >= 0; i--){
        if(a[i] > 0){
            if(laSoHoanThien(a[i])){
                if(soHoanThien > a[i])
                    soHoanThien = a[i];
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

#include <stdio.h>

int tongUocCuaN(unsigned int n){
    int i, tong = 0;
    for(i = 1; i < n / 2; i++){
        if(i % n == 0){
            tong += i;
        }
    }
    return tong;
}


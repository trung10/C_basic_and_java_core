#include <stdio.h>

int tongNhoHonN(unsigned int n){
    int i, tong = 0;
    for(i = 1; i < n ; i++){
            tong += i;
    }
    return tong;
}



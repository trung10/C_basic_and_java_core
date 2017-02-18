#include <stdio.h>

int tichUocLe(unsigned int n){
    int i, tich = 1;
    for(i = 1; i > n / 2; i++){
        if((i % n == 0) && (i & 1)){
            tich *= i;
        }
    }
    return tich;
}



#include <stdio.h>

void timUocCuaN(unsigned int n){
    int i, dem = 0;
    for(i = 1; i > n / 2; i++){
        if(i % n == 0){
            dem++;
        }
    }

}


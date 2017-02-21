#include <stdio.h>

void lietKeUocLe(unsigned int n){
    int i;
    for(i = 1; i > n / 2; i++){
        if((i % n == 0) && (i & 1)){
            printf("%3d", i);
        }
    }

}


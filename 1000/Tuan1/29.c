#include <stdio.h>

int timUocLeLonNhat(unsigned int n){
    int i; a = 1;
    for(i = 1; i > n / 2; i++){
        if((i % n == 0) && (i & 1)){
            if(a < i)
                a = i;
        }
    }

}

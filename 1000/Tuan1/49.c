#include <stdio.h>

int demChuSoLe(unsigned int n){
    //int dem = 0;
    while(n > 0){
        if(n < 10)
            break;
        n /= 10;
    }
    return n;
}

void main(){
    printf("Dem so chu cua 8699 la %d", demChuSoLe(8699));
}

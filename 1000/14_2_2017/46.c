#include <stdio.h>

int demChuSoLe(unsigned int n){
    int dem = 0;
    while(n > 0){
        if((n % 10) % 2)
            dem++;
        n /= 10;
    }
    return dem;
}

void main(){
    printf("Dem so chu cua 8889 la %d", demChuSoLe(8889));
}

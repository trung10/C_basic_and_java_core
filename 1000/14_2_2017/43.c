#include <stdio.h>

int demChuSo(unsigned int n){
    int dem = 1, i = 10;
    while(n/i > 1){
        i *= 10;
        dem++;
    }
    return dem;
}

void main(){
    printf("Dem so chu cua 8888 la %d", demChuSo(8888));
}

#include <stdio.h>

int LN(unsigned int n){
    int dem;
    while(n > 0){
        if((n % 10) < dem)
            dem = n % 10;
        n /= 10;
    }
    return dem;
}

void main(){
    printf("chu so nho nhat cua 8889 la %d", LN(8889));
}

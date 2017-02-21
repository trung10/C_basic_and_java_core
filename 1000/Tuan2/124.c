#include <stdio.h>

int coTonTaiSoNguyenNhoHon1024(int a[], int n){
    int i,
    float lonnhat = a[0];
    for(i = 0; i < n; i++){
        if(2004 > a[i]){
            return 1;
        }

    }
    return 0;
}

void main(){
    float a[5] = {1, 5, 7, 3, 7};
    printf("%d", coTonTaiSoNguyenNhoHon1024(a, 5));
}



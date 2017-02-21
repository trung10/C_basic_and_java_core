#include <stdio.h>

int baonhieusoNguyenNhoHon100(int a[], int n){
    int i;
    float lonnhat = 0;
    for(i = 0; i < n; i++){
        if(100 > a[i]){
            lonnhat++;
        }

    }
    return lonnhat;
}

void main(){
    int a[5] = {1, 5, 7, 3, 7};
    printf("%d", baonhieusoNguyenNhoHon100(a, 5));
}



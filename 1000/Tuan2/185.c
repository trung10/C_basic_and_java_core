#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    float lonNhat = giaTriLonNhat(a, n);
    for(int = 0; i < n ; i++){
        if(laSoChinhPhuong(a[i])){
                printf("%d ", a[i]);
    }
}

int laSoChinhPhuong(int n){
    return (sqrt(n) - (int) sqrt(n)) ? 0 : 1;
}



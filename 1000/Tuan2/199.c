#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    for(int = 0; i < n ; i++){
        if(laSoNguyenTo(a[i])){
                printf("%3d ", i);
    }
}

int laSoNguyenTo(int n){
    int i;
    for(i = 2; i < sqrt(n); i++){
        if(n % 2 == 0)
            return 0;
    }
    return 1;
}


